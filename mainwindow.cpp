#include "mainwindow.h"
#include "myglwidget.h"
#include "ui_mainwindow.h"
#include "AddBoxDialog.h"
#include "DeliteBoxDialog.h"
#include "ChangeBoxDialog.h"
#include "BoxBrokingMatchesDialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);

    connect(m_ui->action_5, SIGNAL(triggered()), this, SLOT(close()));
    connect(m_ui->pbAddBox, SIGNAL(clicked()), this, SLOT(ShowAddBoxDlg()));
    connect(m_ui->pbChangeBox, SIGNAL(clicked()), this, SLOT(ShowChangeBoxDlg()));
    connect(m_ui->pbDellNBox, SIGNAL(clicked()), this, SLOT(ShowDellNBoxDlg()));
    connect(m_ui->pbChangeSettings, SIGNAL(clicked()), this, SLOT(ShowChangeSettingsDlg()));
    connect(m_ui->pbDellLustBox, SIGNAL(clicked()), this, SLOT(DeLastBox()));
    connect(m_ui->pbDellAllBoxes, SIGNAL(clicked()), this, SLOT(DelAllBoxes()));
    connect(m_ui->rbPX, SIGNAL(clicked()), this, SLOT(setXP()));
    connect(m_ui->rbPY, SIGNAL(clicked()), this, SLOT(setYP()));
    connect(m_ui->rbPZ, SIGNAL(clicked()), this, SLOT(setZP()));
    connect(m_ui->rbPXY, SIGNAL(clicked()), this, SLOT(setXYP()));
    connect(m_ui->rbPYZ, SIGNAL(clicked()), this, SLOT(setYZP()));
    connect(m_ui->rbPXZ, SIGNAL(clicked()), this, SLOT(setXZP()));
    connect(m_ui->action_2, SIGNAL(triggered()), this, SLOT(SaveMap()));
    connect(m_ui->action_3, SIGNAL(triggered()), this, SLOT(LoadMap()));

    //connect(m_ui->glWidget, SIGNAL())
    m_ui->glWidget->setFocusPolicy(Qt::ClickFocus);
    m_ui->rbPX->click();
    //this->focusInEvent(
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void MainWindow::ShowAddBoxDlg()
{
    AddBoxDialog AddDlg;
    AddDlg.exec();
}
void MainWindow::ShowChangeBoxDlg()
{
    ChangeBoxDialog ChDlg;
    ChDlg.exec();
    m_ui->glWidget->updateGL();

}
void MainWindow::ShowDellNBoxDlg()
{
    DeliteBoxDialog DelDlg;
    DelDlg.exec();
}
void MainWindow::ShowChangeSettingsDlg()
{
    BoxBrokingMatchesDialog BBDlg;
    BBDlg.exec();
}
void MainWindow::DeLastBox()
{
    BoxManager::RemoveLast();
}
void MainWindow::DelAllBoxes()
{
    BoxManager::ClearAll();
}

void MainWindow::setXP()
{
    std::string Turn = "X";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::setYP()
{
    std::string Turn = "Y";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::setZP()
{
    std::string Turn = "Z";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::setXYP()
{
    std::string Turn = "XY";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::setYZP()
{
    std::string Turn = "YZ";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::setXZP()
{
    std::string Turn = "XZ";
    m_ui->glWidget->setTurn(Turn);
}

void MainWindow::SaveMap()
{
    QString *s = new QString();
    XmlLoader::SaveFile(QFileDialog::getSaveFileName(this, tr("Выберите путь для сохранения пакета"), QDir::currentPath() , QString(), s, 0));
}

void MainWindow::LoadMap()
{
    QString *s = new QString();
    XmlLoader::LoadFile(QFileDialog::getOpenFileName(this, tr("Выберите путь для сохранения пакета"), QDir::currentPath() , QString(), s, 0));
}
