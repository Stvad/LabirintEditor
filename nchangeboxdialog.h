#ifndef NCHANGEBOXDIALOG_H
#define NCHANGEBOXDIALOG_H

#include <QDialog>
#include "ChangeBoxDialog.h"
#include "boxmanager.h"
#include "box.h"

namespace Ui {
    class NChangeBoxDialog;
}

class NChangeBoxDialog : public QDialog {
    Q_OBJECT
public:
    NChangeBoxDialog(QWidget *parent = 0);
    ~NChangeBoxDialog();

protected:
    void changeEvent(QEvent *e);
    int index;

private slots:
    void slShowChangeBoxDialog();

private:
    Ui::NChangeBoxDialog *ui;
    void ShowChangeBoxDialog(int N);
    Box m_Box;
};

#endif // NCHANGEBOXDIALOG_H
