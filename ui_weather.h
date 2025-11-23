/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *WeatherLabel;
    QGridLayout *gridLayout_2;
    QLabel *WD;
    QLabel *TQ;
    QLabel *WDFW;
    QLabel *City;
    QSpacerItem *horizontalSpacer;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget0301;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayoutFX;
    QLabel *FX;
    QVBoxLayout *verticalLayout_2;
    QLabel *FXType;
    QLabel *FXClass;
    QHBoxLayout *horizontalLayoutPM;
    QLabel *PM;
    QVBoxLayout *verticalLayout_3;
    QLabel *PMType;
    QLabel *PMClass;
    QHBoxLayout *horizontalLayoutSD;
    QLabel *SD;
    QVBoxLayout *verticalLayout_4;
    QLabel *SDType;
    QLabel *SDClass;
    QHBoxLayout *horizontalLayoutKQ;
    QLabel *KQ;
    QVBoxLayout *verticalLayout_5;
    QLabel *KQType;
    QLabel *KQClass;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label01;
    QLabel *label02;
    QLabel *label03;
    QLabel *label04;
    QLabel *label05;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label001;
    QLabel *label002;
    QLabel *label003;
    QLabel *label004;
    QLabel *label005;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QWidget *widget01;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *inquire;
    QSpacerItem *horizontalSpacer_2;
    QLabel *date;

    void setupUi(QWidget *Weather)
    {
        if (Weather->objectName().isEmpty())
            Weather->setObjectName("Weather");
        Weather->resize(345, 566);
        Weather->setMinimumSize(QSize(345, 566));
        Weather->setMaximumSize(QSize(345, 566));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HHCharRoomIcon/sun.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Weather->setWindowIcon(icon);
        Weather->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 113, 113);"));
        layoutWidget = new QWidget(Weather);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 7, 341, 555));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(7, 7, 7, 7);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget02 = new QWidget(layoutWidget);
        widget02->setObjectName("widget02");
        widget02->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 86, 86);"));
        horizontalLayout_2 = new QHBoxLayout(widget02);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        WeatherLabel = new QLabel(widget02);
        WeatherLabel->setObjectName("WeatherLabel");
        WeatherLabel->setMinimumSize(QSize(120, 120));
        WeatherLabel->setMaximumSize(QSize(120, 120));
        WeatherLabel->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        WeatherLabel->setScaledContents(true);

        horizontalLayout->addWidget(WeatherLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        WD = new QLabel(widget02);
        WD->setObjectName("WD");
        WD->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(207, 207, 207);"));
        WD->setTextFormat(Qt::TextFormat::RichText);

        gridLayout_2->addWidget(WD, 0, 0, 1, 2);

        TQ = new QLabel(widget02);
        TQ->setObjectName("TQ");
        TQ->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        gridLayout_2->addWidget(TQ, 1, 0, 1, 1);

        WDFW = new QLabel(widget02);
        WDFW->setObjectName("WDFW");
        WDFW->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));

        gridLayout_2->addWidget(WDFW, 1, 1, 1, 1);

        City = new QLabel(widget02);
        City->setObjectName("City");
        City->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(220, 220, 220);"));

        gridLayout_2->addWidget(City, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_6->addWidget(widget02);

        widget03 = new QWidget(layoutWidget);
        widget03->setObjectName("widget03");
        widget03->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 86, 86);"));
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget03);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 165, 54);\n"
"border-radius: 10px\n"
""));
        gridLayout_4 = new QGridLayout(widget0301);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayoutFX = new QHBoxLayout();
        horizontalLayoutFX->setObjectName("horizontalLayoutFX");
        FX = new QLabel(widget0301);
        FX->setObjectName("FX");
        FX->setMinimumSize(QSize(40, 40));
        FX->setMaximumSize(QSize(40, 40));
        FX->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/8.png")));
        FX->setScaledContents(true);

        horizontalLayoutFX->addWidget(FX);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        FXType = new QLabel(widget0301);
        FXType->setObjectName("FXType");

        verticalLayout_2->addWidget(FXType);

        FXClass = new QLabel(widget0301);
        FXClass->setObjectName("FXClass");

        verticalLayout_2->addWidget(FXClass);


        horizontalLayoutFX->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayoutFX, 0, 0, 1, 1);

        horizontalLayoutPM = new QHBoxLayout();
        horizontalLayoutPM->setObjectName("horizontalLayoutPM");
        PM = new QLabel(widget0301);
        PM->setObjectName("PM");
        PM->setMinimumSize(QSize(40, 40));
        PM->setMaximumSize(QSize(40, 40));
        PM->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/6.png")));
        PM->setScaledContents(true);

        horizontalLayoutPM->addWidget(PM);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        PMType = new QLabel(widget0301);
        PMType->setObjectName("PMType");

        verticalLayout_3->addWidget(PMType);

        PMClass = new QLabel(widget0301);
        PMClass->setObjectName("PMClass");

        verticalLayout_3->addWidget(PMClass);


        horizontalLayoutPM->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayoutPM, 0, 1, 1, 1);

        horizontalLayoutSD = new QHBoxLayout();
        horizontalLayoutSD->setObjectName("horizontalLayoutSD");
        SD = new QLabel(widget0301);
        SD->setObjectName("SD");
        SD->setMinimumSize(QSize(40, 40));
        SD->setMaximumSize(QSize(40, 40));
        SD->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/7.png")));
        SD->setScaledContents(true);

        horizontalLayoutSD->addWidget(SD);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        SDType = new QLabel(widget0301);
        SDType->setObjectName("SDType");

        verticalLayout_4->addWidget(SDType);

        SDClass = new QLabel(widget0301);
        SDClass->setObjectName("SDClass");

        verticalLayout_4->addWidget(SDClass);


        horizontalLayoutSD->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayoutSD, 1, 0, 1, 1);

        horizontalLayoutKQ = new QHBoxLayout();
        horizontalLayoutKQ->setObjectName("horizontalLayoutKQ");
        KQ = new QLabel(widget0301);
        KQ->setObjectName("KQ");
        KQ->setMinimumSize(QSize(40, 40));
        KQ->setMaximumSize(QSize(40, 40));
        KQ->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/5.png")));
        KQ->setScaledContents(true);

        horizontalLayoutKQ->addWidget(KQ);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        KQType = new QLabel(widget0301);
        KQType->setObjectName("KQType");

        verticalLayout_5->addWidget(KQType);

        KQClass = new QLabel(widget0301);
        KQClass->setObjectName("KQClass");

        verticalLayout_5->addWidget(KQClass);


        horizontalLayoutKQ->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayoutKQ, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(widget0301);

        verticalLayout->setStretch(0, 1);

        verticalLayout_6->addWidget(widget03);

        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName("widget_2");
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label01 = new QLabel(widget_2);
        label01->setObjectName("label01");
        label01->setMinimumSize(QSize(40, 40));
        label01->setMaximumSize(QSize(40, 40));
        label01->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 208, 70);\n"
