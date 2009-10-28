#include "box.h"

Box::Box()
   : Position()
{
    this->AngleX = 0;
    this->AngleY = 0;
    this->AngleZ = 0;
}

Box::Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float AngleX, float AngleY, float AngleZ, Point3D Position)
{
    //this->points = points;
    //this->indexes = indexes;
    this->AngleX = AngleX;
    this->AngleY = AngleY;
    this->AngleZ = AngleZ;
    this->Position = Position;
}

Box::Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Widght, float Height, float Lenght, float VertexPerWidght, float VertexPerHeight, float VertexPerLenght)
{
    m_points = new Vertex[points.size()];
    m_indexes = new unsigned short[indexes.size()];
    m_IndexSize = indexes.size();
    //int a=points.size(),b=indexes.size();
    for (int i=0; i< points.size(); i++)
    {
        m_points[i] = points[i];
    }
    for (int j=0; j< indexes.size(); j++)
    {
        m_indexes[j] = indexes[j];
    }
   //this->Position = Position;
   sWidght = Widght;
   sHeight = Height;
   sLenght = Lenght;
   sVertexPerHeight = VertexPerHeight;
   sVertexPerLenght = VertexPerLenght;
   sVertexPerWidght = VertexPerWidght;
   Color = Qt::blue;
}

void Box::Show()
{
    glPushMatrix();
    glTranslatef(Position.x, Position.y, Position.z);
    glRotatef(AngleY, 0, 1, 0);
    glColor3f(Color.redF(), Color.greenF(), Color.blueF());
    glInterleavedArrays(GL_T2F_N3F_V3F, 0, m_points);
    glDrawElements(GL_TRIANGLES, m_IndexSize, GL_UNSIGNED_SHORT, m_indexes);
    glPopMatrix();

}
