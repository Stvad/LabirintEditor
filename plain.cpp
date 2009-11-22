#include "plain.h"

Plain::Plain()
{
}

Plain::Plain(const std::vector<Sector> &sectors, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors, bool bType)
{
    this->sectors = sectors;
    this->fSectorWidght = fSectorWidght;
    this->fSectorLenght = fSectorLenght;
    this->fVertexPerWidght = fVertexPerWidght;
    this->fVertexPerLenght = fVertexPerLenght;
    this->nWidghtSectors = nWidghtSectors;
    this->nLenghtSectors = nLenghtSectors;
    this->bType = bType;
}

void Plain::CreatePlain(bool bType, float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    this->sectors = sectors;
    this->fSectorWidght = fSectorWidght;
    this->fSectorLenght = fSectorLenght;
    this->fVertexPerWidght = fVertexPerWidght;
    this->fVertexPerLenght = fVertexPerLenght;
    this->nWidghtSectors = nWidghtSectors;
    this->nLenghtSectors = nLenghtSectors;
    this->bType = bType;
    
    if(!bType)
         this->CreateFloor(fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
    else
         this->CreateCeiling(fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors);
    //return tPlain;
}

void Plain::CreateFloor(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    Point3D Position(0, 0, 0);
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
    //return Plain(sectors, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors, false);
}

void Plain::CreateCeiling(float fSectorWidght, float fSectorLenght, float fVertexPerWidght, float fVertexPerLenght, float nWidghtSectors, float nLenghtSectors)
{
    Point3D Position(0, 0, 0);
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
    //return Plain(sectors, fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght, nWidghtSectors, nLenghtSectors, true);
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
    Angle = Angle;
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

QDomElement Plain::Serialize(QDomDocument& DomDocument)
{
    QDomElement PlainNode = DomDocument.createElement("Plain");

    QString sPosition, sColor;
    sPosition.sprintf("%f, %f, %f", Position.x, Position.y, Position.z);

    sColor.sprintf("%i, %i, %i", Color.red(), Color.green(), Color.blue());

    PlainNode.setAttribute("Position", sPosition);
    PlainNode.setAttribute("Rotation", Angle);
    PlainNode.setAttribute("Color", sColor);
    PlainNode.setAttribute("PlainType", bType);
    PlainNode.setAttribute("Texture_name", "");

    QDomElement OptionsNode = DomDocument.createElement("Options");

    QDomElement SizeNode = DomDocument.createElement("Size");

    SizeNode.setAttribute("Widght", fSectorWidght);
    SizeNode.setAttribute("Lenght", fSectorLenght);

    QDomElement VpsNode = DomDocument.createElement("VPS");

    VpsNode.setAttribute("Vertex_per_widght", fVertexPerWidght);
    VpsNode.setAttribute("Vertex_per_lenght", fVertexPerLenght);

    QDomElement OtherOptionsNode = DomDocument.createElement("Other");

    OptionsNode.appendChild(SizeNode);
    OptionsNode.appendChild(VpsNode);
    OptionsNode.appendChild(OtherOptionsNode);

    PlainNode.appendChild(OptionsNode);

    return PlainNode;
}

bool Plain::Deserialize(const QDomElement& DomElement)
{
    if(DomElement.tagName() != "Plain") return false;
    int nNodeCount = 0;
    bool bIsOk1, bIsOk2, bIsOk3;

    DomElement.attribute("Texture", "none");


    QDomElement OptionsNode = DomElement.firstChildElement("Options");
    if(!OptionsNode.isNull())
    {
        QDomElement SizeNode = OptionsNode.firstChildElement("Size");

        if(!SizeNode.isNull())
        {
            fSectorWidght = SizeNode.attribute("Widght").toFloat(&bIsOk1);
            fSectorLenght = SizeNode.attribute("Lenght").toFloat(&bIsOk2);
            if(bIsOk1 && bIsOk2)
                nNodeCount++;
        }

        QDomElement VpsNode = OptionsNode.firstChildElement("VPS");
        if(!SizeNode.isNull())
        {
            fVertexPerWidght = VpsNode.attribute("Vertex_per_widght").toFloat(&bIsOk1);
            fVertexPerLenght = VpsNode.attribute("Vertex_per_lenght").toFloat(&bIsOk2);
            if(bIsOk1 && bIsOk2)
                nNodeCount++;
        }


        QDomElement OtherNode = OptionsNode.firstChildElement("Other");
        if(!OtherNode.isNull())
        {

        }
    }

    //if (DomElement.attribute(PlainType));

    //*this = CreatePlain(fSectorWidght, fSectorLenght, fVertexPerWidght, fVertexPerLenght);

    QStringList sl = DomElement.attribute("Position", "1,1,1").split(",");
    Position.x = sl[0].toFloat(&bIsOk1);
    Position.y = sl[1].toFloat(&bIsOk2);
    Position.z = sl[2].toFloat(&bIsOk3);
    if(bIsOk1 && bIsOk2 && bIsOk3)
        nNodeCount++;

    sl = DomElement.attribute("Color", "127,127,127").split(",");
    Color.setRed(sl[0].toInt(&bIsOk1));
    Color.setGreen(sl[1].toInt(&bIsOk2));
    Color.setBlue(sl[2].toInt(&bIsOk3));
    if(bIsOk1 && bIsOk2 && bIsOk3)
        nNodeCount++;

    Angle = DomElement.attribute("Rotation").toFloat(&bIsOk1);
    if(bIsOk1)
                nNodeCount++;

    return nNodeCount == 5;
}
