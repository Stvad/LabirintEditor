#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "myglwidget.h"
#include <string.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    Q_DISABLE_COPY(MainWindow)
public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::MainWindow *m_ui;
public slots:
    void ShowAddBoxDlg();
    void ShowChangeBoxDlg();
    void ShowDellNBoxDlg();
    void ShowChangeSettingsDlg();
    void DeLastBox();
    void DelAllBoxes();
    void setXP();
    void setYP();
    void setZP();
    void setXYP();
    void setYZP();
    void setXZP();
};

#endif // MAINWINDOW_H
