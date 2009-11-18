#include "myglwidget.h"
#include <iostream>
#include <math.h>

//GLfloat x=0,y=0,BasePoint=0,VertexPerWidht=10,VertexPerHeight=10;
//GLfloat Widht=70, Height=70;


void DrawRectTriangle(Point3D BasePoint, GLsizei nWidht, GLsizei nHeight, GLfloat VertexPerWidht, GLfloat VertexPerHeight);

MyGLWidget::MyGLWidget(QWidget *parent)
        : QGLWidget(parent)
{
    //xRotate = 0;
    //yRotate = 0;
    //BasePoint.x = 0;
    //BasePoint.y = 0;
    //BasePoint.z = 0;
    //VertexPerWidht = 10;
    //VertexPerHeight = 10;
    //Widht = 70;
    //Height = 70;

    Point3D Position(0, 0, 0);

    m_Box = Box::CreateBox(10, 10, 5, 5, 5, 5);
    m_Box.Color = QColor(128, 128, 128);
    m_Box.Position = Position;
    ObjectManager::AddBox(m_Box);
    //mPlain = Plain::CreatePlain(true, 1, 2, 1, 1, 3, 2);
    mPlain.SetPosition(5, 5, 5);
    ObjectManager::AddPlain(mPlain);

    ControlIsPressed = false;
    //m_Box = m_Box.CreateBox(Position, 10, 10, 5, 5, 5, 5);
   // ObjectManager::AddBox(Position, 10, 10, 5, 5, 5, 5);
}

void MyGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();

    glPushMatrix();
    glTranslatef(-2.0, 0.0, -1.0);
    glRotatef(30, 0, 1.0, 0.0);
    //glRotatef(yRotate, 0.0, 1.0, 0.0);
    glColor3f(1.0f, 0.0f, 0.0f);


    //glVertexPointer(3, GL_FLOAT, 0, &m_Box.points.front());

   // glVertexPointer(3, GL_FLOAT, 0, m_Box.points.front());
    //glDrawElements(GL_TRIANGLES, 3, GLfloat, m_Box.indexes);

   // glInterleavedArrays(GL_T2F_N3F_V3F, 0, m_Box.m_points);
   // glDrawElements(GL_TRIANGLES, m_Box.m_IndexSize, GL_UNSIGNED_SHORT, m_Box.m_indexes);
    ObjectManager::Show();

    /*
    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
       glVertex3f(-1, 0, 0);
       glVertex3f(1, 0, 0);
       glVertex3f(0, 2, 0);
     glEnd();
    //*/

    //glColor3f(0.0, 1.0, 0.0);
    //DrawRectTriangle(BasePoint, Widht, Height, VertexPerWidht, VertexPerHeight);
    glPopMatrix();
}

