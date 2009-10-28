#ifndef VERTEX_H
#define VERTEX_H

#include "point3d.h"
#include "point2d.h"
#include <QtGui>

class Vertex
{
public:
    Vertex();
    Point2D TextCord;
    Point3D Normal;
    Point3D Position;
    //QColor  Color;
};

#endif // VERTEX_H
