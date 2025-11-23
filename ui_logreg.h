/********************************************************************************
** Form generated from reading UI file 'logreg.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGREG_H
#define UI_LOGREG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogReg
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *accounthorizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *accountLogLine;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *passwordhorizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *passwordLogline;
    QSpacerItem *horizontalSpacer_6;
    QLabel *LogText;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *regbtn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Logbtn;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *Icon;
    QSpacerItem *verticalSpacer_6;
    QWidget *page2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayoutreg;
    QSpacerItem *verticalSpacer;
    QLineEdit *repassLine;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *gologbtn;
    QPushButton *registrationbtn;
    QLineEdit *accountLine;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *passLine;
    QLabel *MainTextreg;
    QLineEdit *NicknameLine;

    void setupUi(QWidget *LogReg)
    {
        if (LogReg->objectName().isEmpty())
            LogReg->setObjectName("LogReg");
        LogReg->resize(401, 441);
        LogReg->setMinimumSize(QSize(401, 441));
        LogReg->setMaximumSize(QSize(401, 441));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HHCharRoomIcon/chat.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogReg->setWindowIcon(icon);
        LogReg->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #a1c4fd, stop:1 #c2e9fb);"));
        stackedWidget = new QStackedWidget(LogReg);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 401, 441));
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 401, 441));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(7, 14, 7, 14);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        accounthorizontalLayout = new QHBoxLayout();
        accounthorizontalLayout->setObjectName("accounthorizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        accounthorizontalLayout->addItem(horizontalSpacer_3);

        accountLogLine = new QLineEdit(layoutWidget);
        accountLogLine->setObjectName("accountLogLine");
        accountLogLine->setMinimumSize(QSize(240, 40));
        accountLogLine->setMaximumSize(QSize(240, 40));
        accountLogLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        accounthorizontalLayout->addWidget(accountLogLine);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        accounthorizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(accounthorizontalLayout, 5, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 1, 1, 1);

        passwordhorizontalLayout = new QHBoxLayout();
        passwordhorizontalLayout->setObjectName("passwordhorizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        passwordhorizontalLayout->addItem(horizontalSpacer_5);

        passwordLogline = new QLineEdit(layoutWidget);
        passwordLogline->setObjectName("passwordLogline");
        passwordLogline->setMinimumSize(QSize(240, 40));
        passwordLogline->setMaximumSize(QSize(240, 40));
        passwordLogline->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        passwordhorizontalLayout->addWidget(passwordLogline);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        passwordhorizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(passwordhorizontalLayout, 6, 0, 1, 3);

        LogText = new QLabel(layoutWidget);
        LogText->setObjectName("LogText");
        LogText->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"        color: #333333; /* \346\226\207\345\255\227\351\242\234\350\211\262\357\274\210\346\267\261\347\201\260\357\274\214\344\270\215\345\210\272\347\234\274\357\274\211 */\n"
