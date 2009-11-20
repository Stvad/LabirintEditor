#ifndef OBJECT_H
#define OBJECT_H

#include "point3d.h"
#include "vertex.h"
#include <qgl.h>
#include <QtXml>

class Object
{
public:
    Object();

    Vertex *m_points;
    unsigned short *m_indexes;
    int m_IndexSize;
    Point3D Position;
    float Angle;
    QColor Color;

    void Show();
    virtual QDomElement Serialize() = 0;
    virtual bool Deserialize() = 0;

private:
    static float x;
    static float y;
    static float z;
    static std::vector <Vertex> points;
    static std::vector <unsigned short> indexes;
};

#endif // OBJECT_H
