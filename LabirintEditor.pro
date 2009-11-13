# -------------------------------------------------
# Project created by QtCreator 2009-06-11T10:50:39
# -------------------------------------------------
QT += opengl xml
TARGET = LabirintEditor
TEMPLATE = app
SOURCES += myglwidget.cpp \
    mainwindow.cpp \
    main.cpp \
    boxmanager.cpp \
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
    xmlloader.cpp
HEADERS += myglwidget.h \
    mainwindow.h \
    boxmanager.h \
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
    xmlloader.h
OTHER_FILES += 
FORMS += mainwindow.ui \
    AddBoxDialog.ui \
    ChangeBoxDialog.ui \
    DeliteBoxDialog.ui \
    BoxBrokingMatchesDialog.ui \
    nchangeboxdialog.ui
