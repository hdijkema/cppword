#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T16:03:19
#
#-------------------------------------------------

QT       -= gui

TARGET = cppword
TEMPLATE = lib

DEFINES += CPPWORD_LIBRARY

SOURCES += cppword.cpp

HEADERS += cppword.h\
        cppword_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
