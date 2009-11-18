#ifndef SECTOR_H
#define SECTOR_H

#include <vector>
#include "vertex.h"
#include <qgl.h>

class Sector
{
public:
    Sector();
    Sector(const std::vector <Vertex> &points, const std::vector <unsigned short> &indexes,float Widght, float Lenght, float VertexPerWidght, float VertexPerLenght, Point3D Position);
    void SetSize(float Widght, float Lenght);
    void SetAngle(float Angle);
    Point3D GetPosition();
    void SetPosition(float x, float y, float z);
    void Show();

protected:
    int m_IndexSize;
    float fWidght, fLenght;
    float fAngle;
    float fVertexPerWidght, fVertexPerLenght;
    Vertex *m_points;
    unsigned short *m_indexes;
    Point3D mPosition;
    QColor Color;

};

#endif // SECTOR_H
