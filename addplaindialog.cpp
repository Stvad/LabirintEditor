#include "addplaindialog.h"
#include "ui_addplaindialog.h"

AddPlainDialog::AddPlainDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::AddPlainDialog)
{
    m_ui->setupUi(this);
}

AddPlainDialog::~AddPlainDialog()
{
    delete m_ui;
}

void AddPlainDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
