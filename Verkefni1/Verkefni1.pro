QT += core
QT -= gui

TARGET = Verkefni1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    data.cpp \
    userinterface.cpp \
    pionniers.cpp

HEADERS += \
    data.h \
    userinterface.h \
    pionniers.h
