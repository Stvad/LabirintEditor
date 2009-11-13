#ifndef BOX_H
#define BOX_H

#include <vector>
#include "point3d.h"
#include "vertex.h"
#include <qgl.h>
#include <QtXml>

class Box
{
public:
    Box();
    Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float AngleX, float AngleY, float AngleZ, Point3D Position);
    Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Widght, float Height, float Lenght, float VertexPerWidght, float VertexPerHeight, float VertexPerLenght);

    void Show();

    Vertex *m_points;
    unsigned short *m_indexes;
    int m_IndexSize;
    float Widght, Height, Lenght;
    float VertexPerWidght, VertexPerHeight, VertexPerLenght;
    QColor Color;

    Point3D Position;

    float AngleX, AngleY, AngleZ;
    QDomElement Serialize(QDomDocument& DomDocument);
    bool Deserialize(const QDomElement& DomElement);
};

#endif // BOX_H
