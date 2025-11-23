#include "charroom.h"
#include "ui_charroom.h"
#include <QList>
#include<QTextCursor>
#include<QMessageBox>
#include <QScrollBar>
#include"weather.h"
CharRoom::CharRoom(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CharRoom)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayout);
    Database* my_database = Database::getInstance();
    QString account = my_database->getCurrentAccount();
    my_nickname = my_database->getNicknameByAccount(account);
    my_uniqueUsername=account;
    my_mqttThread=new QThread(this);
    my_mqttworker=new Mqttwork();
    my_mqttworker->moveToThread(my_mqttThread);
    ui->Nickname->setText(my_nickname);
    connect(my_mqttThread,&QThread::started,my_mqttworker,&Mqttwork::initMqtt);
    connect(this, &CharRoom::destroyed, this, [=]() {
        emit disconnectMqttRequested();
        my_mqttThread->quit();
        my_mqttThread->wait();
        my_mqttworker->deleteLater();
    });
    my_mqttThread->start();



    //接收子线程信号
    connect(my_mqttworker,&Mqttwork::mqttConnected,this,&CharRoom::onMqttConnected);
    connect(my_mqttworker,&Mqttwork::mqttDisconnected,this,&CharRoom::onMqttDisconnected);
    connect(my_mqttworker,&Mqttwork::newGroupMessage,this,&CharRoom::onNewGroupMessage);
    connect(my_mqttworker,&Mqttwork::newPrivateMessage,this,&CharRoom::onNewPrivateMessage);
    connect(my_mqttworker,&Mqttwork::onlineUserUpdated,this,&CharRoom::onOnlineUserUpdated);

    //给子线程发送信号
    connect(this,&CharRoom::connectMqttRequested,my_mqttworker,&Mqttwork::connectMqtt);
    connect(this,&CharRoom::disconnectMqttRequested,my_mqttworker,&Mqttwork::disconnectMqtt);
    connect(this,&CharRoom::sendGroupMessageRequested,my_mqttworker,&Mqttwork::sendGroupMessage);
    connect(this,&CharRoom::sendPrivateMessageRequested,my_mqttworker,&Mqttwork::sendPrivateMessage);
}

CharRoom::~CharRoom()
{

    delete ui;
}
void CharRoom::onMqttConnected(){
    QMessageBox::information(this,"连接提示","连接成功");
    ui->status->setText("连接");
    condition=true;
}
void CharRoom::onNewGroupMessage(const QString &senderNickname, const QString &content, const QString &time){
    if(senderNickname!=my_nickname){
        AddMessage(senderNickname,content,time,false,false);
    }
}
void CharRoom::on_connectbtn_clicked()
{
    if(condition==false){
    QString brokerAddr=ui->ServerIP->text().trimmed();
    quint16 port=ui->port->text().toInt();
    QString my_nickname=ui->Nickname->text().trimmed();
    if (brokerAddr.isEmpty() || port == 0) {
        QMessageBox::warning(this, "提示", "请输入有效的 Broker 地址和端口！");
        return;
    }
    emit connectMqttRequested(brokerAddr, port, my_uniqueUsername, my_nickname);

    }else{
        emit disconnectMqttRequested();

    }
}
void CharRoom::onMqttDisconnected(){
    QMessageBox::information(this,"连接提示","断开连接");
    ui->status->setText("未连接");
    condition=false;
}
void CharRoom::AddMessage(const QString &sender, const QString &content,
                          const QString &time, bool isSelf,
                          bool isPrivate){
    QString msgType = isPrivate ? "[私聊]" : "[群聊]";
    QString alignment = isSelf ? "right" : "left";
    QString bgColor = isSelf ? "#E6F7FF" : "#F5F5F5";
    QString htmlMsg = QString(
                          "<div style='"
                          "margin: 8px; "
                          "padding: 8px; "
                          "background-color: %1; "
                          "border-radius: 4px; "
                          "text-align: %2;"
                          "'>"
                          "<span style='font-weight: bold;'>%3 [%4] %5:</span> %6"
                          "</div>"
                          ).arg(bgColor).arg(alignment).arg(msgType).arg(time).arg(sender).arg(content);
    ui->textEdit->append(htmlMsg);
    QScrollBar *scrollBar = ui->textEdit->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
}
void CharRoom::onNewPrivateMessage(const QString &senderNickname, const QString &senderUsername, const QString &content, const QString &time){
    QString sender = QString("和%1的私聊 - %2").arg(senderNickname).arg(senderNickname);
    AddMessage(sender, content, time, false, true);
}
void CharRoom::onOnlineUserUpdated(const QStringList &onlineUsers){
    ui->onlinecomboBox->clear();
    for (const QString &username : onlineUsers) {
        QString user = username;
        QString nick= my_database->getNicknameByAccount(username);
        ui->onlinecomboBox->addItem(QString("%1(%2)").arg(nick).arg(username));
    }
}
void CharRoom::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    if(my_nickname.isEmpty()) {
        Database* my_database = Database::getInstance();
        QString account = my_database->getCurrentAccount();
        if(!account.isEmpty()) {
            my_nickname = my_database->getNicknameByAccount(account);
            my_uniqueUsername = account;
            if(ui->Nickname) {
                ui->Nickname->setText(my_nickname);
            }
        }
    }
}

void CharRoom::on_PrivateBtn_clicked()
{
    QString selectedUser = ui->onlinecomboBox->currentText().trimmed();
    if (selectedUser.isEmpty()) {
        QMessageBox::warning(this, "提示", "请选择私聊对象！");
        return;
    }

    PrivateChat* dialog=new PrivateChat(selectedUser,nullptr);

    connect(dialog,&PrivateChat::messageSend,this,&CharRoom::onPrivateSend);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
}
void CharRoom::onPrivateSend(const QString &message,const QString &username){
    int leftBracket = username.lastIndexOf('(');
    int rightBracket = username.lastIndexOf(')');
    if (leftBracket == -1 || rightBracket == -1 || leftBracket >= rightBracket) {
        QMessageBox::warning(this, "错误", "私聊对象解析失败，请重新选择！");
        return;
    }
    QString targetAccount = username.mid(leftBracket + 1, rightBracket - leftBracket - 1);
    QString targetNickname = username.left(leftBracket).trimmed();
    if (message.isEmpty()) return;
    emit sendPrivateMessageRequested(targetAccount,message);
    AddMessage(QString("我 → %1（私聊）").arg(targetNickname),
               message, QDateTime::currentDateTime().toString("HH:mm:ss"), true, true);
}

void CharRoom::on_sendbtn_clicked()
{
    QString content=ui->SendLineEdit->text().trimmed();
    if (content.isEmpty()) return;
    emit sendGroupMessageRequested(content);
    AddMessage(my_nickname, content, QDateTime::currentDateTime().toString("HH:mm:ss"), true, false);
    ui->SendLineEdit->clear();
}
void CharRoom::on_goweatherbtn_clicked()
{
    Weather* weather=new Weather(nullptr);
    weather->setAttribute(Qt::WA_DeleteOnClose);
    weather->show();
}

