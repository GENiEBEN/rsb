#-------------------------------------------------
#
# Project created by QtCreator 2015-10-15T13:05:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rsb
TEMPLATE = app

# The application version
VERSION_APP = 0.10
# Define the preprocessor macro to get the application version in our application.
DEFINES += APP_VERSION=\\\"$$VERSION_APP\\\"\
QT_MESSAGELOGCONTEXT

SOURCES += main.cpp\
	gui.cpp\
    picker.cpp \
    helpers/misc.cpp \
    benches/aquamark3.cpp \
    security/security.cpp \
    systeminfo/smbios.cpp \
    systeminfo/sysinfo.cpp


HEADERS  += gui.h \
    picker.h \
    helpers/misc.h \
    benches/aquamark3.h \
    security/security.h \
    systeminfo/smbios.hpp \
    systeminfo/sysinfo.h

FORMS    += gui.ui \
    picker.ui

RESOURCES += \
    res/res.qrc

# TRANSLATIONS = lang/lang_ro.ts
