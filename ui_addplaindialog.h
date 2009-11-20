/********************************************************************************
** Form generated from reading UI file 'addplaindialog.ui'
**
** Created: Fri Nov 20 00:45:19 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLAINDIALOG_H
#define UI_ADDPLAINDIALOG_H

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

class Ui_AddPlainDialog
{
public:
    QLineEdit *lePosY;
    QLineEdit *lePosZ;
    QLabel *lbKPO;
    QLineEdit *leAngle;
    QLineEdit *leLenghtPoints;
    QLineEdit *leLenght;
    QLabel *lbPosX;
    QLabel *lbLenghtPoints;
    QLabel *lbWidht;
    QLabel *lbPosition;
    QLabel *lbLenght;
    QLabel *lbPosY;
    QLabel *lbAngel;
    QDialogButtonBox *buttonBox;
    QLabel *lbPosZ;
    QLineEdit *lePosX;
    QLineEdit *leWidhtPoints;
    QLabel *lbWidhtPoints;
    QLineEdit *leWidht;
    QLabel *lbKSPO;
    QLineEdit *leLenghtSectors;
    QLabel *lbLenghtSectors;
    QLabel *lbWidhtSectors;
    QLineEdit *leWidhtSectors;

    void setupUi(QDialog *AddPlainDialog)
    {
        if (AddPlainDialog->objectName().isEmpty())
            AddPlainDialog->setObjectName(QString::fromUtf8("AddPlainDialog"));
        AddPlainDialog->resize(232, 361);
        lePosY = new QLineEdit(AddPlainDialog);
        lePosY->setObjectName(QString::fromUtf8("lePosY"));
        lePosY->setGeometry(QRect(80, 28, 31, 26));
        lePosZ = new QLineEdit(AddPlainDialog);
        lePosZ->setObjectName(QString::fromUtf8("lePosZ"));
        lePosZ->setGeometry(QRect(130, 28, 31, 26));
        lbKPO = new QLabel(AddPlainDialog);
        lbKPO->setObjectName(QString::fromUtf8("lbKPO"));
        lbKPO->setGeometry(QRect(20, 240, 131, 16));
        leAngle = new QLineEdit(AddPlainDialog);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        leAngle->setGeometry(QRect(150, 60, 70, 26));
        leLenghtPoints = new QLineEdit(AddPlainDialog);
        leLenghtPoints->setObjectName(QString::fromUtf8("leLenghtPoints"));
        leLenghtPoints->setGeometry(QRect(150, 290, 70, 26));
        leLenght = new QLineEdit(AddPlainDialog);
        leLenght->setObjectName(QString::fromUtf8("leLenght"));
        leLenght->setGeometry(QRect(150, 120, 70, 26));
        lbPosX = new QLabel(AddPlainDialog);
        lbPosX->setObjectName(QString::fromUtf8("lbPosX"));
        lbPosX->setGeometry(QRect(20, 30, 21, 21));
        lbPosX->setTextFormat(Qt::AutoText);
        lbLenghtPoints = new QLabel(AddPlainDialog);
        lbLenghtPoints->setObjectName(QString::fromUtf8("lbLenghtPoints"));
        lbLenghtPoints->setGeometry(QRect(20, 300, 71, 16));
        lbWidht = new QLabel(AddPlainDialog);
        lbWidht->setObjectName(QString::fromUtf8("lbWidht"));
        lbWidht->setGeometry(QRect(20, 85, 121, 31));
        lbPosition = new QLabel(AddPlainDialog);
        lbPosition->setObjectName(QString::fromUtf8("lbPosition"));
        lbPosition->setGeometry(QRect(20, 10, 56, 16));
        lbLenght = new QLabel(AddPlainDialog);
        lbLenght->setObjectName(QString::fromUtf8("lbLenght"));
        lbLenght->setGeometry(QRect(20, 115, 121, 31));
        lbPosY = new QLabel(AddPlainDialog);
        lbPosY->setObjectName(QString::fromUtf8("lbPosY"));
        lbPosY->setGeometry(QRect(70, 30, 21, 21));
        lbAngel = new QLabel(AddPlainDialog);
        lbAngel->setObjectName(QString::fromUtf8("lbAngel"));
        lbAngel->setGeometry(QRect(20, 55, 61, 31));
        buttonBox = new QDialogButtonBox(AddPlainDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 320, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lbPosZ = new QLabel(AddPlainDialog);
        lbPosZ->setObjectName(QString::fromUtf8("lbPosZ"));
        lbPosZ->setGeometry(QRect(120, 30, 21, 21));
        lePosX = new QLineEdit(AddPlainDialog);
        lePosX->setObjectName(QString::fromUtf8("lePosX"));
        lePosX->setGeometry(QRect(30, 28, 31, 26));
        leWidhtPoints = new QLineEdit(AddPlainDialog);
        leWidhtPoints->setObjectName(QString::fromUtf8("leWidhtPoints"));
        leWidhtPoints->setGeometry(QRect(150, 260, 70, 26));
        lbWidhtPoints = new QLabel(AddPlainDialog);
        lbWidhtPoints->setObjectName(QString::fromUtf8("lbWidhtPoints"));
        lbWidhtPoints->setGeometry(QRect(20, 270, 61, 16));
        leWidht = new QLineEdit(AddPlainDialog);
        leWidht->setObjectName(QString::fromUtf8("leWidht"));
        leWidht->setGeometry(QRect(150, 90, 70, 26));
        lbKSPO = new QLabel(AddPlainDialog);
        lbKSPO->setObjectName(QString::fromUtf8("lbKSPO"));
        lbKSPO->setGeometry(QRect(20, 150, 151, 16));
        leLenghtSectors = new QLineEdit(AddPlainDialog);
        leLenghtSectors->setObjectName(QString::fromUtf8("leLenghtSectors"));
        leLenghtSectors->setGeometry(QRect(150, 200, 70, 26));
        lbLenghtSectors = new QLabel(AddPlainDialog);
        lbLenghtSectors->setObjectName(QString::fromUtf8("lbLenghtSectors"));
        lbLenghtSectors->setGeometry(QRect(20, 210, 71, 16));
        lbWidhtSectors = new QLabel(AddPlainDialog);
        lbWidhtSectors->setObjectName(QString::fromUtf8("lbWidhtSectors"));
        lbWidhtSectors->setGeometry(QRect(20, 180, 61, 16));
        leWidhtSectors = new QLineEdit(AddPlainDialog);
        leWidhtSectors->setObjectName(QString::fromUtf8("leWidhtSectors"));
        leWidhtSectors->setGeometry(QRect(150, 170, 70, 26));

        retranslateUi(AddPlainDialog);

        QMetaObject::connectSlotsByName(AddPlainDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPlainDialog)
    {
        AddPlainDialog->setWindowTitle(QApplication::translate("AddPlainDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lbKPO->setText(QApplication::translate("AddPlainDialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\202\320\276\321\207\320\276\320\272 \320\277\320\276:", 0, QApplication::UnicodeUTF8));
        lbPosX->setText(QApplication::translate("AddPlainDialog", "X", 0, QApplication::UnicodeUTF8));
        lbLenghtPoints->setText(QApplication::translate("AddPlainDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbWidht->setText(QApplication::translate("AddPlainDialog", "\320\250\320\270\321\200\320\270\320\275\320\260 \321\201\320\265\320\272\321\202\320\276\321\200\321\203", 0, QApplication::UnicodeUTF8));
        lbPosition->setText(QApplication::translate("AddPlainDialog", "\320\237\320\276\320\267\320\270\321\206\321\226\321\217", 0, QApplication::UnicodeUTF8));
        lbLenght->setText(QApplication::translate("AddPlainDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\320\260 \321\201\320\265\320\272\321\202\320\276\321\200\321\203", 0, QApplication::UnicodeUTF8));
        lbPosY->setText(QApplication::translate("AddPlainDialog", "Y", 0, QApplication::UnicodeUTF8));
        lbAngel->setText(QApplication::translate("AddPlainDialog", "\320\232\321\203\321\202", 0, QApplication::UnicodeUTF8));
        lbPosZ->setText(QApplication::translate("AddPlainDialog", "Z", 0, QApplication::UnicodeUTF8));
        lbWidhtPoints->setText(QApplication::translate("AddPlainDialog", "\320\250\320\270\321\200\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbKSPO->setText(QApplication::translate("AddPlainDialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\201\320\265\320\272\321\202\320\276\321\200\321\226\320\262 \320\277\320\276:", 0, QApplication::UnicodeUTF8));
        lbLenghtSectors->setText(QApplication::translate("AddPlainDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbWidhtSectors->setText(QApplication::translate("AddPlainDialog", "\320\250\320\270\321\200\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddPlainDialog: public Ui_AddPlainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLAINDIALOG_H
