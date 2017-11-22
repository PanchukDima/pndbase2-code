#-------------------------------------------------
#
# Project created by QtCreator 2017-11-15T22:17:57
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = base2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Core/qpndcore.cpp \
    Core/objects_app.cpp \
    Core/DialogSorWindow/Dynamic_view/w_dynamic_view.cpp \
    Core/logs_engine.cpp \
    Core/DialogSorWindow/Auth/d_auth.cpp

HEADERS += \
        mainwindow.h \
    Core/qpndcore.h \
    Core/objects_app.h \
    Core/DialogSorWindow/Dynamic_view/w_dynamic_view.h \
    Core/logs_engine.h \
    Core/DialogSorWindow/Auth/d_auth.h

FORMS += \
        mainwindow.ui \
    Core/DialogSorWindow/Dynamic_view/w_dynamic_view.ui \
    Core/DialogSorWindow/Auth/d_auth.ui
