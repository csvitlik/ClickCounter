#-------------------------------------------------
#
# Project created by QtCreator 2017-02-26T10:57:49
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClickCounter
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    aboutdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    preferencesdialog.cpp

HEADERS += \
    aboutdialog.h \
    mainwindow.h \
    preferencesdialog.h

FORMS += \
    aboutdialog.ui \
    mainwindow.ui \
    preferencesdialog.ui
