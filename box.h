#ifndef BOX_H
#define BOX_H

#include <vector>
#include "point3d.h"
#include "vertex.h"
#include <qgl.h>

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
    float sWidght, sHeight, sLenght;
    float sVertexPerWidght, sVertexPerHeight, sVertexPerLenght;
    QColor Color;

    Point3D Position;

    float AngleX, AngleY, AngleZ;
};

#endif // BOX_H
