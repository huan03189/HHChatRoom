
QT += core gui widgets sql network mqtt


TARGET = MqttChatClient
TEMPLATE = app
CONFIG += c++17


msvc {
    QMAKE_CXXFLAGS_RELEASE += /MT
    QMAKE_CXXFLAGS_DEBUG += /MTd

}


SOURCES += \
    charroom.cpp \
    database.cpp \
    logreg.cpp \
    main.cpp \
    mqttwork.cpp \
    privatechat.cpp \
    weather.cpp \
    widget.cpp

HEADERS += \
    charroom.h \
    database.h \
    logreg.h \
    mqttwork.h \
    privatechat.h \
    weather.h \
    widget.h

FORMS += \
    charroom.ui \
    logreg.ui \
    privatechat.ui \
    weather.ui \
    widget.ui

RESOURCES += \
    Icon.qrc


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
