#-------------------------------------------------
#
# Project created by QtCreator 2015-03-20T16:52:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RSQtSimpleDepth
TEMPLATE = app

INCLUDEPATH += "$(RSSDK_DIR)/include"
LIBS += -L"$(RSSDK_DIR)/lib/x64/" -llibpxc #-llibpxcmd #-llibpxcutilsmd


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
