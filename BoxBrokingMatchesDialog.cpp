#include "BoxBrokingMatchesDialog.h"
#include "ui_BoxBrokingMatchesDialog.h"

BoxBrokingMatchesDialog::BoxBrokingMatchesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BoxBrokingMatchesDialog)
{
    ui->setupUi(this);
}

BoxBrokingMatchesDialog::~BoxBrokingMatchesDialog()
{
    delete ui;
}

void BoxBrokingMatchesDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
