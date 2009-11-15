/********************************************************************************
** Form generated from reading UI file 'BoxBrokingMatchesDialog.ui'
**
** Created: Sat Nov 14 23:20:30 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXBROKINGMATCHESDIALOG_H
#define UI_BOXBROKINGMATCHESDIALOG_H

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

class Ui_BoxBrokingMatchesDialog
{
public:
    QLabel *lbWidhtPoints;
    QDialogButtonBox *buttonBox;
    QLabel *lbHeightPoints;
    QLineEdit *leHeightPoints;
    QLabel *lbLenghtPoints;
    QLineEdit *leWidhtPoints;
    QLineEdit *leLenghtPoints;
    QLabel *lbKPO;

    void setupUi(QDialog *BoxBrokingMatchesDialog)
    {
        if (BoxBrokingMatchesDialog->objectName().isEmpty())
            BoxBrokingMatchesDialog->setObjectName(QString::fromUtf8("BoxBrokingMatchesDialog"));
        BoxBrokingMatchesDialog->resize(213, 176);
        lbWidhtPoints = new QLabel(BoxBrokingMatchesDialog);
        lbWidhtPoints->setObjectName(QString::fromUtf8("lbWidhtPoints"));
        lbWidhtPoints->setGeometry(QRect(20, 40, 61, 16));
        buttonBox = new QDialogButtonBox(BoxBrokingMatchesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 130, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lbHeightPoints = new QLabel(BoxBrokingMatchesDialog);
        lbHeightPoints->setObjectName(QString::fromUtf8("lbHeightPoints"));
        lbHeightPoints->setGeometry(QRect(20, 70, 56, 16));
        leHeightPoints = new QLineEdit(BoxBrokingMatchesDialog);
        leHeightPoints->setObjectName(QString::fromUtf8("leHeightPoints"));
        leHeightPoints->setGeometry(QRect(120, 60, 70, 26));
        lbLenghtPoints = new QLabel(BoxBrokingMatchesDialog);
        lbLenghtPoints->setObjectName(QString::fromUtf8("lbLenghtPoints"));
        lbLenghtPoints->setGeometry(QRect(20, 100, 71, 16));
        leWidhtPoints = new QLineEdit(BoxBrokingMatchesDialog);
        leWidhtPoints->setObjectName(QString::fromUtf8("leWidhtPoints"));
        leWidhtPoints->setGeometry(QRect(120, 30, 70, 26));
        leLenghtPoints = new QLineEdit(BoxBrokingMatchesDialog);
        leLenghtPoints->setObjectName(QString::fromUtf8("leLenghtPoints"));
        leLenghtPoints->setGeometry(QRect(120, 90, 70, 26));
        lbKPO = new QLabel(BoxBrokingMatchesDialog);
        lbKPO->setObjectName(QString::fromUtf8("lbKPO"));
        lbKPO->setGeometry(QRect(20, 10, 131, 16));

        retranslateUi(BoxBrokingMatchesDialog);

        QMetaObject::connectSlotsByName(BoxBrokingMatchesDialog);
    } // setupUi

    void retranslateUi(QDialog *BoxBrokingMatchesDialog)
    {
        BoxBrokingMatchesDialog->setWindowTitle(QApplication::translate("BoxBrokingMatchesDialog", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\270 \321\200\320\276\320\267\320\261\320\270\320\262\320\272\320\270 \320\261\320\276\320\272\321\201\321\203", 0, QApplication::UnicodeUTF8));
        lbWidhtPoints->setText(QApplication::translate("BoxBrokingMatchesDialog", "\320\250\320\270\321\200\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbHeightPoints->setText(QApplication::translate("BoxBrokingMatchesDialog", "\320\222\320\270\321\201\320\276\321\202\321\226", 0, QApplication::UnicodeUTF8));
        lbLenghtPoints->setText(QApplication::translate("BoxBrokingMatchesDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbKPO->setText(QApplication::translate("BoxBrokingMatchesDialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\202\320\276\321\207\320\276\320\272 \320\277\320\276:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BoxBrokingMatchesDialog: public Ui_BoxBrokingMatchesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXBROKINGMATCHESDIALOG_H
