QT = core
QT += serialport
QT += sql

CONFIG += console
CONFIG -= app_bundle

TARGET = creaderasync
TEMPLATE = app

HEADERS += \
    serialportreader.h \
    tramme.h

SOURCES += \
    db.cpp \
    main.cpp \
    serialportreader.cpp \
    structure.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/creaderasync
INSTALLS += target
