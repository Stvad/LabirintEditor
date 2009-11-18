#include "sector.h"

Sector::Sector()
{
    fWidght = 0;
    fLenght = 0;
    fAngle = 0;
}

Sector::Sector(const std::vector <Vertex> &points, const std::vector <unsigned short> &indexes,float Widght, float Lenght, float VertexPerWidght, float VertexPerLenght, Point3D Position)
{
    fWidght = Widght;
    fLenght = Lenght;
    fVertexPerWidght = VertexPerWidght;
    fVertexPerLenght = VertexPerLenght;
    mPosition = Position;

    m_points = new Vertex[points.size()];
    m_indexes = new unsigned short[indexes.size()];
    m_IndexSize = indexes.size();

    for (uint i=0; i< points.size(); i++)
    {
        m_points[i] = points[i];
    }
    for (uint j=0; j< indexes.size(); j++)
    {
        m_indexes[j] = indexes[j];
    }

    Color = Qt::gray;
}

void Sector::SetSize(float Widght, float Lenght)
{
    fWidght = Widght;
    fLenght = Lenght;
}

void Sector::Show()
{
    glPushMatrix();
    glTranslatef(mPosition.x, mPosition.y, mPosition.z);
    glRotatef(fAngle, 0, 1, 0);
    glColor3f(Color.redF(), Color.greenF(), Color.blueF());
    glInterleavedArrays(GL_T2F_N3F_V3F, 0, m_points);
    glDrawElements(GL_TRIANGLES, m_IndexSize, GL_UNSIGNED_SHORT, m_indexes);
    glPopMatrix();

}

void Sector::SetAngle(float Angle)
{
    fAngle = Angle;
}

void Sector::SetPosition(float x, float y, float z)
{
    mPosition = Point3D(x, y, z);
}

Point3D Sector::GetPosition()
{
    return mPosition;
}
