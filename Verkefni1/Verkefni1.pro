QT += core sql
QT -= gui
QT += sql

TARGET = Verkefni1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    data.cpp \
    scientist.cpp \
    ui.cpp \
    engine.cpp \
    computer.cpp \
    sql.cpp

HEADERS += \
    data.h \
    scientist.h \
    ui.h \
    engine.h \
    computer.h \
    sql.h

