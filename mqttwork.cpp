#include "mqttwork.h"
#include<QDateTime>
#include <QRandomGenerator>
#include<QString>
#include<QTimer>
#include <QWidget>
#include <QObject>
#include<QMqttClient>
#include<QJsonDocument>
Mqttwork::Mqttwork(QObject *parent)
    : QObject{parent}
{
    my_mqttclient=nullptr;
    my_heartbeatTimer=new QTimer(this);
    my_heartbeatTimer->setInterval(30000);
    connect(my_heartbeatTimer,&QTimer::timeout,this,&Mqttwork::sendOnlineStatus);
}
Mqttwork::~Mqttwork(){
}
void Mqttwork::initMqtt(){
    if(!my_mqttclient){
        my_mqttclient=new QMqttClient(this);
        connect(my_mqttclient,&QMqttClient::connected,this,&Mqttwork::onMqttConnected);
        connect(my_mqttclient,&QMqttClient::disconnected,this,&Mqttwork::onMqttdisconnected);
        connect(my_mqttclient, &QMqttClient::messageReceived, this,
                [this](const QByteArray &message, const QMqttTopicName &topic) {
                    QString topicName = topic.name();
                    QByteArray payload = message;
                    this->onMqttMessageReceived(topicName,payload);
                });
    }
}
void Mqttwork::connectMqtt(const QString &brokerAddr, quint16 port, const QString &uniqueUsername, const QString &nickname){
    if(!my_mqttclient){
        return ;
    }
    my_uniqueUsername=uniqueUsername;
    my_nickname=nickname;
    my_mqttclient->setHostname(brokerAddr);
    my_mqttclient->setClientId(CLIENT_ID_PREFIX + my_uniqueUsername);
    my_mqttclient->setCleanSession(true);
    my_mqttclient->setKeepAlive(60);
    my_mqttclient->setPort(port);
    my_mqttclient->connectToHost();
}
void Mqttwork::disconnectMqtt(){
    if(my_mqttclient&&my_mqttclient->state()==QMqttClient::Connected){
        QJsonObject statusobj;
        statusobj["username"]=my_uniqueUsername;
        statusobj["nickname"]=my_nickname;
        statusobj["status"]="offline";
        my_mqttclient->publish(STATUS_TOPIC,QJsonDocument(statusobj).toJson(QJsonDocument::Compact),1,false);
        my_heartbeatTimer->stop();
        my_mqttclient->disconnectFromHost();
    }
}
void Mqttwork::sendGroupMessage(const QString &content){
    if(my_mqttclient&&my_mqttclient->state()==QMqttClient::Connected){
        QJsonObject msgobj;
        msgobj["username"]=my_uniqueUsername;
        msgobj["nickname"]=my_nickname;
        msgobj["content"]=content;
        msgobj["time"]=QDateTime::currentDateTime().toString("HH:mm:ss");
        my_mqttclient->publish(GROUP_TOPIC,QJsonDocument(msgobj).toJson(QJsonDocument::Compact),1,false);
    }
}
void Mqttwork::sendPrivateMessage(const QString &targetUsername, const QString &content){
    if (!my_mqttclient || my_uniqueUsername.isEmpty() || targetUsername.isEmpty()) return;
    QString privateTopic=PRIVATE_TOPIC_PREFIX+ my_uniqueUsername + "/" + targetUsername;
    QJsonObject msgobj;
    msgobj["username"]=my_uniqueUsername;
    msgobj["nickname"]=my_nickname;
    msgobj["content"]=content;
    msgobj["time"]=QDateTime::currentDateTime().toString("HH:mm:ss");
    my_mqttclient->publish(privateTopic,QJsonDocument(msgobj).toJson(QJsonDocument::Compact),1,false);
}

void Mqttwork::onMqttConnected(){
    my_mqttclient->subscribe(STATUS_TOPIC,1);
    my_mqttclient->subscribe(GROUP_TOPIC,1);
    QString privateSub=PRIVATE_TOPIC_PREFIX+"#/" + my_uniqueUsername ;
    my_mqttclient->subscribe(privateSub,1);
    sendOnlineStatus();
    my_heartbeatTimer->start();
    emit mqttConnected();
}
void Mqttwork::onMqttdisconnected(){
    my_heartbeatTimer->stop();
    emit mqttDisconnected();
}
void Mqttwork::onMqttMessageReceived(const QString &topicName, const QByteArray &payload){
    QJsonDocument doc=QJsonDocument::fromJson(payload);
    if (!doc.isObject()) return;
    QJsonObject msgobj=doc.object();
    if(topicName==GROUP_TOPIC){
        QString senderNickname=msgobj["nickname"].toString();
        QString content=msgobj["content"].toString();
        QString time=msgobj["time"].toString();
        emit newGroupMessage(senderNickname,content,time);
    }else if(topicName.startsWith(PRIVATE_TOPIC_PREFIX)){
        QStringList topicParts = topicName.split("/");
        if (topicParts.size() != 4) return;
        QString senderUsername = topicParts[2];
        QString targetUsername = topicParts[3];
        if (targetUsername != my_uniqueUsername) return;
        QString senderNickname=msgobj["nickname"].toString();
        QString content=msgobj["content"].toString();
        QString time=msgobj["time"].toString();
        emit newPrivateMessage(senderNickname,senderUsername,content,time);
    }else if(topicName == STATUS_TOPIC){
        QString username = msgobj["username"].toString();
        QString nickname = msgobj["nickname"].toString();
        QString status = msgobj["status"].toString();
        if (status == "online" && !my_onlineUsers.contains(username)) {
            my_onlineUsers.append(username);
            emit onlineUserUpdated(my_onlineUsers);
        } else if (status == "offline" && my_onlineUsers.contains(username)) {
            my_onlineUsers.removeAll(username);
            emit onlineUserUpdated(my_onlineUsers);
        }
    }
}
void Mqttwork::sendOnlineStatus(){
    if (!my_mqttclient || my_mqttclient->state() != QMqttClient::Connected) return;
    QJsonObject statusObj;
    statusObj["username"] = my_uniqueUsername;
    statusObj["nickname"] = my_nickname;
    statusObj["status"] = "online";
    my_mqttclient->publish(STATUS_TOPIC, QJsonDocument(statusObj).toJson(QJsonDocument::Compact), 1, false);
}
