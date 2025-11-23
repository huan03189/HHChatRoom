#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QCryptographicHash>
#include<QString>
#include<QDebug>
class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);
    ~Database();
    static Database* getInstance();

    static Database* my_instance;

    QSqlDatabase HH_db;

    QString my_currentAccount;

    bool init_Database();

    bool register_Database(const QString &account,const QString & Nickname,const QString &password);

    bool login_Database(const QString &account,const QString &password);

    bool isUsernameExist(const QString &account);

    QString getNicknameByAccount(const QString &account);

    QString getCurrentAccount() const { return my_currentAccount; }
};

#endif // DATABASE_H
