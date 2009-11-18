#ifndef ADDBOXDIALOG_H
#define ADDBOXDIALOG_H

#include <QDialog>
#include "objectmanager.h"
#include "box.h"
#include "boxcreator.h"
#include "point3d.h"

namespace Ui {
    class AddBoxDialog;
}

class AddBoxDialog : public QDialog {
    Q_OBJECT
public:
    AddBoxDialog(QWidget *parent = 0);
    ~AddBoxDialog();

protected:
    void changeEvent(QEvent *e);
    Box m_Box;
private slots:
    void slAddBox();
private:
    Ui::AddBoxDialog *ui;
    void AddBox(float x, float y, float z, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght, float AngleY);
};

#endif // ADDBOXDIALOG_H
