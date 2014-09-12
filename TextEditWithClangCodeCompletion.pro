#-------------------------------------------------
#
# Project created by QtCreator 2014-09-12T00:07:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TextEditWithClangCodeCompletion
TEMPLATE = app

SOURCES += main.cpp\
        texteditwithclangcodecompletion.cpp

HEADERS  += texteditwithclangcodecompletion.h

DEFINES += NDEBUG
DEFINES += _GNU_SOURCE
DEFINES += __STDC_CONSTANT_MACROS
DEFINES += __STDC_FORMAT_MACROS
DEFINES += __STDC_LIMIT_MACROS
INCLUDEPATH += "/usr/lib/llvm-3.4/include"
LIBS += -L/usr/lib/llvm-3.4/lib -lclang
