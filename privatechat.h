#ifndef PRIVATECHAT_H
#define PRIVATECHAT_H

#include <QWidget>

namespace Ui {
class PrivateChat;
}

class PrivateChat : public QWidget
{
    Q_OBJECT

public:
    explicit PrivateChat(const QString &targetUser,QWidget *parent = nullptr);
    ~PrivateChat();
private:
    Ui::PrivateChat *ui;
signals:
    void messageSend(const QString& content,const QString &username);

private slots:
    void on_sendbtn_clicked();
};

#endif // PRIVATECHAT_H
