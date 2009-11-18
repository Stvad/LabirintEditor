#ifndef ADDPLAINDIALOG_H
#define ADDPLAINDIALOG_H

#include <QtGui/QDialog>

namespace Ui {
    class AddPlainDialog;
}

class AddPlainDialog : public QDialog {
    Q_OBJECT
public:
    AddPlainDialog(QWidget *parent = 0);
    ~AddPlainDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::AddPlainDialog *m_ui;
};

#endif // ADDPLAINDIALOG_H
