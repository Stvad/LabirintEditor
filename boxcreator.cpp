#include "boxcreator.h"

float BoxCreator::x = 0;
float BoxCreator::y = 0;
float BoxCreator::z = 0;
std::vector <Vertex> BoxCreator::points;
std::vector <unsigned short> BoxCreator::indexes;

//Box BoxCreator::CreateBox(Point3D Position, float Widht, float Height, float VertexPerWidht, float VertexPerHeight, float AngleX, float AngleY, float AngleZ)

Box BoxCreator::CreateBox(float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght)
{
    points.clear();
    indexes.clear();
    //this->Position = Position;
    float xn, yn, zn;
    //this->VertexPerWidht = VertexPerWidht;
    //this->VertexPerHeight = VertexPerHeight;
    //this->VertexPerLength = VertexPerLength;
    xn = Widht / VertexPerWidht;
    yn = Height / VertexPerHeight;
    zn = Lenght / VertexPerLenght;
    Point3D rPosition(0, 0, 0);

    IVerticalPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);


   IHorizontalPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.z +=Lenght;

   IVerticalPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);
///*
   rPosition.y +=Height;

    rPosition.z -=Lenght;

   IHorizontalPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.y -=Height;

   IBokovPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.x +=Widht;

   IBokovPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);
   //int a=points.size(),b=indexes.size();
//*/
   return Box(points, indexes, Widht, Height, Lenght, VertexPerWidht, VertexPerHeight, VertexPerLenght);
}

void BoxCreator::IVerticalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
   // Point3D Temp;
    Vertex Temp;
    Temp.Position.z = Position.z;
    for(y = Position.y; y < Height; y+=yn)
        for(x = Position.x; x < Widht; x+=xn)
        {
        int base = points.size();
        Temp.Position.x = x;
        Temp.Position.y = y;
            points.push_back(Temp);
            indexes.push_back(0 + base);

        Temp.Position.x += xn;
        Temp.Position.y += yn;
            points.push_back(Temp);
            indexes.push_back(1 + base);

        Temp.Position.x = x;
            points.push_back(Temp);
            indexes.push_back(2 + base);

        Temp.Position.y = y;
//            points.push_back(Temp);
              indexes.push_back(0 + base);

        Temp.Position.x += xn;
            points.push_back(Temp);
            indexes.push_back(3 + base);

        Temp.Position.y += yn;
//            points.push_back(Temp);
        indexes.push_back(1 + base);


        }
}


void BoxCreator::IHorizontalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
    //Point3D Temp;
    Vertex Temp;

    Temp.Position.x = Position.x;
    Temp.Position.y = Position.y;
    Temp.Position.z = Position.z;
    int base = points.size();
    points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.x += Widht;
    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(1 + base);

    Temp.Position.x = Position.x;
    points.push_back(Temp);
    indexes.push_back(2 + base);

    Temp.Position.x = Position.x;
    Temp.Position.y = Position.y;
    Temp.Position.z = Position.z;
    //points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.x += Widht;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.z += Lenght;
    //points.push_back(Temp);
    indexes.push_back(1 + base);


    /*
    for(z = Position.z + Lenght; z < Lenght; z+=zn)
        for(x = Position.x; x < Widht; x+=xn)
        {
        Temp.x = Position.x;
        Temp.y = Position.y;
        Temp.z = Position.z;

            points.push_back(Temp);

        Temp.x += xn;
        Temp.z += zn;
            points.push_back(Temp);

        Temp.x = x;
            points.push_back(Temp);

        Temp.z = z;
            points.push_back(Temp);

        Temp.x += xn;
            points.push_back(Temp);

         Temp.z += zn;
            points.push_back(Temp);


        }
    //*/
}

