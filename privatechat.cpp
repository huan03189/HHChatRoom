#include "privatechat.h"
#include "ui_privatechat.h"

PrivateChat::PrivateChat(const QString &targetUser,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrivateChat)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayout);
    ui->target->setText(targetUser);
    int leftBracket = targetUser.lastIndexOf('(');
    QString targetNickname = targetUser.left(leftBracket).trimmed();
    this->setWindowTitle(QString("私聊 - %1").arg(targetNickname));
}

PrivateChat::~PrivateChat()
{
    delete ui;
}

void PrivateChat::on_sendbtn_clicked()
{
    QString content=ui->SendLineEdit->text().trimmed();
    if(content.isEmpty()) {
        return;
    }
    emit messageSend(content,ui->target->text().trimmed());
    ui->SendLineEdit->clear();
}

