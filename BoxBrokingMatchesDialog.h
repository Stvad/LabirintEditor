#ifndef BOXBROKINGMATCHESDIALOG_H
#define BOXBROKINGMATCHESDIALOG_H

#include <QDialog>

namespace Ui {
    class BoxBrokingMatchesDialog;
}

class BoxBrokingMatchesDialog : public QDialog {
    Q_OBJECT
public:
    BoxBrokingMatchesDialog(QWidget *parent = 0);
    ~BoxBrokingMatchesDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::BoxBrokingMatchesDialog *ui;
};

#endif // BOXBROKINGMATCHESDIALOG_H
