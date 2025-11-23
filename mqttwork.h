#ifndef MQTTWORK_H
#define MQTTWORK_H

#include <QObject>
#include <QWidget>
#include <QMqttClient>
#include <QMqttTopicName>
#include <QThread>
#include <QString>
#include <QRandomGenerator>
#include <qmqttclient.h>
#include <qmqttglobal.h>
#include <qmqtttopicname.h>
#include <qmqttsubscription.h>
//#include <QMqttTopicFilter>
#include<QJsonObject>
class Mqttwork : public QObject
{
    Q_OBJECT
public:
    explicit Mqttwork(QObject *parent = nullptr);
    ~Mqttwork();
    QString my_nickname;
private:
    QMqttClient* my_mqttclient;
    QString my_uniqueUsername;
    QStringList my_onlineUsers;

    const QString GROUP_TOPIC = "chat/group/global";
    const QString STATUS_TOPIC = "chat/status";
    const QString PRIVATE_TOPIC_PREFIX = "chat/private/";//私聊主题未实现。
    const QString CLIENT_ID_PREFIX = "mqtt_chat_";   // 客户端 ID 前缀
    QTimer *my_heartbeatTimer;

signals:
    void mqttConnected();//连接成功信号
    void mqttDisconnected();//断开连接信号
    void newGroupMessage(const QString&senderNickname,const QString&content,const QString&time);//新的群聊消息
    void newPrivateMessage(const QString &senderNickname, const QString &senderUsername, const QString &content, const QString &time);//私聊未实现
    void onlineUserUpdated(const QStringList &onlineUsers);//更新在线用户状态

public slots:
    void initMqtt();//初始化客户端
    void connectMqtt(const QString& brokerAddr,const quint16 port, const QString &Username, const QString &nickname);//服务器地址、端口号、用户名、聊天昵称
    void disconnectMqtt();//断开连接
    void sendGroupMessage(const QString &content); // 发送群聊消息
    void sendPrivateMessage(const QString &targetUsername, const QString &content); // 发送私聊消息

private slots:
    void onMqttConnected();
    void onMqttdisconnected();
    void onMqttMessageReceived(const QString &topicName, const QByteArray &payload);
    void sendOnlineStatus();
};

#endif // MQTTWORK_H
