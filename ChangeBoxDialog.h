#ifndef CHANGEBOXDIALOG_H
#define CHANGEBOXDIALOG_H

#include <QDialog>
#include "objectmanager.h"
#include "box.h"
#include "boxcreator.h"
#include "point3d.h"

namespace Ui {
    class ChangeBoxDialog;
}

class ChangeBoxDialog : public QDialog {
    Q_OBJECT
public:
    ChangeBoxDialog(QWidget *parent = 0);
    ~ChangeBoxDialog();

protected:
    void changeEvent(QEvent *e);
    Box* m_Box;
private slots:
    void slChngBox();
    //void update(int index);

private:
    Ui::ChangeBoxDialog *ui;
    void ChngBox(float x, float y, float z, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght, float Angle);
};

#endif // CHANGEBOXDIALOG_H