void MyGLWidget::initializeGL()
{
    qglClearColor(Qt::black);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_FLAT);
    glFrontFace(GL_CCW);
    glPolygonMode(GL_FRONT, GL_LINES);
    glPolygonMode(GL_BACK, GL_LINES);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
}
void MyGLWidget::resizeGL(GLsizei nWidht, GLsizei nHeight)
{
 //GLdouble nRange = 100.0;
    if (nHeight == 0)
        nHeight = 1;

    glViewport(0,0,nWidht,nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, nWidht/(float)nHeight, 0.1f, 100.0f);
    gluLookAt(0, 3, 25, 0, 3, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}


void MyGLWidget::mouseDoubleClickEvent(QMouseEvent *pe)
{

    MyGLWidget::ProcessSelection(pe->pos().x(), pe->pos().y());
    updateGL();
}

/*
void MyGLWidget::mousePressEvent(QMouseEvent *pe)
{
    ptPosition = pe->pos();
}
//*/

void MyGLWidget::mouseReleaseEvent(QMouseEvent *re)
{
    
}

/*
void MyGLWidget::mouseMoveEvent(QMouseEvent *pe)
{
    xRotate += 180 * (GLfloat)(pe->y() - ptPosition.y()) / height();
    yRotate += 180 * (GLfloat)(pe->x() - ptPosition.x()) / width();
    updateGL();

    ptPosition = pe->pos();
}
//*/

void MyGLWidget::ProcessSelection(int X, int Y)
{
    float fAspect;
    int Hits = 0;

    glSelectBuffer(64, SelectionBuffer);
    glGetIntegerv(GL_VIEWPORT, Viewport);
    fAspect = (float)Viewport[2]/(float)Viewport[3];

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();

    glRenderMode(GL_SELECT);

    glLoadIdentity();
    gluPickMatrix(X, Viewport[3] - Y, 2, 2, Viewport);
    gluPerspective(45, fAspect, 0.1f, 100);
    gluLookAt(0, 3, 25, 0, 3, 0,0, 1, 0);

    paintGL();

    Hits = glRenderMode(GL_RENDER);
    if (Hits >= 1)
                //m_SelectedName = SelectionBuffer[3];
    {
        ObjectManager::SelectObject(SelectionBuffer[3]);
        //QMessageBox::aboutQt(0);
    }
    else
                ObjectManager::UnselectObject();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

///*
void MyGLWidget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
  {
    case Qt::Key_Control:
        ControlIsPressed = true;
        //QApplication::aboutQt();
        break;
   /* case Qt::Key_Left:
         if (ControlIsPressed)
            ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x -= 1;
            updateGL();
    case Qt::Key_Right:
         if (ControlIsPressed)
            ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x += 1;
            updateGL();*/
    case Qt::Key_Up:
         if (ControlIsPressed == true)
            {
            if (cTurn == "X")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x += 1;
                updateGL();
                }
                else
            if (cTurn == "Y")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y += 1;
                updateGL();
                }
                else
            if (cTurn == "Z")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z += 1;
                updateGL();
                }
                else
            if (cTurn == "XY")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x += 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y += 1;
                updateGL();
                }
                else
            if (cTurn == "YZ")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y += 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z += 1;
                updateGL();
                }
                else
            if (cTurn == "XZ")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x += 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z += 1;
                updateGL();
                }

            }
         break;
    case Qt::Key_Down:
         if (ControlIsPressed == true)
            {
             if (cTurn == "X")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x -= 1;
                updateGL();
                }
                else
            if (cTurn == "Y")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y -= 1;
                updateGL();
                }
                else
            if (cTurn == "Z")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z -= 1;
                updateGL();
                }
                else
            if (cTurn == "XY")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x -= 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y -= 1;
                updateGL();
                }
                else
            if (cTurn == "YZ")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.y -= 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z -= 1;
                updateGL();
                }
                else
            if (cTurn == "XZ")
                {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.x -= 1;
                ObjectManager::GetBoxAt(SelectionBuffer[3]).Position.z -= 1;
                updateGL();
                }
            }
         break;
    case Qt::Key_Left:
            if (ControlIsPressed == true)
            {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).AngleY -= 1;
                updateGL();
            }
         break;
    case Qt::Key_Right:
            if (ControlIsPressed == true)
            {
                ObjectManager::GetBoxAt(SelectionBuffer[3]).AngleY += 1;
                updateGL();
            }
         break;
    default:
      QWidget::keyPressEvent(event);
  }
}
//*/

void MyGLWidget::keyReleaseEvent(QKeyEvent *revent)
{
switch (revent->key())
  {
    case Qt::Key_Control:
        ControlIsPressed = false;
        //QApplication::aboutQt();
        break;
    default:
      QWidget::keyReleaseEvent(revent);
  }
}

void MyGLWidget::setShift(char tShift)
{
    cShift = tShift;
}

void MyGLWidget::setTurn(std::string tTurn)
{
    cTurn = tTurn;
}
/*
void MyGLWidget::DrawRectTriangle(Point3D BasePoint, GLsizei Widht, GLsizei Height, GLfloat VertexPerWidht, GLfloat VertexPerHeight)
{
    float xn,yn;
    xn = Widht / VertexPerWidht;
    yn = Height / VertexPerHeight;
    for(y = BasePoint.y; y < Height; y+=yn)
        for(x = BasePoint.x; x < Widht; x+=xn)
        {
            points.push_back(x);
            points.push_back(y);
            points.push_back(BasePoint.z);
            points.push_back(x);
            points.push_back(y + yn);
            points.push_back(BasePoint.z);
            points.push_back(x + xn);
            points.push_back(y);
            points.push_back(BasePoint.z);
            points.push_back(x);
            points.push_back(y + yn);
            points.push_back(BasePoint.z);
            points.push_back(x + xn);
            points.push_back(y + yn);
            points.push_back(BasePoint.z);
            points.push_back(x + xn);
            points.push_back(y);
            points.push_back(BasePoint.z);

            //glBegin(GL_TRIANGLES);
            //glColor3f(1.0, 0.0, 0.0);
            //glVertex3f(x, y, 0.0);
            //glVertex3f(x, y + yn, 0.0);
            //glVertex3f(x + xn, y, 0.0);

            //glColor3f(0.0, 0.0, 1.0);

            //glVertex3f(x, y + yn, 0.0);
            //glVertex3f(x + xn, y + yn, 0.0);
            //glVertex3f(x + xn, y, 0.0);

        }
}
//*/
