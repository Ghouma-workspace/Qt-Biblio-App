#-------------------------------------------------
#
# Project created by QtCreator 2022-04-08T22:27:20
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewProject002
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    userdialog.cpp \
    admindialog.cpp \
    utilisateur.cpp \
    newongle.cpp \
    registry.cpp \
    biblio.cpp \
    admin.cpp \
    abonne.cpp \
    abonnedialog.cpp \
    document.cpp \
    registryabonne.cpp \
    livre.cpp \
    cd.cpp \
    ajoutdoc.cpp \
    empreint.cpp \
    pdf.cpp \
    antiquite.cpp

HEADERS  += mainwindow.h \
    userdialog.h \
    admindialog.h \
    utilisateur.h \
    newongle.h \
    registry.h \
    biblio.h \
    admin.h \
    abonne.h \
    abonnedialog.h \
    document.h \
    registryabonne.h \
    livre.h \
    cd.h \
    ajoutdoc.h \
    empreint.h \
    pdf.h \
    antiquite.h

FORMS    += mainwindow.ui \
    userdialog.ui \
    admindialog.ui \
    newongle.ui \
    registry.ui \
    abonnedialog.ui \
    registryabonne.ui \
    ajoutdoc.ui
