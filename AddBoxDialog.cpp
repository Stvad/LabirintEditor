#include "AddBoxDialog.h"
#include "ui_AddBoxDialog.h"

AddBoxDialog::AddBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBoxDialog)
{
    ui->setupUi(this);
    
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(slAddBox()));
}

AddBoxDialog::~AddBoxDialog()
{
    delete ui;
}

void AddBoxDialog::changeEvent(QEvent *e)
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
void AddBoxDialog::slAddBox()
{
    AddBox(ui->lePosX->text().toFloat(), ui->lePosY->text().toFloat(), ui->lePosZ->text().toFloat(), ui->leWidht->text().toFloat(), ui->leHeight->text().toFloat(), ui->leLenght->text().toFloat(), ui->leWidhtPoints->text().toFloat(), ui->leHeightPoints->text().toFloat(), ui->leLenghtPoints->text().toFloat(), ui->leAngle->text().toFloat());
}
void AddBoxDialog::AddBox(float x, float y, float z, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght, float Angle)
{
    //Point3D Position(x, y, z);
    m_Box = new Box;
    m_Box->CreateBox(Widht, Height, Lenght, VertexPerWidht, VertexPerHeight, VertexPerLenght);
    m_Box->Position = Point3D(x, y, z);
    m_Box->Angle = Angle;
    ObjectManager::AddObject(m_Box);
}
