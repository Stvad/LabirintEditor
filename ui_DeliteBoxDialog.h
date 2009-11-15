/********************************************************************************
** Form generated from reading UI file 'DeliteBoxDialog.ui'
**
** Created: Sat Nov 14 23:20:30 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELITEBOXDIALOG_H
#define UI_DELITEBOXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DeliteBoxDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *leNDelBox;
    QLabel *lbNDelBox;

    void setupUi(QDialog *DeliteBoxDialog)
    {
        if (DeliteBoxDialog->objectName().isEmpty())
            DeliteBoxDialog->setObjectName(QString::fromUtf8("DeliteBoxDialog"));
        DeliteBoxDialog->resize(264, 142);
        buttonBox = new QDialogButtonBox(DeliteBoxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 90, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        leNDelBox = new QLineEdit(DeliteBoxDialog);
        leNDelBox->setObjectName(QString::fromUtf8("leNDelBox"));
        leNDelBox->setGeometry(QRect(140, 40, 113, 26));
        lbNDelBox = new QLabel(DeliteBoxDialog);
        lbNDelBox->setObjectName(QString::fromUtf8("lbNDelBox"));
        lbNDelBox->setGeometry(QRect(10, 45, 121, 20));

        retranslateUi(DeliteBoxDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeliteBoxDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeliteBoxDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeliteBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *DeliteBoxDialog)
    {
        DeliteBoxDialog->setWindowTitle(QApplication::translate("DeliteBoxDialog", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\261\320\276\320\272\321\201 \342\204\226", 0, QApplication::UnicodeUTF8));
        lbNDelBox->setText(QApplication::translate("DeliteBoxDialog", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\261\320\276\320\272\321\201 \342\204\226", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeliteBoxDialog: public Ui_DeliteBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELITEBOXDIALOG_H
