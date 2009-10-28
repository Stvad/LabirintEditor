#include <QtGui/QApplication>
#include "mainwindow.h"
#include "myglwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //MyGLWidget w;
    MainWindow w;
    w.show();
    return app.exec();
}
