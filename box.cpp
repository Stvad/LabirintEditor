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
   this->Widght = Widght;
   this->Height = Height;
   this->Lenght = Lenght;
   this->VertexPerHeight = VertexPerHeight;
   this->VertexPerLenght = VertexPerLenght;
   this->VertexPerWidght = VertexPerWidght;
   AngleY = 0;
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

QDomElement Box::Serialize(QDomDocument& DomDocument)
{
    QDomElement BoxNode = DomDocument.createElement("Box");

    QString sPosition, sColor;
    sPosition.sprintf("%f, %f, %f", Position.x, Position.y, Position.z);

    sColor.sprintf("%i, %i, %i", Color.red(), Color.green(), Color.blue());

    BoxNode.setAttribute("Position", sPosition);
    BoxNode.setAttribute("Rotation", AngleY);
    BoxNode.setAttribute("Color", sColor);
    BoxNode.setAttribute("Texture_name", "");

    QDomElement OptionsNode = DomDocument.createElement("Options");

    QDomElement SizeNode = DomDocument.createElement("Size");

    SizeNode.setAttribute("Widght", Widght);
    SizeNode.setAttribute("Height", Height);
    SizeNode.setAttribute("Lenght", Lenght);

    QDomElement VpsNode = DomDocument.createElement("VPS");

    VpsNode.setAttribute("Vertex_per_width", VertexPerWidght);
    VpsNode.setAttribute("Vertex_per_height", VertexPerHeight);
    VpsNode.setAttribute("Vertex_per_lenght", VertexPerLenght);

    QDomElement OtherOptionsNode = DomDocument.createElement("Other");

    OptionsNode.appendChild(SizeNode);
    OptionsNode.appendChild(VpsNode);
    OptionsNode.appendChild(OtherOptionsNode);

    BoxNode.appendChild(OptionsNode);

    return BoxNode;
}

bool Box::Deserialize(const QDomElement& DomElement)
{
    if(DomElement.tagName() != "Box") return false;
    int nNodeCount = 0;
    bool bIsOk1, bIsOk2, bIsOk3;

    DomElement.attribute("Texture", "none");

    QStringList sl = DomElement.attribute("Color", "127,127,127").split(",");
    Color.setRed(sl[0].toInt(&bIsOk1));
    Color.setGreen(sl[1].toInt(&bIsOk2));
    Color.setBlue(sl[2].toInt(&bIsOk3));
    if(bIsOk1 && bIsOk2 && bIsOk3)
        ++nNodeCount;

    sl = DomElement.attribute("Position", "1,1,1").split(",");
    Position.x = sl[0].toFloat(&bIsOk1);
    Position.x = sl[1].toFloat(&bIsOk2);
    Position.x = sl[2].toFloat(&bIsOk3);
    if(bIsOk1 && bIsOk2 && bIsOk3)
        ++nNodeCount;

    AngleY = DomElement.attribute("Rotation").toFloat(&bIsOk1);
    if(bIsOk1)
                ++nNodeCount;

    QDomElement OptionsNode = DomElement.firstChildElement("Options");
    if(!OptionsNode.isNull())
    {
        QDomElement SizeNode = DomElement.firstChildElement("Size");

        Widght = SizeNode.attribute("Widght").toFloat(&bIsOk1);
        Height = SizeNode.attribute("Height").toFloat(&bIsOk2);
        Lenght = SizeNode.attribute("Height").toFloat(&bIsOk2);
        if(bIsOk1 && bIsOk2 && bIsOk3)
            ++nNodeCount;

        QDomElement VpsNode = DomElement.firstChildElement("VPS");

        VertexPerWidght = VpsNode.attribute("Vertex_per_widght").toFloat(&bIsOk1);
        VertexPerHeight = VpsNode.attribute("Vertex_per_height").toFloat(&bIsOk2);
        VertexPerLenght = VpsNode.attribute("Vertex_per_lenght").toFloat(&bIsOk3);
        if(bIsOk1 && bIsOk2 && bIsOk3)
            ++nNodeCount;


        QDomElement OtherNode = DomElement.firstChildElement("Other");
        if(!OtherNode.isNull())
        {

        }
    }

    return nNodeCount == 5;
}
