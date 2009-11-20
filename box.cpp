#include "box.h"

float Object::x = 0;
float Object::y = 0;
float Object::z = 0;
std::vector <Vertex> Object::points;
std::vector <unsigned short> Object::indexes;

Box::Box()
   : Position()
{
    this->Angle = 0;
}

Box::Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Angle, Point3D Position)
{
    //this->points = points;
    //this->indexes = indexes;
    this->Angle = Angle;
    this->Position = Position;
}

Box::Box(const std::vector<Vertex> &points, const std::vector<unsigned short> &indexes, float Widght, float Height, float Lenght, float VertexPerWidght, float VertexPerHeight, float VertexPerLenght)
{
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

   this->Widght = Widght;
   this->Height = Height;
   this->Lenght = Lenght;
   this->VertexPerHeight = VertexPerHeight;
   this->VertexPerLenght = VertexPerLenght;
   this->VertexPerWidght = VertexPerWidght;

   Angle = 0;
   Color = Qt::blue;
}


/*void Box::Show()
{
    glPushMatrix();
    glTranslatef(Position.x, Position.y, Position.z);
    glRotatef(Angle, 0, 1, 0);
    glColor3f(Color.redF(), Color.greenF(), Color.blueF());
    glInterleavedArrays(GL_T2F_N3F_V3F, 0, m_points);
    glDrawElements(GL_TRIANGLES, m_IndexSize, GL_UNSIGNED_SHORT, m_indexes);
    glPopMatrix();

}*/

QDomElement Box::Serialize(QDomDocument& DomDocument)
{
    QDomElement BoxNode = DomDocument.createElement("Box");

    QString sPosition, sColor;
    sPosition.sprintf("%f, %f, %f", Position.x, Position.y, Position.z);

    sColor.sprintf("%i, %i, %i", Color.red(), Color.green(), Color.blue());

    BoxNode.setAttribute("Position", sPosition);
    BoxNode.setAttribute("Rotation", Angle);
    BoxNode.setAttribute("Color", sColor);
    BoxNode.setAttribute("Texture_name", "");

    QDomElement OptionsNode = DomDocument.createElement("Options");

    QDomElement SizeNode = DomDocument.createElement("Size");

    SizeNode.setAttribute("Widght", Widght);
    SizeNode.setAttribute("Height", Height);
    SizeNode.setAttribute("Lenght", Lenght);

    QDomElement VpsNode = DomDocument.createElement("VPS");

    VpsNode.setAttribute("Vertex_per_widght", VertexPerWidght);
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


    QDomElement OptionsNode = DomElement.firstChildElement("Options");
    if(!OptionsNode.isNull())
    {
        QDomElement SizeNode = OptionsNode.firstChildElement("Size");

        if(!SizeNode.isNull())
        {
            Widght = SizeNode.attribute("Widght").toFloat(&bIsOk1);
            Height = SizeNode.attribute("Height").toFloat(&bIsOk2);
            Lenght = SizeNode.attribute("Lenght").toFloat(&bIsOk3);
            if(bIsOk1 && bIsOk2 && bIsOk3)
                nNodeCount++;
        }

        QDomElement VpsNode = OptionsNode.firstChildElement("VPS");
        if(!SizeNode.isNull())
        {
            VertexPerWidght = VpsNode.attribute("Vertex_per_widght").toFloat(&bIsOk1);
            VertexPerHeight = VpsNode.attribute("Vertex_per_height").toFloat(&bIsOk2);
            VertexPerLenght = VpsNode.attribute("Vertex_per_lenght").toFloat(&bIsOk3);
            if(bIsOk1 && bIsOk2 && bIsOk3)
                nNodeCount++;
        }


        QDomElement OtherNode = OptionsNode.firstChildElement("Other");
        if(!OtherNode.isNull())
        {

        }
    }

    *this = CreateBox(Widght, Height, Lenght, VertexPerWidght, VertexPerHeight, VertexPerLenght);

    qDebug()<<"posxbox"<<Widght;

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

void Box::CreateBox(float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght)
{
   this->Widght = Widght;
   this->Height = Height;
   this->Lenght = Lenght;
   this->VertexPerHeight = VertexPerHeight;
   this->VertexPerLenght = VertexPerLenght;
   this->VertexPerWidght = VertexPerWidght;

    points.clear();
    indexes.clear();
    float xn, yn, zn;
    xn = Widht / VertexPerWidht;
    yn = Height / VertexPerHeight;
    zn = Lenght / VertexPerLenght;
    Point3D rPosition(0, 0, 0);

   IVerticalPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);


   IHorizontalPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.z +=Lenght;

   IVerticalPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.y +=Height;

   rPosition.z -=Lenght;

   IHorizontalPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.y -=Height;

   IBokovPlane(rPosition, Widht, Height, Lenght, xn, yn, zn);

   rPosition.x +=Widht;

   IBokovPlaneNext(rPosition, Widht, Height, Lenght, xn, yn, zn);

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

   //return Box(points, indexes, Widht, Height, Lenght, VertexPerWidht, VertexPerHeight, VertexPerLenght);
}

void Box::IVerticalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
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
              indexes.push_back(0 + base);

        Temp.Position.x += xn;
            points.push_back(Temp);
            indexes.push_back(3 + base);

        Temp.Position.y += yn;
            indexes.push_back(1 + base);


        }
}


void Box::IHorizontalPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
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
    indexes.push_back(0 + base);

    Temp.Position.x += Widht;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.z += Lenght;
    indexes.push_back(1 + base);



}

void Box::IBokovPlane(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
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
    indexes.push_back(0 + base);

    Temp.Position.z += Lenght;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.y += Height;
    indexes.push_back(1 + base);


}

void Box::IVerticalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
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

        Temp.Position.y += yn;
            points.push_back(Temp);
            indexes.push_back(1 + base);

        Temp.Position.x += xn;
            points.push_back(Temp);
            indexes.push_back(2 + base);

           indexes.push_back(2 + base);

        Temp.Position.y = y;
            points.push_back(Temp);
            indexes.push_back(3 + base);

        Temp.Position.x = x;
            indexes.push_back(0 + base);
        }
}

void Box::IHorizontalPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
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
    indexes.push_back(2 + base);

    Temp.Position.x += Widht;
    Temp.Position.z += Lenght;
    indexes.push_back(3 + base);

    Temp.Position.z = Position.z;
    points.push_back(Temp);
    indexes.push_back(0 + base);

}


void Box::IBokovPlaneNext(Point3D Position, float Widht, float Height, float Lenght, float xn, float yn, float zn)
{
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
    indexes.push_back(2 + base);

    Temp.Position.y -= Height;
    points.push_back(Temp);
    indexes.push_back(3 + base);

    Temp.Position.z -= Lenght;
    indexes.push_back(0 + base);


}


