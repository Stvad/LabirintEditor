#ifndef PLAIN_H
#define PLAIN_H

#include <vector>
#include "sector.h"

class Plain
{
public:
    Plain();
    Plain(const std::vector<Sector> &sectors, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    static Plain CreatePlain(bool bType, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    static Plain CreateFloor(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    static Plain CreateCeiling(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    void Show();
    void SetAngle(float Angle);
    void SetPosition(float x, float y, float z);

protected:
    float nWidghtSectors, nLenghtSectors;
    float fSectorWidght, fSectorLenght;
    float fVertexPerWidght, fVertexPerLenght;
    float fAngle;
    std::vector <Sector> sectors;
    Point3D Position;

};

#endif // PLAIN_H
