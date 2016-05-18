#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T16:03:19
#
#-------------------------------------------------

QT       -= gui

TARGET = cppword
TEMPLATE = lib

DEFINES += CPPWORD_LIBRARY

SOURCES += cppword.cpp \
    cppword_documentproperties.cpp \
    cppword_section.cpp \
    cppword_section_settings.cpp \
    cppword_style.cpp

HEADERS += cppword.h\
        cppword_global.h \
    cppword_documentproperties.h \
    cppword_section.h \
    cppword_section_settings.h \
    cppword_style.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