"border-radius: 10px"));

        horizontalLayout_5->addWidget(label01);

        label02 = new QLabel(widget_2);
        label02->setObjectName("label02");
        label02->setMinimumSize(QSize(40, 40));
        label02->setMaximumSize(QSize(40, 40));
        label02->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 208, 70);\n"
"border-radius: 10px"));

        horizontalLayout_5->addWidget(label02);

        label03 = new QLabel(widget_2);
        label03->setObjectName("label03");
        label03->setMinimumSize(QSize(40, 40));
        label03->setMaximumSize(QSize(40, 40));
        label03->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 208, 70);\n"
"border-radius: 10px"));

        horizontalLayout_5->addWidget(label03);

        label04 = new QLabel(widget_2);
        label04->setObjectName("label04");
        label04->setMinimumSize(QSize(40, 40));
        label04->setMaximumSize(QSize(40, 40));
        label04->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 208, 70);\n"
"border-radius: 10px"));

        horizontalLayout_5->addWidget(label04);

        label05 = new QLabel(widget_2);
        label05->setObjectName("label05");
        label05->setMinimumSize(QSize(40, 40));
        label05->setMaximumSize(QSize(40, 40));
        label05->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(28, 208, 70);\n"
"border-radius: 10px"));

        horizontalLayout_5->addWidget(label05);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label001 = new QLabel(widget_2);
        label001->setObjectName("label001");
        label001->setMinimumSize(QSize(42, 40));
        label001->setMaximumSize(QSize(40, 40));
        label001->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 255, 222);\n"
"color: rgb(116, 116, 116);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_7->addWidget(label001);

        label002 = new QLabel(widget_2);
        label002->setObjectName("label002");
        label002->setMinimumSize(QSize(42, 40));
        label002->setMaximumSize(QSize(40, 40));
        label002->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 255, 222);\n"
"color: rgb(116, 116, 116);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_7->addWidget(label002);

        label003 = new QLabel(widget_2);
        label003->setObjectName("label003");
        label003->setMinimumSize(QSize(42, 40));
        label003->setMaximumSize(QSize(40, 40));
        label003->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 255, 222);\n"
"color: rgb(116, 116, 116);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_7->addWidget(label003);

        label004 = new QLabel(widget_2);
        label004->setObjectName("label004");
        label004->setMinimumSize(QSize(42, 40));
        label004->setMaximumSize(QSize(40, 40));
        label004->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 255, 222);\n"
