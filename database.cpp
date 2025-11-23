#include "database.h"
#include<QMessageBox>
Database* Database::my_instance=nullptr;
Database::Database(QObject *parent)
    : QObject{parent}
{
    HH_db=QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "D:\\qt\\HHChatRoom\\HH_db.db";
    HH_db.setDatabaseName(dbPath);
}
Database::~Database(){
    if(HH_db.isOpen()){
        HH_db.close();
    }
}
Database* Database::getInstance(){
    if(my_instance==nullptr){
        my_instance=new Database();
    }
    return my_instance;
}
bool Database::init_Database(){
    if(!HH_db.open()){
        return false;
    }
    QSqlQuery query;
    QString createTable=R"(
    CREATE TABLE IF NOT EXISTS users(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    account TEXT UNIQUE NOT NULL,
    nickname TEXT UNIQUE NOT NULL,
    password TEXT NOT NULL
);
)";
    if(!query.exec(createTable)){
            return false;
    }
    return true;
}
bool Database::login_Database(const QString &account,const QString &password){
    if(!HH_db.isOpen()){
        return false;
    }
    QSqlQuery query;
    query.prepare("SELECT password FROM users WHERE account = :account");
    query.bindValue(":account",account);
    if(!query.exec()||!query.next()){
        return false;
    }
    QString SqlPassword=query.value("password").toString();
    if(SqlPassword==password){
        my_currentAccount = account;
        return true;
    }else{
        return false;
    }
}
bool Database::register_Database(const QString &account,const QString &Nickname,const QString &password){
    if(!HH_db.isOpen()){
        return false;
    }
    if(isUsernameExist(account)){
        return false;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO users(account, nickname,password) VALUES(:account,:nickname, :password)");
    query.bindValue(":account",account);
    query.bindValue(":nickname",Nickname);
    query.bindValue(":password",password);

    if(!query.exec()){
        return false;
    }
    return true;
}
bool Database::isUsernameExist(const QString &account){
    if(!HH_db.isOpen()){
        return false;
    }
    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE account= :account");
    query.bindValue(":account",account);
    if(!query.exec()||!query.next()){
        return false;
    }
    return true;
}
QString Database::getNicknameByAccount(const QString &account)
{
    QSqlQuery query;
    query.prepare("SELECT nickname FROM users WHERE account = ?");
    query.addBindValue(account);

    if (query.exec() && query.next()) {
        return query.value(0).toString();
    }
    return QString();
}
