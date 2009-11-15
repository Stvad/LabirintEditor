/********************************************************************************
** Form generated from reading UI file 'AddBoxDialog.ui'
**
** Created: Sat Nov 14 23:20:30 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOXDIALOG_H
#define UI_ADDBOXDIALOG_H

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

class Ui_AddBoxDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lePosX;
    QLineEdit *leWidht;
    QLineEdit *leHeight;
    QLineEdit *leLenght;
    QLabel *lbPosition;
    QLabel *lbWidht;
    QLabel *lbHeight;
    QLabel *lbLenght;
    QLineEdit *lePosY;
    QLineEdit *lePosZ;
    QLabel *lbPosX;
    QLabel *lbPosY;
    QLabel *lbPosZ;
    QLabel *lbLenghtPoints;
    QLineEdit *leWidhtPoints;
    QLabel *lbKPO;
    QLabel *lbWidhtPoints;
    QLineEdit *leLenghtPoints;
    QLabel *lbHeightPoints;
    QLineEdit *leHeightPoints;
    QLabel *lbAngel;
    QLineEdit *leAngle;

    void setupUi(QDialog *AddBoxDialog)
    {
        if (AddBoxDialog->objectName().isEmpty())
            AddBoxDialog->setObjectName(QString::fromUtf8("AddBoxDialog"));
        AddBoxDialog->resize(214, 324);
        buttonBox = new QDialogButtonBox(AddBoxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 290, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lePosX = new QLineEdit(AddBoxDialog);
        lePosX->setObjectName(QString::fromUtf8("lePosX"));
        lePosX->setGeometry(QRect(30, 28, 31, 26));
        leWidht = new QLineEdit(AddBoxDialog);
        leWidht->setObjectName(QString::fromUtf8("leWidht"));
        leWidht->setGeometry(QRect(120, 90, 70, 26));
        leHeight = new QLineEdit(AddBoxDialog);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));
        leHeight->setGeometry(QRect(120, 120, 70, 26));
        leLenght = new QLineEdit(AddBoxDialog);
        leLenght->setObjectName(QString::fromUtf8("leLenght"));
        leLenght->setGeometry(QRect(120, 150, 70, 26));
        lbPosition = new QLabel(AddBoxDialog);
        lbPosition->setObjectName(QString::fromUtf8("lbPosition"));
        lbPosition->setGeometry(QRect(20, 10, 56, 16));
        lbWidht = new QLabel(AddBoxDialog);
        lbWidht->setObjectName(QString::fromUtf8("lbWidht"));
        lbWidht->setGeometry(QRect(20, 85, 61, 31));
        lbHeight = new QLabel(AddBoxDialog);
        lbHeight->setObjectName(QString::fromUtf8("lbHeight"));
        lbHeight->setGeometry(QRect(20, 115, 56, 31));
        lbLenght = new QLabel(AddBoxDialog);
        lbLenght->setObjectName(QString::fromUtf8("lbLenght"));
        lbLenght->setGeometry(QRect(20, 145, 71, 31));
        lePosY = new QLineEdit(AddBoxDialog);
        lePosY->setObjectName(QString::fromUtf8("lePosY"));
        lePosY->setGeometry(QRect(80, 28, 31, 26));
        lePosZ = new QLineEdit(AddBoxDialog);
        lePosZ->setObjectName(QString::fromUtf8("lePosZ"));
        lePosZ->setGeometry(QRect(130, 28, 31, 26));
        lbPosX = new QLabel(AddBoxDialog);
        lbPosX->setObjectName(QString::fromUtf8("lbPosX"));
        lbPosX->setGeometry(QRect(20, 30, 21, 21));
        lbPosX->setTextFormat(Qt::AutoText);
        lbPosY = new QLabel(AddBoxDialog);
        lbPosY->setObjectName(QString::fromUtf8("lbPosY"));
        lbPosY->setGeometry(QRect(70, 30, 21, 21));
        lbPosZ = new QLabel(AddBoxDialog);
        lbPosZ->setObjectName(QString::fromUtf8("lbPosZ"));
        lbPosZ->setGeometry(QRect(120, 30, 21, 21));
        lbLenghtPoints = new QLabel(AddBoxDialog);
        lbLenghtPoints->setObjectName(QString::fromUtf8("lbLenghtPoints"));
        lbLenghtPoints->setGeometry(QRect(20, 270, 71, 16));
        leWidhtPoints = new QLineEdit(AddBoxDialog);
        leWidhtPoints->setObjectName(QString::fromUtf8("leWidhtPoints"));
        leWidhtPoints->setGeometry(QRect(120, 200, 70, 26));
        lbKPO = new QLabel(AddBoxDialog);
        lbKPO->setObjectName(QString::fromUtf8("lbKPO"));
        lbKPO->setGeometry(QRect(20, 180, 131, 16));
        lbWidhtPoints = new QLabel(AddBoxDialog);
        lbWidhtPoints->setObjectName(QString::fromUtf8("lbWidhtPoints"));
        lbWidhtPoints->setGeometry(QRect(20, 210, 61, 16));
        leLenghtPoints = new QLineEdit(AddBoxDialog);
        leLenghtPoints->setObjectName(QString::fromUtf8("leLenghtPoints"));
        leLenghtPoints->setGeometry(QRect(120, 260, 70, 26));
        lbHeightPoints = new QLabel(AddBoxDialog);
        lbHeightPoints->setObjectName(QString::fromUtf8("lbHeightPoints"));
        lbHeightPoints->setGeometry(QRect(20, 240, 56, 16));
        leHeightPoints = new QLineEdit(AddBoxDialog);
        leHeightPoints->setObjectName(QString::fromUtf8("leHeightPoints"));
        leHeightPoints->setGeometry(QRect(120, 230, 70, 26));
        lbAngel = new QLabel(AddBoxDialog);
        lbAngel->setObjectName(QString::fromUtf8("lbAngel"));
        lbAngel->setGeometry(QRect(20, 55, 61, 31));
        leAngle = new QLineEdit(AddBoxDialog);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        leAngle->setGeometry(QRect(120, 60, 70, 26));

        retranslateUi(AddBoxDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBoxDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBoxDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBoxDialog)
    {
        AddBoxDialog->setWindowTitle(QApplication::translate("AddBoxDialog", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\261\320\276\320\272\321\201", 0, QApplication::UnicodeUTF8));
        lbPosition->setText(QApplication::translate("AddBoxDialog", "\320\237\320\276\320\267\320\270\321\206\321\226\321\217", 0, QApplication::UnicodeUTF8));
        lbWidht->setText(QApplication::translate("AddBoxDialog", "\320\250\320\270\321\200\320\270\320\275\320\260", 0, QApplication::UnicodeUTF8));
        lbHeight->setText(QApplication::translate("AddBoxDialog", "\320\222\320\270\321\201\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        lbLenght->setText(QApplication::translate("AddBoxDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\320\260", 0, QApplication::UnicodeUTF8));
        lbPosX->setText(QApplication::translate("AddBoxDialog", "X", 0, QApplication::UnicodeUTF8));
        lbPosY->setText(QApplication::translate("AddBoxDialog", "Y", 0, QApplication::UnicodeUTF8));
        lbPosZ->setText(QApplication::translate("AddBoxDialog", "Z", 0, QApplication::UnicodeUTF8));
        lbLenghtPoints->setText(QApplication::translate("AddBoxDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbKPO->setText(QApplication::translate("AddBoxDialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\202\320\276\321\207\320\276\320\272 \320\277\320\276:", 0, QApplication::UnicodeUTF8));
        lbWidhtPoints->setText(QApplication::translate("AddBoxDialog", "\320\250\320\270\321\200\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbHeightPoints->setText(QApplication::translate("AddBoxDialog", "\320\222\320\270\321\201\320\276\321\202\321\226", 0, QApplication::UnicodeUTF8));
        lbAngel->setText(QApplication::translate("AddBoxDialog", "\320\232\321\203\321\202", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddBoxDialog: public Ui_AddBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOXDIALOG_H
