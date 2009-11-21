#ifndef BOX_H
#define BOX_H

#include <vector>
#include "point3d.h"
#include "vertex.h"
#include <qgl.h>
#include <QtXml>
#include "object.h"

class Box : public Object
{
public:
    Box();
    Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Angle, Point3D Position);
    Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Widght, float Height, float Lenght, float VertexPerWidght, float VertexPerHeight, float VertexPerLenght);
    void CreateBox(float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght);
    //void Show();

    //Vertex *m_points;
    //unsigned short *m_indexes;
    //int m_IndexSize;
    float Widght, Height, Lenght;
    float VertexPerWidght, VertexPerHeight, VertexPerLenght;
    QColor Color;

    Point3D Position;

    float Angle;
    QDomElement Serialize(QDomDocument& DomDocument);
    bool Deserialize(const QDomElement& DomElement);
private:
    //static float x;
   // static float y;
    //static float z;
   // static std::vector <Vertex> points;
    //static std::vector <unsigned short> indexes;
    void IHorizontalPlane(Point3D Position, float Widht, float Lenght, float Height, float xn, float yn, float zn);
    void IVerticalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    void IBokovPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    void IHorizontalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    void IVerticalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    void IBokovPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
};

#endif // BOX_H
