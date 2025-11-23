#ifndef CHARROOM_H
#define CHARROOM_H

#include <QWidget>
#include<QMqttClient>
#include<QMqttTopicName>
#include<QDateTime>
#include<QNetworkInterface>
#include<QThread>
#include"Mqttwork.h"
#include"database.h"
#include"privatechat.h"
namespace Ui {
class CharRoom;
}

class CharRoom : public QWidget
{
    Q_OBJECT

public:
    explicit CharRoom(QWidget *parent = nullptr);
    ~CharRoom();
    QString my_nickname;
private:
    Ui::CharRoom* ui;
    Mqttwork* my_mqttworker;
    QThread* my_mqttThread;
    QString my_uniqueUsername;
    Database* my_database;
    bool condition=false;
    void AddMessage(const QString &sender, const QString &content, const QString &time, bool isSelf = false, bool isPrivate = false);
    void showEvent(QShowEvent *event);
signals:
    void connectMqttRequested(const QString &brokerAddr, quint16 port, const QString &uniqueUsername, const QString &nickname);
    void disconnectMqttRequested();
    void sendGroupMessageRequested(const QString& content);
    void sendPrivateMessageRequested(const QString &targetUsername, const QString &content);
private slots:
    void onMqttConnected();
    void on_connectbtn_clicked();
    void onMqttDisconnected();
    void onNewGroupMessage(const QString &senderNickname, const QString &content, const QString &time);
    void onNewPrivateMessage(const QString &senderNickname, const QString &senderUsername, const QString &content, const QString &time);
    void onOnlineUserUpdated(const QStringList &onlineUsers);
    void on_PrivateBtn_clicked();
    void onPrivateSend(const QString &message,const QString &username);
    void on_sendbtn_clicked();
    void on_goweatherbtn_clicked();
};

#endif // CHARROOM_H
