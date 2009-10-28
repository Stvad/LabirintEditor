#ifndef BOXCREATOR_H
#define BOXCREATOR_H

#include <vector>

#include "point3d.h"
#include "vertex.h"
#include "box.h"
#include <qgl.h>

class BoxCreator
{
public:
    //Box CreateBox(Point3D Position, float Widht, float Height, float VertexPerWidht, float VertexPerHeight, float AngleX, float AngleY, float AngleZ);
    static Box CreateBox(float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght);
private:

    //static float Widht;
    //static float Height;
    static float Lenght;
    static float VertexPerWidht;
    static float VertexPerHeight;
    static float x;
    static float y;
    static float z;
    static float AngleX;
    static float AngleY;
    static float AngleZ;
    static float VertexPerLength;

    //static Point3D Position;
    static std::vector <Vertex> points;
    static std::vector <unsigned short> indexes;

    static void IHorizontalPlane(Point3D Position, float Widht, float Lenght, float Height, float xn, float yn, float zn);
    static void IVerticalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    static void IBokovPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    static void IHorizontalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    static void IVerticalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);
    static void IBokovPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn);

};

#endif // BOXCREATOR_H
