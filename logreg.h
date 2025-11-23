#ifndef LOGREG_H
#define LOGREG_H

#include <QWidget>
#include"charroom.h"
namespace Ui {
class LogReg;
}

class LogReg : public QWidget
{
    Q_OBJECT

public:
    explicit LogReg(QWidget *parent = nullptr);
    ~LogReg();
    CharRoom charroom;

private slots:
    void on_Logbtn_clicked();

    void on_regbtn_clicked();

    void on_gologbtn_clicked();

    void on_registrationbtn_clicked();

private:
    Ui::LogReg *ui;
};

#endif // LOGREG_H
