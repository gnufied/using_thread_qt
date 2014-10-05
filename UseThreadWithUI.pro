#-------------------------------------------------
#
# Project created by QtCreator 2014-10-04T20:11:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UseThreadWithUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    workerthread.cpp

HEADERS  += mainwindow.h \
    workerthread.h

FORMS    += mainwindow.ui
