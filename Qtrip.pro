#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T17:35:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qtrip
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Model/Persona/residenza.cpp \
    Model/Persona/luogo.cpp \
    Model/Persona/persona.cpp \
    Model/Persona/nato.cpp \
    Model/Diario/viaggio.cpp \
    Model/Diario/recensione.cpp \
    Model/Diario/diario.cpp \
    Model/Utente/smartutente.cpp

HEADERS  += mainwindow.h \
    Model/Persona/luogo.h \
    Model/Persona/residenza.h \
    Model/Persona/persona.h \
    Model/Persona/nato.h \
    Model/Diario/viaggio.h \
    Model/Diario/recensione.h \
    Model/Diario/diario.h \
    Model/Utente/smartutente.h

FORMS    += mainwindow.ui

DISTFILES +=
