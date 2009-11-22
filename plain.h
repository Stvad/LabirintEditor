#ifndef PLAIN_H
#define PLAIN_H

#include <vector>
#include "sector.h"
#include "object.h"
#include <QtXml>

class Plain : public Object
{
public:
    Plain();
    Plain(const std::vector<Sector> &sectors, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors, bool bType);
    void CreatePlain(bool bType, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    void CreateFloor(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    void CreateCeiling(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors);
    void Show();
    void SetAngle(float Angle);
    void SetPosition(float x, float y, float z);
    QDomElement Serialize(QDomDocument& DomDocument);
    bool Deserialize(const QDomElement& DomElement);

protected:
    //QColor Color;
    float nWidghtSectors, nLenghtSectors;
    float fSectorWidght, fSectorLenght;
    float fVertexPerWidght, fVertexPerLenght;
    //float fAngle;
    bool bType;
    std::vector <Sector> sectors;
    //Point3D Position;

};

#endif // PLAIN_H
