/********************************************************************************
** Form generated from reading ui file 'nchangeboxdialog.ui'
**
** Created: Wed Nov 18 16:27:36 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NCHANGEBOXDIALOG_H
#define UI_NCHANGEBOXDIALOG_H

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

class Ui_NChangeBoxDialog
{
public:
    QLineEdit *leNChngBox;
    QDialogButtonBox *buttonBox;
    QLabel *lbNChnglBox;

    void setupUi(QDialog *NChangeBoxDialog)
    {
        if (NChangeBoxDialog->objectName().isEmpty())
            NChangeBoxDialog->setObjectName(QString::fromUtf8("NChangeBoxDialog"));
        NChangeBoxDialog->resize(286, 117);
        leNChngBox = new QLineEdit(NChangeBoxDialog);
        leNChngBox->setObjectName(QString::fromUtf8("leNChngBox"));
        leNChngBox->setGeometry(QRect(150, 25, 113, 26));
        buttonBox = new QDialogButtonBox(NChangeBoxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 75, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lbNChnglBox = new QLabel(NChangeBoxDialog);
        lbNChnglBox->setObjectName(QString::fromUtf8("lbNChnglBox"));
        lbNChnglBox->setGeometry(QRect(20, 30, 121, 20));

        retranslateUi(NChangeBoxDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), NChangeBoxDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(NChangeBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *NChangeBoxDialog)
    {
        NChangeBoxDialog->setWindowTitle(QApplication::translate("NChangeBoxDialog", "\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \342\204\226 \320\261\320\276\320\272\321\201\320\260 \321\217\320\272\320\270\320\271 \321\202\321\200\320\265\320\261\320\260 \320\267\320\274\321\226\320\275\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        lbNChnglBox->setText(QApplication::translate("NChangeBoxDialog", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\261\320\276\320\272\321\201 \342\204\226", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(NChangeBoxDialog);
    } // retranslateUi

};

namespace Ui {
    class NChangeBoxDialog: public Ui_NChangeBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NCHANGEBOXDIALOG_H
