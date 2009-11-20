#ifndef PLAIN_H
#define PLAIN_H

#include <vector>
#include "sector.h"

class Plain
{
public:
    Plain();
    Plain(const std::vector<Sector> &sectors, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors, bool bType);
    static Plain CreatePlain(bool bType, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    static Plain CreateFloor(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    static Plain CreateCeiling(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    void Show();
    void SetAngle(float Angle);
    void SetPosition(float x, float y, float z);
    QDomElement Serialize(QDomDocument& DomDocument);
    bool Deserialize(const QDomElement& DomElement);

protected:
    float nWidghtSectors, nLenghtSectors;
    float fSectorWidght, fSectorLenght;
    float fVertexPerWidght, fVertexPerLenght;
    float fAngle;
    bool bType;
    std::vector <Sector> sectors;
    Point3D Position;

};

#endif // PLAIN_H
