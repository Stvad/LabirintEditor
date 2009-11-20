/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Nov 21 01:04:00 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_4;
    QAction *action_5;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    MyGLWidget *glWidget;
    QPushButton *pbChangeSettings;
    QPushButton *pbClose;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pbDellNBox;
    QPushButton *pbDellLustBox;
    QPushButton *pbDellAllBoxes;
    QPushButton *pbChangeBox;
    QPushButton *pbAddBox;
    QWidget *tab_2;
    QLabel *lbPVzd;
    QRadioButton *rbPX;
    QRadioButton *rbPY;
    QRadioButton *rbPZ;
    QRadioButton *rbPXY;
    QRadioButton *rbPYZ;
    QRadioButton *rbPXZ;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 709);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        glWidget = new MyGLWidget(centralwidget);
        glWidget->setObjectName(QString::fromUtf8("glWidget"));
        glWidget->setGeometry(QRect(20, 30, 821, 631));
        glWidget->setFocusPolicy(Qt::NoFocus);
        pbChangeSettings = new QPushButton(centralwidget);
        pbChangeSettings->setObjectName(QString::fromUtf8("pbChangeSettings"));
        pbChangeSettings->setGeometry(QRect(860, 580, 161, 25));
        pbClose = new QPushButton(centralwidget);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(890, 630, 97, 25));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(850, 30, 171, 511));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pbDellNBox = new QPushButton(tab);
        pbDellNBox->setObjectName(QString::fromUtf8("pbDellNBox"));
        pbDellNBox->setGeometry(QRect(20, 100, 135, 25));
        pbDellLustBox = new QPushButton(tab);
        pbDellLustBox->setObjectName(QString::fromUtf8("pbDellLustBox"));
        pbDellLustBox->setGeometry(QRect(20, 70, 135, 25));
        pbDellAllBoxes = new QPushButton(tab);
        pbDellAllBoxes->setObjectName(QString::fromUtf8("pbDellAllBoxes"));
        pbDellAllBoxes->setGeometry(QRect(20, 130, 135, 25));
        pbChangeBox = new QPushButton(tab);
        pbChangeBox->setObjectName(QString::fromUtf8("pbChangeBox"));
        pbChangeBox->setGeometry(QRect(20, 40, 135, 25));
        pbAddBox = new QPushButton(tab);
        pbAddBox->setObjectName(QString::fromUtf8("pbAddBox"));
        pbAddBox->setGeometry(QRect(20, 10, 135, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lbPVzd = new QLabel(tab_2);
        lbPVzd->setObjectName(QString::fromUtf8("lbPVzd"));
        lbPVzd->setGeometry(QRect(0, 20, 161, 18));
        rbPX = new QRadioButton(tab_2);
        rbPX->setObjectName(QString::fromUtf8("rbPX"));
        rbPX->setGeometry(QRect(0, 50, 41, 21));
        rbPY = new QRadioButton(tab_2);
        rbPY->setObjectName(QString::fromUtf8("rbPY"));
        rbPY->setGeometry(QRect(50, 50, 41, 21));
        rbPZ = new QRadioButton(tab_2);
        rbPZ->setObjectName(QString::fromUtf8("rbPZ"));
        rbPZ->setGeometry(QRect(100, 50, 41, 21));
        rbPXY = new QRadioButton(tab_2);
        rbPXY->setObjectName(QString::fromUtf8("rbPXY"));
        rbPXY->setGeometry(QRect(0, 80, 51, 21));
        rbPYZ = new QRadioButton(tab_2);
        rbPYZ->setObjectName(QString::fromUtf8("rbPYZ"));
        rbPYZ->setGeometry(QRect(50, 80, 51, 21));
        rbPXZ = new QRadioButton(tab_2);
        rbPXZ->setObjectName(QString::fromUtf8("rbPXZ"));
        rbPXZ->setGeometry(QRect(100, 80, 51, 21));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addSeparator();
        menu->addAction(action_5);
        menu_2->addAction(action);
        menu_2->addAction(action_4);

        retranslateUi(MainWindow);
        QObject::connect(pbClose, SIGNAL(clicked()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\273\320\260\320\261\321\226\321\200\320\270\320\275\321\202\321\203", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\262\321\226\320\264\320\272\320\260", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        pbChangeSettings->setText(QApplication::translate("MainWindow", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\207\320\270\320\275\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        pbDellNBox->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\261\320\276\320\272\321\201 \342\204\226", 0, QApplication::UnicodeUTF8));
        pbDellLustBox->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\276\321\201\321\202\320\260\320\275\320\275\321\226\320\271", 0, QApplication::UnicodeUTF8));
        pbDellAllBoxes->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\203\321\201\321\226 \320\261\320\276\320\272\321\201\320\270", 0, QApplication::UnicodeUTF8));
        pbChangeBox->setText(QApplication::translate("MainWindow", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\261\320\276\320\272\321\201", 0, QApplication::UnicodeUTF8));
        pbAddBox->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\261\320\276\320\272\321\201", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\221\320\276\320\272\321\201\320\270", 0, QApplication::UnicodeUTF8));
        lbPVzd->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\321\226\321\211\321\203\320\262\320\260\321\202\320\270 \320\262\320\267\320\264\320\276\320\262\320\266:", 0, QApplication::UnicodeUTF8));
        rbPX->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        rbPY->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        rbPZ->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        rbPXY->setText(QApplication::translate("MainWindow", "XY", 0, QApplication::UnicodeUTF8));
        rbPYZ->setText(QApplication::translate("MainWindow", "YZ", 0, QApplication::UnicodeUTF8));
        rbPXZ->setText(QApplication::translate("MainWindow", "XZ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\274\321\226\321\211\320\265\320\275\320\275\320\275\321\217", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\224\320\276\320\262\321\226\320\264\320\272\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