void BoxCreator::IBokovPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
    //Point3D Temp;
    Vertex Temp;
    Temp.Position.x = Position.x;
    Temp.Position.y = Position.y;
    Temp.Position.z = Position.z;
    int base = points.size();
    points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.y += Height;
    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(1 + base);

    Temp.Position.z -= Lenght;
    points.push_back(Temp);
    indexes.push_back(2 + base);

    Temp.Position.y -= Height;
    //points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.y += Height;
    //points.push_back(Temp);
    indexes.push_back(1 + base);

    /*for(int y=0; y < Height; y++)
        for(int z=0; z < Lenght; z++)
       {
        Temp.y = y * yn;
        Temp.z = z * zn;
        Temp.x = Position.x;
            points.push_back(Temp);

        Temp.y = (y + 1) * yn;
        Temp.z = (z + 1) * zn;
            points.push_back(Temp);

        Temp.z = z * zn;
            points.push_back(Temp);

        Temp.y = y * yn;
            points.push_back(Temp);

        Temp.z = (z + 1) * zn;
            points.push_back(Temp);

        Temp.y = (y + 1) * yn;
            points.push_back(Temp);
       }*/

    /*for(y = Position.y; y < Height; y+=yn)
        for(z = Position.z; z < Lenght; z+=zn)
        {

        Temp.y = y;
        Temp.z = z;
            points.push_back(Temp);

        Temp.y += yn;
        Temp.z += zn;
            points.push_back(Temp);

        Temp.z = z;
            points.push_back(Temp);

        Temp.y = y;
            points.push_back(Temp);

        Temp.z += zn;
            points.push_back(Temp);

        Temp.y += yn;
            points.push_back(Temp);
        }*/
}

void BoxCreator::IVerticalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
    //Point3D Temp;
    Vertex Temp;

    Temp.Position.z = Position.z;
    
    for(y = Position.y; y < Height; y+=yn)
        for(x = Position.x; x < Widht; x+=xn)
        {
        int base = points.size();
        Temp.Position.x = x;
        //Temp.Position.z = Position.z;
        Temp.Position.y = y;
            points.push_back(Temp);
            indexes.push_back(0 + base);

        Temp.Position.y += yn;
            points.push_back(Temp);
            indexes.push_back(1 + base);

        Temp.Position.x += xn;
            points.push_back(Temp);
            indexes.push_back(2 + base);

         //   points.push_back(Temp);
            indexes.push_back(2 + base);

        Temp.Position.y = y;
            points.push_back(Temp);
            indexes.push_back(3 + base);

        Temp.Position.x = x;
       //     points.push_back(Temp);
        indexes.push_back(0 + base);
        }
}

void BoxCreator::IHorizontalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
    //Point3D Temp;
    Vertex Temp;

    Temp.Position.x = Position.x;
    Temp.Position.y = Position.y;
    Temp.Position.z = Position.z;
    int base = points.size();
    points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(1 + base);

    Temp.Position.x += Widht;
    points.push_back(Temp);
    indexes.push_back(2 + base);

    Temp.Position.x = Position.x;
    Temp.Position.z = Position.z;
    //points.push_back(Temp);
    indexes.push_back(2 + base);

    Temp.Position.x += Widht;
    Temp.Position.z += Lenght;
    //points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.z = Position.z;
    points.push_back(Temp);
    indexes.push_back(0 + base);

}


void BoxCreator::IBokovPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
    //Point3D Temp;
    Vertex Temp;

    Temp.Position.x = Position.x;
    Temp.Position.y = Position.y;
    Temp.Position.z = Position.z;
    int base = points.size();
    points.push_back(Temp);
    indexes.push_back(0 + base);

    Temp.Position.y += Height;
    points.push_back(Temp);
    indexes.push_back(1 + base);

    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(2 + base);
    //points.push_back(Temp);
    indexes.push_back(2 + base);

    Temp.Position.y -= Height;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.z -= Lenght;
    //points.push_back(Temp);
    indexes.push_back(0 + base);

    //Temp.y += Height;
    //points.push_back(Temp);

    /*for(int y=0; y < Height; y++)
        for(int z=0; z < Lenght; z++)
       {
        Temp.y = y * yn;
        Temp.z = z * zn;
        Temp.x = Position.x;
            points.push_back(Temp);

        Temp.y = (y + 1) * yn;
        Temp.z = (z + 1) * zn;
            points.push_back(Temp);

        Temp.z = z * zn;
            points.push_back(Temp);

        Temp.y = y * yn;
            points.push_back(Temp);

        Temp.z = (z + 1) * zn;
            points.push_back(Temp);

        Temp.y = (y + 1) * yn;
            points.push_back(Temp);
       }*/

/*    for(y = Position.y; y < Height; y+=yn)
        for(z = Position.z; z < Lenght; z+=zn)
        {
        Temp.x = Position.x;
        Temp.y = Position.y;
        Temp.z = Position.z;
            points.push_back(Temp);

        Temp.y += yn;
        Temp.z += zn;
            points.push_back(Temp);

        Temp.z = z;
            points.push_back(Temp);

        Temp.y = y;
            points.push_back(Temp);

        Temp.z += zn;
            points.push_back(Temp);

        Temp.y += yn;
            points.push_back(Temp);


        }*/
}

