#-------------------------------------------------
#
# Project created by QtCreator 2016-05-11T01:51:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    score.cpp

HEADERS  += mainwindow.h \
    game.h \
    score.h

FORMS    += mainwindow.ui \
    game.ui \
    score.ui

RESOURCES += \
    pics.qrc
