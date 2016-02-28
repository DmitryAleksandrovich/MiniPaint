#-------------------------------------------------
#
# Project created by QtCreator 2016-01-26T01:47:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MiniPaint
TEMPLATE = app


SOURCES += main.cpp\
    rectangle.cpp \
    scene.cpp \
    mainwindow.cpp \
    shape.cpp \
    triangle.cpp \
    ellipse.cpp

HEADERS  += \
    rectangle.h \
    scene.h \
    mainwindow.h \
    shape.h \
    triangle.h \
    ellipse.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    icons.qrc
