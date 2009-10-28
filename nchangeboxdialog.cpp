#include "nchangeboxdialog.h"
#include "ui_nchangeboxdialog.h"

NChangeBoxDialog::NChangeBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NChangeBoxDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(slShowChangeBoxDialog()));
}

NChangeBoxDialog::~NChangeBoxDialog()
{
    delete ui;
}

void NChangeBoxDialog::changeEvent(QEvent *e)
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
void NChangeBoxDialog::slShowChangeBoxDialog()
{
    ShowChangeBoxDialog(ui->leNChngBox->text().toInt());
}
void NChangeBoxDialog::ShowChangeBoxDialog(int N)
{
    //m_Box = BoxManager::GetAt(N);
    index = N;
    ChangeBoxDialog ChDl;
    ChDl.exec();

    //ChDl.ui->lePosX.setText(QString::number( m_Box.Position.x ));
}
