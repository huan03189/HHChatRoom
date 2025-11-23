#include "widget.h"
#include"logreg.h"
#include <QApplication>
#include"database.h"
#include <QtMqtt/QMqttClient>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(R"(
        QMessageBox {
            font-family: "微软雅黑";
            font-size: 14px;
            background-color: #f0f0f0;
        }
        QMessageBox QLabel {
            color: #333;
        }
        QMessageBox QPushButton {
            background-color: #409EFF;
            color: white;
            border: none;
            padding: 6px 18px;
            border-radius: 4px;
            min-width: 80px;
        }
        QMessageBox QPushButton:hover {
            background-color: #66b1ff;
        }
        QMessageBox QPushButton:pressed {
            background-color: #3a8ee6;
        }
    )");
    Database* db=Database::getInstance();
    if(!db->init_Database()){

        return -1;
    }
    LogReg w;
    w.show();
    return a.exec();
}
