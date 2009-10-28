#include "DeliteBoxDialog.h"
#include "ui_DeliteBoxDialog.h"

DeliteBoxDialog::DeliteBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeliteBoxDialog)
{
    ui->setupUi(this);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(slDellBox()));
}

DeliteBoxDialog::~DeliteBoxDialog()
{
    delete ui;
}

void DeliteBoxDialog::changeEvent(QEvent *e)
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
void DeliteBoxDialog::slDellBox()
{
    DellBox(ui->leNDelBox->text().toInt());
}
void DeliteBoxDialog::DellBox(int N)
{
    BoxManager::Remove(N);
}
