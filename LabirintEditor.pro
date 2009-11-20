# -------------------------------------------------
# Project created by QtCreator 2009-06-11T10:50:39
# -------------------------------------------------
QT += opengl \
    xml
TARGET = LabirintEditor
TEMPLATE = app
CONFIG += debug_and_release
SOURCES += myglwidget.cpp \
    mainwindow.cpp \
    main.cpp \
    objectmanager.cpp \
    boxcreator.cpp \
    box.cpp \
    point3d.cpp \
    point2d.cpp \
    vertex.cpp \
    AddBoxDialog.cpp \
    ChangeBoxDialog.cpp \
    DeliteBoxDialog.cpp \
    BoxBrokingMatchesDialog.cpp \
    nchangeboxdialog.cpp \
    xmlloader.cpp \
    sector.cpp \
    plain.cpp \
    addplaindialog.cpp \
    object.cpp
HEADERS += myglwidget.h \
    mainwindow.h \
    objectmanager.h \
    boxcreator.h \
    box.h \
    point3d.h \
    point2d.h \
    vertex.h \
    AddBoxDialog.h \
    ChangeBoxDialog.h \
    DeliteBoxDialog.h \
    BoxBrokingMatchesDialog.h \
    nchangeboxdialog.h \
    xmlloader.h \
    sector.h \
    plain.h \
    addplaindialog.h \
    object.h
OTHER_FILES += 
FORMS += mainwindow.ui \
    AddBoxDialog.ui \
    ChangeBoxDialog.ui \
    DeliteBoxDialog.ui \
    BoxBrokingMatchesDialog.ui \
    nchangeboxdialog.ui \
    addplaindialog.ui
