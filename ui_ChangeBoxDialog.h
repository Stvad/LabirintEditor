/********************************************************************************
** Form generated from reading ui file 'ChangeBoxDialog.ui'
**
** Created: Mon Oct 26 17:14:06 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CHANGEBOXDIALOG_H
#define UI_CHANGEBOXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ChangeBoxDialog
{
public:
    QSpinBox *spinBox;
    QLabel *lbNBox;
    QLabel *lbHeight;
    QLineEdit *lePosY;
    QDialogButtonBox *buttonBox;
    QLabel *lbHeightPoints;
    QLabel *lbKPO;
    QLineEdit *leAngle;
    QLabel *lbWidhtPoints;
    QLineEdit *leLenght;
    QLineEdit *leHeight;
    QLabel *lbPosition;
    QLabel *lbWidht;
    QLabel *lbPosY;
    QLineEdit *lePosZ;
    QLineEdit *leHeightPoints;
    QLabel *lbLenght;
    QLineEdit *leLenghtPoints;
    QLineEdit *leWidht;
    QLabel *lbPosX;
    QLineEdit *lePosX;
    QLabel *lbLenghtPoints;
    QLabel *lbAngel;
    QLineEdit *leWidhtPoints;
    QLabel *lbPosZ;

    void setupUi(QDialog *ChangeBoxDialog)
    {
        if (ChangeBoxDialog->objectName().isEmpty())
            ChangeBoxDialog->setObjectName(QString::fromUtf8("ChangeBoxDialog"));
        ChangeBoxDialog->resize(209, 355);
        spinBox = new QSpinBox(ChangeBoxDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 5, 57, 26));
        lbNBox = new QLabel(ChangeBoxDialog);
        lbNBox->setObjectName(QString::fromUtf8("lbNBox"));
        lbNBox->setGeometry(QRect(20, 10, 56, 16));
        lbHeight = new QLabel(ChangeBoxDialog);
        lbHeight->setObjectName(QString::fromUtf8("lbHeight"));
        lbHeight->setGeometry(QRect(20, 145, 56, 31));
        lePosY = new QLineEdit(ChangeBoxDialog);
        lePosY->setObjectName(QString::fromUtf8("lePosY"));
        lePosY->setGeometry(QRect(80, 58, 31, 26));
        buttonBox = new QDialogButtonBox(ChangeBoxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 320, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lbHeightPoints = new QLabel(ChangeBoxDialog);
        lbHeightPoints->setObjectName(QString::fromUtf8("lbHeightPoints"));
        lbHeightPoints->setGeometry(QRect(20, 270, 56, 16));
        lbKPO = new QLabel(ChangeBoxDialog);
        lbKPO->setObjectName(QString::fromUtf8("lbKPO"));
        lbKPO->setGeometry(QRect(20, 210, 131, 16));
        leAngle = new QLineEdit(ChangeBoxDialog);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        leAngle->setGeometry(QRect(120, 90, 70, 26));
        lbWidhtPoints = new QLabel(ChangeBoxDialog);
        lbWidhtPoints->setObjectName(QString::fromUtf8("lbWidhtPoints"));
        lbWidhtPoints->setGeometry(QRect(20, 240, 61, 16));
        leLenght = new QLineEdit(ChangeBoxDialog);
        leLenght->setObjectName(QString::fromUtf8("leLenght"));
        leLenght->setGeometry(QRect(120, 180, 70, 26));
        leHeight = new QLineEdit(ChangeBoxDialog);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));
        leHeight->setGeometry(QRect(120, 150, 70, 26));
        lbPosition = new QLabel(ChangeBoxDialog);
        lbPosition->setObjectName(QString::fromUtf8("lbPosition"));
        lbPosition->setGeometry(QRect(20, 40, 56, 16));
        lbWidht = new QLabel(ChangeBoxDialog);
        lbWidht->setObjectName(QString::fromUtf8("lbWidht"));
        lbWidht->setGeometry(QRect(20, 115, 61, 31));
        lbPosY = new QLabel(ChangeBoxDialog);
        lbPosY->setObjectName(QString::fromUtf8("lbPosY"));
        lbPosY->setGeometry(QRect(70, 60, 21, 21));
        lePosZ = new QLineEdit(ChangeBoxDialog);
        lePosZ->setObjectName(QString::fromUtf8("lePosZ"));
        lePosZ->setGeometry(QRect(130, 58, 31, 26));
        leHeightPoints = new QLineEdit(ChangeBoxDialog);
        leHeightPoints->setObjectName(QString::fromUtf8("leHeightPoints"));
        leHeightPoints->setGeometry(QRect(120, 260, 70, 26));
        lbLenght = new QLabel(ChangeBoxDialog);
        lbLenght->setObjectName(QString::fromUtf8("lbLenght"));
        lbLenght->setGeometry(QRect(20, 175, 71, 31));
        leLenghtPoints = new QLineEdit(ChangeBoxDialog);
        leLenghtPoints->setObjectName(QString::fromUtf8("leLenghtPoints"));
        leLenghtPoints->setGeometry(QRect(120, 290, 70, 26));
        leWidht = new QLineEdit(ChangeBoxDialog);
        leWidht->setObjectName(QString::fromUtf8("leWidht"));
        leWidht->setGeometry(QRect(120, 120, 70, 26));
        lbPosX = new QLabel(ChangeBoxDialog);
        lbPosX->setObjectName(QString::fromUtf8("lbPosX"));
        lbPosX->setGeometry(QRect(20, 60, 21, 21));
        lbPosX->setTextFormat(Qt::AutoText);
        lePosX = new QLineEdit(ChangeBoxDialog);
        lePosX->setObjectName(QString::fromUtf8("lePosX"));
        lePosX->setGeometry(QRect(30, 58, 31, 26));
        lbLenghtPoints = new QLabel(ChangeBoxDialog);
        lbLenghtPoints->setObjectName(QString::fromUtf8("lbLenghtPoints"));
        lbLenghtPoints->setGeometry(QRect(20, 300, 71, 16));
        lbAngel = new QLabel(ChangeBoxDialog);
        lbAngel->setObjectName(QString::fromUtf8("lbAngel"));
        lbAngel->setGeometry(QRect(20, 85, 61, 31));
        leWidhtPoints = new QLineEdit(ChangeBoxDialog);
        leWidhtPoints->setObjectName(QString::fromUtf8("leWidhtPoints"));
        leWidhtPoints->setGeometry(QRect(120, 230, 70, 26));
        lbPosZ = new QLabel(ChangeBoxDialog);
        lbPosZ->setObjectName(QString::fromUtf8("lbPosZ"));
        lbPosZ->setGeometry(QRect(120, 60, 21, 21));

        retranslateUi(ChangeBoxDialog);

        QMetaObject::connectSlotsByName(ChangeBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeBoxDialog)
    {
        ChangeBoxDialog->setWindowTitle(QApplication::translate("ChangeBoxDialog", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\261\320\276\320\272\321\201", 0, QApplication::UnicodeUTF8));
        lbNBox->setText(QApplication::translate("ChangeBoxDialog", "\320\221\320\276\320\272\321\201 \342\204\226", 0, QApplication::UnicodeUTF8));
        lbHeight->setText(QApplication::translate("ChangeBoxDialog", "\320\222\320\270\321\201\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        lbHeightPoints->setText(QApplication::translate("ChangeBoxDialog", "\320\222\320\270\321\201\320\276\321\202\321\226", 0, QApplication::UnicodeUTF8));
        lbKPO->setText(QApplication::translate("ChangeBoxDialog", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\202\320\276\321\207\320\276\320\272 \320\277\320\276:", 0, QApplication::UnicodeUTF8));
        lbWidhtPoints->setText(QApplication::translate("ChangeBoxDialog", "\320\250\320\270\321\200\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbPosition->setText(QApplication::translate("ChangeBoxDialog", "\320\237\320\276\320\267\320\270\321\206\321\226\321\217", 0, QApplication::UnicodeUTF8));
        lbWidht->setText(QApplication::translate("ChangeBoxDialog", "\320\250\320\270\321\200\320\270\320\275\320\260", 0, QApplication::UnicodeUTF8));
        lbPosY->setText(QApplication::translate("ChangeBoxDialog", "Y", 0, QApplication::UnicodeUTF8));
        lbLenght->setText(QApplication::translate("ChangeBoxDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\320\260", 0, QApplication::UnicodeUTF8));
        lbPosX->setText(QApplication::translate("ChangeBoxDialog", "X", 0, QApplication::UnicodeUTF8));
        lbLenghtPoints->setText(QApplication::translate("ChangeBoxDialog", "\320\224\320\276\320\262\320\266\320\270\320\275\321\226", 0, QApplication::UnicodeUTF8));
        lbAngel->setText(QApplication::translate("ChangeBoxDialog", "\320\232\321\203\321\202", 0, QApplication::UnicodeUTF8));
        lbPosZ->setText(QApplication::translate("ChangeBoxDialog", "Z", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChangeBoxDialog);
    } // retranslateUi

};

namespace Ui {
    class ChangeBoxDialog: public Ui_ChangeBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEBOXDIALOG_H
