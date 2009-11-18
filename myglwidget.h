#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <qgl.h>
#include <QGLWidget>
#include "point3d.h"
#include <QMouseEvent>
#include <vector>
#include "boxcreator.h"
#include "box.h"
#include "objectmanager.h"
#include <QString>
#include <string.h>

class MyGLWidget : public QGLWidget
{
    Q_OBJECT

public:
    MyGLWidget(QWidget *);
    void DrawRectTriangle(Point3D BasePoint, GLsizei Widht, GLsizei Height, GLfloat VertexPerWidht, GLfloat VertexPerHeight);
    void setShift(char tShift);
    void setTurn(std::string tTurn);

protected:
    virtual void paintGL();
    virtual void initializeGL();
    virtual void resizeGL(int nWidht, int nHeight);
    void ProcessSelection(int X, int Y);
    virtual void mouseDoubleClickEvent(QMouseEvent *pe);
    virtual void mouseReleaseEvent(QMouseEvent *re);
    //virtual void mouseMoveEvent(QMouseEvent *pe);
    //virtual void mousePressEvent(QMouseEvent *pe);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *revent);
    bool ControlIsPressed;
    int Viewport[4];
    unsigned int SelectionBuffer[64];
    int m_SelectedName;
    char cShift;
    std::string cTurn;

private :
    //GLfloat xRotate, yRotate;
    //QPoint ptPosition;
    GLfloat Widht, Height, VertexPerWidht, VertexPerHeight, x, y;
    //Point3D BasePoint;
    //std::vector <float> points;

    QPointF ptPosition;
    float xRotate;
    float yRotate;

    BoxCreator m_BoxCreator;
    Box m_Box;
    Plain mPlain;



};

#endif // MYGLWIDGET_H