"color: rgb(116, 116, 116);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_7->addWidget(label004);

        label005 = new QLabel(widget_2);
        label005->setObjectName("label005");
        label005->setMinimumSize(QSize(42, 40));
        label005->setMaximumSize(QSize(40, 40));
        label005->setStyleSheet(QString::fromUtf8("background-color: rgb(88, 255, 222);\n"
"color: rgb(116, 116, 116);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_7->addWidget(label005);


        gridLayout_5->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label1 = new QLabel(widget_2);
        label1->setObjectName("label1");
        label1->setMinimumSize(QSize(40, 40));
        label1->setMaximumSize(QSize(40, 40));
        label1->setStyleSheet(QString::fromUtf8("border-radius: 10px"));
        label1->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        label1->setScaledContents(true);

        horizontalLayout_6->addWidget(label1);

        label2 = new QLabel(widget_2);
        label2->setObjectName("label2");
        label2->setMinimumSize(QSize(40, 40));
        label2->setMaximumSize(QSize(40, 40));
        label2->setStyleSheet(QString::fromUtf8("border-radius: 10px"));
        label2->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        label2->setScaledContents(true);

        horizontalLayout_6->addWidget(label2);

        label3 = new QLabel(widget_2);
        label3->setObjectName("label3");
        label3->setMinimumSize(QSize(40, 40));
        label3->setMaximumSize(QSize(40, 40));
        label3->setStyleSheet(QString::fromUtf8("border-radius: 10px"));
        label3->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        label3->setScaledContents(true);

        horizontalLayout_6->addWidget(label3);

        label4 = new QLabel(widget_2);
        label4->setObjectName("label4");
        label4->setMinimumSize(QSize(40, 40));
        label4->setMaximumSize(QSize(40, 40));
        label4->setStyleSheet(QString::fromUtf8("border-radius: 10px"));
        label4->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        label4->setScaledContents(true);

        horizontalLayout_6->addWidget(label4);

        label5 = new QLabel(widget_2);
        label5->setObjectName("label5");
        label5->setMinimumSize(QSize(40, 40));
        label5->setMaximumSize(QSize(40, 40));
        label5->setStyleSheet(QString::fromUtf8("border-radius: 10px"));
        label5->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/2.png")));
        label5->setScaledContents(true);

        horizontalLayout_6->addWidget(label5);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 1, 1, 1);


        verticalLayout_6->addWidget(widget_2);


        gridLayout_6->addLayout(verticalLayout_6, 1, 0, 1, 1);

        widget01 = new QWidget(layoutWidget);
        widget01->setObjectName("widget01");
        gridLayout_3 = new QGridLayout(widget01);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit = new QLineEdit(widget01);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 241, 241);\n"
"border-radius: 10px"));

        horizontalLayout_3->addWidget(lineEdit);

        inquire = new QPushButton(widget01);
        inquire->setObjectName("inquire");
        inquire->setMinimumSize(QSize(30, 30));
        inquire->setMaximumSize(QSize(30, 30));
        inquire->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(50, 50, 50);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HHCharRoomIcon/9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        inquire->setIcon(icon1);

        horizontalLayout_3->addWidget(inquire);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        date = new QLabel(widget01);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);\n"
"border-radius: 10px"));

        horizontalLayout_4->addWidget(date);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget01, 0, 0, 1, 1);

        gridLayout_6->setRowStretch(0, 1);
        gridLayout_6->setRowMinimumHeight(0, 1);
        gridLayout_6->setRowMinimumHeight(1, 3);

        retranslateUi(Weather);

        QMetaObject::connectSlotsByName(Weather);
    } // setupUi

    void retranslateUi(QWidget *Weather)
    {
        Weather->setWindowTitle(QCoreApplication::translate("Weather", "Weather", nullptr));
        WeatherLabel->setText(QString());
        WD->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">23</span></p></body></html>", nullptr));
        TQ->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\346\231\264\345\244\251</p></body></html>", nullptr));
        WDFW->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">20~26</p></body></html>", nullptr));
        City->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\345\220\211</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Weather", "\344\275\223\346\204\237\346\270\251\345\272\246\350\276\203\344\275\216\357\274\214\345\244\232\345\212\240\350\241\243\346\234\215", nullptr));
        FX->setText(QString());
        FXType->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>\344\270\234\345\215\227\351\243\216</p></body></html>", nullptr));
        FXClass->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>2\347\272\247\345\210\253</p></body></html>", nullptr));
        PM->setText(QString());
        PMType->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>PM2.5</p></body></html>", nullptr));
        PMClass->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>24</p></body></html>", nullptr));
        SD->setText(QString());
        SDType->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>\346\271\277\345\272\246</p></body></html>", nullptr));
        SDClass->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>85%</p></body></html>", nullptr));
        KQ->setText(QString());
        KQType->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>\347\251\272\346\260\224\350\264\250\351\207\217</p></body></html>", nullptr));
        KQClass->setText(QCoreApplication::translate("Weather", "<html><head/><body><p>\344\274\230</p></body></html>", nullptr));
        label01->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\274\230</p></body></html>", nullptr));
        label02->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\274\230</p></body></html>", nullptr));
        label03->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\274\230</p></body></html>", nullptr));
        label04->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\274\230</p></body></html>", nullptr));
        label05->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\274\230</p></body></html>", nullptr));
        label001->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">\344\273\212\345\244\251</p></body></html>", nullptr));
        label002->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">11/22</p></body></html>", nullptr));
        label003->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">11/23</p></body></html>", nullptr));
        label004->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">11/24</p></body></html>", nullptr));
        label005->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">11/25</p></body></html>", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        inquire->setText(QString());
        date->setText(QCoreApplication::translate("Weather", "<html><head/><body><p align=\"center\">2025/11/21 \346\230\237\346\234\237\344\272\224</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Weather: public Ui_Weather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
