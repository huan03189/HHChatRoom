#include "logreg.h"
#include "ui_logreg.h"
#include"database.h"
#include<QMessageBox>
LogReg::LogReg(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogReg)
{
    ui->setupUi(this);
}
LogReg::~LogReg()
{
    delete ui;
}
void LogReg::on_Logbtn_clicked()
{
    QString acc=ui->accountLogLine->text();
    QString pass=ui->passwordLogline->text();
    Database* db=Database::getInstance();
    if(db->login_Database(acc,pass)){
        QMessageBox::information(this,"登录成功","欢迎来到蓝猫世界！");
        this->hide();
        //加入跳转主界面模块
        charroom.show();
    }else{
        QMessageBox::information(this,"登录失败","用户名或密码错误！");
        ui->passwordLogline->clear();
    }
}
void LogReg::on_regbtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page2);
}
void LogReg::on_gologbtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}
void LogReg::on_registrationbtn_clicked()
{
    QString acc=ui->accountLine->text();
    QString pass=ui->passLine->text();
    QString nick=ui->NicknameLine->text();
    QString repass=ui->repassLine->text();
    if(pass!=repass){
        QMessageBox::information(this,"错误提示","两次密码不一样！");
        ui->passLine->clear();
        ui->repassLine->clear();
        return;
    }
    Database* HH=Database::getInstance();
    if(HH->register_Database(acc,nick,pass)){
        QMessageBox::information(this, "成功", "注册成功！请登录");
    }else{
        QMessageBox::critical(this, "失败", "用户名已存在！");
        ui->passLine->clear();
        ui->repassLine->clear();
    }
}

