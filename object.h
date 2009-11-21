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
    virtual QDomElement Serialize(QDomDocument& DomDocument);
    virtual bool Deserialize(const QDomElement& DomElement);

protected:
    float x;
    float y;
    float z;
    std::vector <Vertex> points;
    std::vector <unsigned short> indexes;
};

#endif // OBJECT_H
