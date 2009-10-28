#ifndef DELITEBOXDIALOG_H
#define DELITEBOXDIALOG_H

#include <QDialog>
#include "boxmanager.h"

namespace Ui {
    class DeliteBoxDialog;
}

class DeliteBoxDialog : public QDialog {
    Q_OBJECT
public:
    DeliteBoxDialog(QWidget *parent = 0);
    ~DeliteBoxDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DeliteBoxDialog *ui;
    void DellBox(int N);
private slots:
    void slDellBox();
};

#endif // DELITEBOXDIALOG_H
