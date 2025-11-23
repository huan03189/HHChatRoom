/********************************************************************************
** Form generated from reading UI file 'privatechat.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATECHAT_H
#define UI_PRIVATECHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateChat
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *target;
    QLineEdit *SendLineEdit;
    QPushButton *sendbtn;

    void setupUi(QWidget *PrivateChat)
    {
        if (PrivateChat->objectName().isEmpty())
            PrivateChat->setObjectName("PrivateChat");
        PrivateChat->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HHCharRoomIcon/chat.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PrivateChat->setWindowIcon(icon);
        widget = new QWidget(PrivateChat);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 391, 291));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(7, 7, 7, 7);
        target = new QLabel(widget);
        target->setObjectName("target");

        gridLayout->addWidget(target, 0, 0, 1, 1);

        SendLineEdit = new QLineEdit(widget);
        SendLineEdit->setObjectName("SendLineEdit");

        gridLayout->addWidget(SendLineEdit, 1, 0, 1, 1);

        sendbtn = new QPushButton(widget);
        sendbtn->setObjectName("sendbtn");
        sendbtn->setMinimumSize(QSize(40, 40));
        sendbtn->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HHCharRoomIcon/send.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sendbtn->setIcon(icon1);
        sendbtn->setIconSize(QSize(40, 40));

        gridLayout->addWidget(sendbtn, 1, 1, 1, 1);


        retranslateUi(PrivateChat);

        QMetaObject::connectSlotsByName(PrivateChat);
    } // setupUi

    void retranslateUi(QWidget *PrivateChat)
    {
        PrivateChat->setWindowTitle(QCoreApplication::translate("PrivateChat", "PrivateChat", nullptr));
        target->setText(QCoreApplication::translate("PrivateChat", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\217\221\351\200\201\350\200\205</span></p></body></html>", nullptr));
        sendbtn->setText(QString());
#if QT_CONFIG(shortcut)
        sendbtn->setShortcut(QCoreApplication::translate("PrivateChat", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class PrivateChat: public Ui_PrivateChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATECHAT_H
