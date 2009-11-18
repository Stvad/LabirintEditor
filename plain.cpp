#include "plain.h"

Plain::Plain()
{
}

Plain::Plain(const std::vector<Sector> &sectors, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    this->sectors = sectors;
    this->fSectorWidght = fSectorWidght;
    this->fSectorLenght = fSectorLenght;
    this->fVertexPerWidght = fVertexPerWidght;
    this->fVertexPerLenght = fVertexPerLenght;
    this->nWidghtSectors = nWidghtSectors;
    this->nLenghtSectors = nLenghtSectors;
}

Plain Plain::CreatePlain(bool bType, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    if(!bType)
        return CreateFloor(fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
    else
        return CreateCeiling(fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
}

Plain Plain::CreateFloor(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    Point3D Position(0, 0, 0);
    std::vector <Sector> sectors;
    float xn = fSectorWidght / fVertexPerWidght, zn = fSectorLenght / fVertexPerLenght;

    for(uint sz = Position.z; sz < (nLenghtSectors * fSectorLenght); sz += fSectorLenght)
        for (uint sx = Position.x; sx < (nWidghtSectors * fSectorWidght); sx += fSectorWidght)
        {
            Vertex Temp;
            std::vector <Vertex> points;
            std::vector <unsigned short> indexes;
            //Temp.Position.y = Position.y;
            for(uint z = sz; z < fSectorLenght; z+=zn)
                for(uint x = sx; x < fSectorWidght; x+=xn)
                {
                    uint base = points.size();
                    Temp.Position.x = x;
                    Temp.Position.z = z;
                    points.push_back(Temp);
                    indexes.push_back(0 + base);

                    Temp.Position.x += xn;
                    Temp.Position.z += zn;
                        points.push_back(Temp);
                        indexes.push_back(1 + base);

                    Temp.Position.x = x;
                        points.push_back(Temp);
                        indexes.push_back(2 + base);

                    Temp.Position.z = z;
                          indexes.push_back(0 + base);

                    Temp.Position.x += xn;
                        points.push_back(Temp);
                        indexes.push_back(3 + base);

                    Temp.Position.z += zn;
                        indexes.push_back(1 + base);


                    }
            sectors.push_back(Sector(points, indexes, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, Point3D(sx, Position.y, sz)));
        }
    return Plain(sectors, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
}

Plain Plain::CreateCeiling(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    Point3D Position(0, 0, 0);
    std::vector <Sector> sectors;
    float xn = fSectorWidght / fVertexPerWidght, zn = fSectorLenght / fVertexPerLenght;

    for(uint sz = Position.z; sz < (nLenghtSectors * fSectorLenght); sz += fSectorLenght)
        for (uint sx = Position.x; sx < (nWidghtSectors * fSectorWidght); sx += fSectorWidght)
        {
            Vertex Temp;
            std::vector <Vertex> points;
            std::vector <unsigned short> indexes;
            //Temp.Position.y = Position.y;
            for(uint z = sz; z < fSectorLenght; z+=zn)
                for(uint x = sx; x < fSectorWidght; x+=xn)
                {
                    uint base = points.size();
                    Temp.Position.x = x;
                    Temp.Position.z = z;
                        points.push_back(Temp);
                        indexes.push_back(0 + base);

                    Temp.Position.z += zn;
                        points.push_back(Temp);
                        indexes.push_back(1 + base);

                    Temp.Position.x += xn;
                        points.push_back(Temp);
                        indexes.push_back(2 + base);

                       indexes.push_back(2 + base);

                    Temp.Position.z = z;
                        points.push_back(Temp);
                        indexes.push_back(3 + base);

                    Temp.Position.x = x;
                        indexes.push_back(0 + base);


                    }

            sectors.push_back(Sector(points, indexes, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, Point3D(sx, Position.y, sz)));
        }
    return Plain(sectors, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
}

void Plain::Show()
{
    for(uint i = 0; i < sectors.size(); i++)
    {
        sectors[i].Show();
    }
}

void Plain::SetAngle(float Angle)
{
    fAngle = Angle;
    for (uint i = 0; i < sectors.size(); i++)
    {
        sectors[i].SetAngle(Angle);
    }
}

void Plain::SetPosition(float x, float y, float z)
{
    for (uint i = 0; i < sectors.size(); i++)
    {
        Point3D Temp = sectors[i].GetPosition();
        sectors[i].SetPosition(Temp.x += (Position.x - x), Temp.y += (Position.y - y), Temp.z += (Position.z - z));
    }
    Position = Point3D(x, y, z);

}