"        font-size: 13px;\n"
"        background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\351\201\256\346\214\241\347\252\227\345\217\243\346\270\220\345\217\230 */\n"
"        padding: 2px 5px;\n"
"    }"));

        gridLayout->addWidget(LogText, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        regbtn = new QPushButton(layoutWidget);
        regbtn->setObjectName("regbtn");
        regbtn->setMinimumSize(QSize(60, 60));
        regbtn->setMaximumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HHCharRoomIcon/reg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        regbtn->setIcon(icon1);
        regbtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(regbtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        Logbtn = new QPushButton(layoutWidget);
        Logbtn->setObjectName("Logbtn");
        Logbtn->setMinimumSize(QSize(60, 60));
        Logbtn->setMaximumSize(QSize(60, 60));
        Logbtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/HHCharRoomIcon/log.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Logbtn->setIcon(icon2);
        Logbtn->setIconSize(QSize(60, 60));

        horizontalLayout->addWidget(Logbtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        Icon = new QLabel(layoutWidget);
        Icon->setObjectName("Icon");
        Icon->setMinimumSize(QSize(80, 60));
        Icon->setMaximumSize(QSize(80, 80));
        Icon->setTextFormat(Qt::TextFormat::AutoText);
        Icon->setPixmap(QPixmap(QString::fromUtf8(":/HHCharRoomIcon/cat.png")));
        Icon->setScaledContents(true);
        Icon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Icon->setIndent(0);

        gridLayout->addWidget(Icon, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 1, 1, 1);

        stackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName("page2");
        layoutWidget1 = new QWidget(page2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 401, 441));
        gridLayoutreg = new QGridLayout(layoutWidget1);
        gridLayoutreg->setObjectName("gridLayoutreg");
        gridLayoutreg->setContentsMargins(7, 14, 7, 7);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayoutreg->addItem(verticalSpacer, 6, 0, 1, 1);

        repassLine = new QLineEdit(layoutWidget1);
        repassLine->setObjectName("repassLine");
        repassLine->setMinimumSize(QSize(240, 30));
        repassLine->setMaximumSize(QSize(240, 30));
        repassLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        gridLayoutreg->addWidget(repassLine, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gologbtn = new QPushButton(layoutWidget1);
        gologbtn->setObjectName("gologbtn");
        gologbtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #ffffff;\n"
"        border: 2px solid #4285f4;\n"
"        border-radius: 12px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\346\214\211\351\234\200\350\260\203\346\225\264 */\n"
"        color: #4285f4;\n"
"        font-size: 14px;\n"
"        padding: 6px 20px; /* \344\270\212\344\270\213\345\206\205\350\276\271\350\267\235 6px\357\274\214\345\267\246\345\217\263 20px\357\274\214\346\216\247\345\210\266\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: #f0f7ff;\n"
"        border-color: #3367d6;\n"
"    }\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #e1ecff;\n"
"        border-color: #2854b4;\n"
"        /* \346\214\211\344\270\213\346\227\266\350\275\273\345\276\256\347\274\251\350\277\233\346\225\210\346\236\234\357\274\214\345\242\236\345\274\272\344\272\244\344\272\222\346\204\237 */\n"
"        padding: 7px 19px 5px 21px;\n"
"    }\n"
""
                        "\n"
"    QPushButton:disabled {\n"
"        background-color: #f5f5f5;\n"
"        border-color: #ddd;\n"
"        color: #999;\n"
"    }"));

        horizontalLayout_3->addWidget(gologbtn);

        registrationbtn = new QPushButton(layoutWidget1);
        registrationbtn->setObjectName("registrationbtn");
        registrationbtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #ffffff;\n"
"        border: 2px solid #4285f4;\n"
"        border-radius: 12px; /* \345\234\206\350\247\222\345\215\212\345\276\204\357\274\214\345\217\257\346\214\211\351\234\200\350\260\203\346\225\264 */\n"
"        color: #4285f4;\n"
"        font-size: 14px;\n"
"        padding: 6px 20px; /* \344\270\212\344\270\213\345\206\205\350\276\271\350\267\235 6px\357\274\214\345\267\246\345\217\263 20px\357\274\214\346\216\247\345\210\266\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: #f0f7ff;\n"
"        border-color: #3367d6;\n"
"    }\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #e1ecff;\n"
"        border-color: #2854b4;\n"
"        /* \346\214\211\344\270\213\346\227\266\350\275\273\345\276\256\347\274\251\350\277\233\346\225\210\346\236\234\357\274\214\345\242\236\345\274\272\344\272\244\344\272\222\346\204\237 */\n"
"        padding: 7px 19px 5px 21px;\n"
"    }\n"
""
                        "\n"
"    QPushButton:disabled {\n"
"        background-color: #f5f5f5;\n"
"        border-color: #ddd;\n"
"        color: #999;\n"
"    }"));

        horizontalLayout_3->addWidget(registrationbtn);


        gridLayoutreg->addLayout(horizontalLayout_3, 7, 0, 1, 1);

        accountLine = new QLineEdit(layoutWidget1);
        accountLine->setObjectName("accountLine");
        accountLine->setMinimumSize(QSize(240, 30));
        accountLine->setMaximumSize(QSize(240, 30));
        accountLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        gridLayoutreg->addWidget(accountLine, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayoutreg->addItem(verticalSpacer_4, 1, 0, 1, 1);

        passLine = new QLineEdit(layoutWidget1);
        passLine->setObjectName("passLine");
        passLine->setMinimumSize(QSize(240, 30));
        passLine->setMaximumSize(QSize(240, 30));
        passLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        gridLayoutreg->addWidget(passLine, 4, 0, 1, 1);

        MainTextreg = new QLabel(layoutWidget1);
        MainTextreg->setObjectName("MainTextreg");
        MainTextreg->setMinimumSize(QSize(0, 40));
        MainTextreg->setMaximumSize(QSize(16777215, 40));
        MainTextreg->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"        color: #333333; /* \346\226\207\345\255\227\351\242\234\350\211\262\357\274\210\346\267\261\347\201\260\357\274\214\344\270\215\345\210\272\347\234\274\357\274\211 */\n"
"        font-size: 13px;\n"
"        background: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257\357\274\214\344\270\215\351\201\256\346\214\241\347\252\227\345\217\243\346\270\220\345\217\230 */\n"
"        padding: 2px 5px;\n"
"    }"));

        gridLayoutreg->addWidget(MainTextreg, 0, 0, 1, 1);

        NicknameLine = new QLineEdit(layoutWidget1);
        NicknameLine->setObjectName("NicknameLine");
        NicknameLine->setMinimumSize(QSize(240, 30));
        NicknameLine->setMaximumSize(QSize(240, 30));
        NicknameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(255, 255, 255, 0.8);\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"}"));

        gridLayoutreg->addWidget(NicknameLine, 2, 0, 1, 1);

        gridLayoutreg->setRowMinimumHeight(0, 3);
        stackedWidget->addWidget(page2);

        retranslateUi(LogReg);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogReg);
    } // setupUi

    void retranslateUi(QWidget *LogReg)
    {
        LogReg->setWindowTitle(QCoreApplication::translate("LogReg", "HH\350\201\212\345\244\251\345\256\244", nullptr));
        accountLogLine->setText(QCoreApplication::translate("LogReg", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordLogline->setText(QCoreApplication::translate("LogReg", "\345\257\206\347\240\201", nullptr));
        LogText->setText(QCoreApplication::translate("LogReg", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">HH Chat Room</span></p></body></html>", nullptr));
        regbtn->setText(QString());
#if QT_CONFIG(shortcut)
        regbtn->setShortcut(QCoreApplication::translate("LogReg", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        Logbtn->setText(QString());
#if QT_CONFIG(shortcut)
        Logbtn->setShortcut(QCoreApplication::translate("LogReg", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        Icon->setText(QString());
        repassLine->setText(QCoreApplication::translate("LogReg", "\345\257\206\347\240\201\347\241\256\350\256\244", nullptr));
        gologbtn->setText(QCoreApplication::translate("LogReg", "\345\216\273\347\231\273\345\275\225", nullptr));
        registrationbtn->setText(QCoreApplication::translate("LogReg", "\346\263\250\345\206\214", nullptr));
        accountLine->setText(QCoreApplication::translate("LogReg", "\347\224\250\346\210\267\345\220\215", nullptr));
        passLine->setText(QCoreApplication::translate("LogReg", "\345\257\206\347\240\201", nullptr));
        MainTextreg->setText(QCoreApplication::translate("LogReg", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\263\250\345\206\214</span></p></body></html>", nullptr));
        NicknameLine->setText(QCoreApplication::translate("LogReg", "\346\230\265\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogReg: public Ui_LogReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGREG_H
