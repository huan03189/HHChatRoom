/********************************************************************************
** Form generated from reading UI file 'charroom.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARROOM_H
#define UI_CHARROOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharRoom
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *SendLineEdit;
    QPushButton *goweatherbtn;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *Nickname;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *ServerIP;
    QPushButton *connectbtn;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *status;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *port;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *onlinecomboBox;
    QPushButton *sendbtn;
    QPushButton *PrivateBtn;

    void setupUi(QWidget *CharRoom)
    {
        if (CharRoom->objectName().isEmpty())
            CharRoom->setObjectName("CharRoom");
        CharRoom->resize(797, 436);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HHCharRoomIcon/cat.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CharRoom->setWindowIcon(icon);
        layoutWidget = new QWidget(CharRoom);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 791, 431));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(7, 7, 7, 7);
        SendLineEdit = new QLineEdit(layoutWidget);
        SendLineEdit->setObjectName("SendLineEdit");
        SendLineEdit->setMaximumSize(QSize(350, 35));

        gridLayout->addWidget(SendLineEdit, 1, 4, 1, 1);

        goweatherbtn = new QPushButton(layoutWidget);
        goweatherbtn->setObjectName("goweatherbtn");
        goweatherbtn->setMinimumSize(QSize(40, 40));
        goweatherbtn->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HHCharRoomIcon/sun.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        goweatherbtn->setIcon(icon1);
        goweatherbtn->setIconSize(QSize(40, 40));

        gridLayout->addWidget(goweatherbtn, 1, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 4, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        Nickname = new QLineEdit(layoutWidget);
        Nickname->setObjectName("Nickname");

        horizontalLayout_3->addWidget(Nickname);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_2);

        ServerIP = new QLineEdit(layoutWidget);
        ServerIP->setObjectName("ServerIP");

        horizontalLayout->addWidget(ServerIP);

        connectbtn = new QPushButton(layoutWidget);
        connectbtn->setObjectName("connectbtn");
        connectbtn->setMinimumSize(QSize(40, 30));
        connectbtn->setMaximumSize(QSize(40, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/HHCharRoomIcon/connect.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        connectbtn->setIcon(icon2);
        connectbtn->setIconSize(QSize(40, 30));

        horizontalLayout->addWidget(connectbtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        status = new QLineEdit(layoutWidget);
        status->setObjectName("status");

        horizontalLayout_2->addWidget(status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        port = new QLineEdit(layoutWidget);
        port->setObjectName("port");

        horizontalLayout_4->addWidget(port);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        onlinecomboBox = new QComboBox(layoutWidget);
        onlinecomboBox->setObjectName("onlinecomboBox");

        verticalLayout->addWidget(onlinecomboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        sendbtn = new QPushButton(layoutWidget);
        sendbtn->setObjectName("sendbtn");
        sendbtn->setMinimumSize(QSize(40, 40));
        sendbtn->setMaximumSize(QSize(40, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/HHCharRoomIcon/send.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sendbtn->setIcon(icon3);
        sendbtn->setIconSize(QSize(40, 40));

        gridLayout->addWidget(sendbtn, 1, 5, 1, 1);

        PrivateBtn = new QPushButton(layoutWidget);
        PrivateBtn->setObjectName("PrivateBtn");
        PrivateBtn->setMinimumSize(QSize(40, 40));
        PrivateBtn->setMaximumSize(QSize(40, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/HHCharRoomIcon/private.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PrivateBtn->setIcon(icon4);
        PrivateBtn->setIconSize(QSize(40, 40));

        gridLayout->addWidget(PrivateBtn, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(4, 3);
        gridLayout->setColumnStretch(5, 3);

        retranslateUi(CharRoom);

        QMetaObject::connectSlotsByName(CharRoom);
    } // setupUi

    void retranslateUi(QWidget *CharRoom)
    {
        CharRoom->setWindowTitle(QCoreApplication::translate("CharRoom", "HH\350\201\212\345\244\251\345\256\244", nullptr));
        goweatherbtn->setText(QString());
        label->setText(QCoreApplication::translate("CharRoom", "\346\230\265\347\247\260\357\274\232", nullptr));
        Nickname->setText(QString());
        label_2->setText(QCoreApplication::translate("CharRoom", "\346\234\215\345\212\241\345\231\250IP\357\274\232", nullptr));
        connectbtn->setText(QString());
        label_3->setText(QCoreApplication::translate("CharRoom", "\347\212\266\346\200\201\357\274\232", nullptr));
        status->setText(QCoreApplication::translate("CharRoom", "\347\246\273\347\272\277", nullptr));
        label_4->setText(QCoreApplication::translate("CharRoom", "\347\253\257\345\217\243\345\217\267", nullptr));
        sendbtn->setText(QString());
#if QT_CONFIG(shortcut)
        sendbtn->setShortcut(QCoreApplication::translate("CharRoom", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        PrivateBtn->setText(QString());
#if QT_CONFIG(shortcut)
        PrivateBtn->setShortcut(QCoreApplication::translate("CharRoom", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class CharRoom: public Ui_CharRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARROOM_H
