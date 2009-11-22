#include "ChangeBoxDialog.h"
#include "ui_ChangeBoxDialog.h"

ChangeBoxDialog::ChangeBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeBoxDialog)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    ui->spinBox->setMaximum(ObjectManager::GetObjectsSize());
    //ChangeBoxDialog::update(1);

   // connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(update(int)));
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(slChngBox()));
}


ChangeBoxDialog::~ChangeBoxDialog()
{
    delete ui;
}

void ChangeBoxDialog::changeEvent(QEvent *e)
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

void ChangeBoxDialog::slChngBox()
{
    ChngBox(ui->lePosX->text().toFloat(), ui->lePosY->text().toFloat(), ui->lePosZ->text().toFloat(), ui->leWidht->text().toFloat(), ui->leHeight->text().toFloat(), ui->leLenght->text().toFloat(), ui->leWidhtPoints->text().toFloat(), ui->leHeightPoints->text().toFloat(), ui->leLenghtPoints->text().toFloat(), ui->leAngle->text().toFloat());
}
void ChangeBoxDialog::ChngBox(float x, float y, float z, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght, float Angle)
{
    //ObjectManager::Remove(ui->spinBox->value());
    //Point3D Position(x, y, z);
    //ObjectManager::GetBoxAt(ui->spinBox->value())->CreateBox(Widht, Height, Lenght, VertexPerWidht, VertexPerHeight, VertexPerLenght);
    //ObjectManager::GetBoxAt(ui->spinBox->value())->Position = Point3D(x,y,z);
    //ObjectManager::GetBoxAt(ui->spinBox->value())->Angle = Angle;
    //ObjectManager::AddBox(m_Box);
    this->close();
}
/*void ChangeBoxDialog::update(int index)
{
    m_Box = new Box;
    m_Box = ObjectManager::GetBoxAt(index -1);
    ui->leAngle->setText(QString::number(m_Box->Angle));
    ui->lePosX->setText(QString::number(m_Box->Position.x));
    ui->lePosY->setText(QString::number(m_Box->Position.y));
    ui->lePosZ->setText(QString::number(m_Box->Position.z));
    ui->leWidht->setText(QString::number(m_Box->Widght));
    ui->leHeight->setText(QString::number(m_Box->Height));
    ui->leLenght->setText(QString::number(m_Box->Lenght));
    ui->leWidhtPoints->setText(QString::number(m_Box->VertexPerWidght));
    ui->leHeightPoints->setText(QString::number(m_Box->VertexPerHeight));
    ui->leLenghtPoints->setText(QString::number(m_Box->VertexPerLenght));
}*/
