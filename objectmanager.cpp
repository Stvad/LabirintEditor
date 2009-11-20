#include "objectmanager.h"

//static Box TempBox;
std::vector <Object&> ObjectManager::boxes;
std::vector <Plain> ObjectManager::plains;
ObjectManager* ObjectManager::m_pInstance = NULL;
int ObjectManager::m_IndexOfSelectedObject = -1;

QColor ObjectManager::m_TempColor = QColor(255, 255, 255);
QColor ObjectManager::m_SelectedColor = QColor(149, 255, 234);

ObjectManager::ObjectManager()
{
}

ObjectManager* ObjectManager::GetInstance()
{
    if(m_pInstance == NULL)
        m_pInstance = new ObjectManager();

    return m_pInstance;
}

void ObjectManager::AddObject(Object* NewObject)
{
    boxes.push_back(NewObject);
}

void ObjectManager::AddPlain(Plain NewPlain)
{
    plains.push_back(NewPlain);
}

void ObjectManager::ClearAll()
{
    boxes.clear();
    plains.clear();
}

void ObjectManager::RemoveLastBox()
{
    boxes.pop_back();
}

void ObjectManager::RemoveLastPlain()
{
    boxes.pop_back();
}

void ObjectManager::Remove(int pos)
{
    boxes.erase(boxes.begin()+pos);
}

void ObjectManager::Show()
{
    glInitNames();
    glPushName((uint)0);
    uint i = 0;

    for(i; i < plains.size(); i++)
    {
        glLoadName(i);
        plains[i].Show();
    }

    for(uint j = 0; j < boxes.size(); j++)
    {
        glLoadName(i+j);
        boxes[j].Show();
    }
}

Box& ObjectManager::GetBoxAt(int nIndex)
{
    if(nIndex < 0 || nIndex > boxes.size() ) throw "Index error!";
    return boxes[nIndex];
}

Plain& ObjectManager::GetPlainAt(int nIndex)
{
    if(nIndex < 0 || nIndex > plains.size() ) throw "Index error!";
    return plains[nIndex];
}

int ObjectManager::GetBoxesSize()
{
    return boxes.size();
}

int ObjectManager::GetPlainsSize()
{
    return plains.size();
}

void ObjectManager::SelectObject(int Index)
{
      if(Index < 0 || Index > boxes.size()) return;
      if(m_IndexOfSelectedObject != -1) boxes[m_IndexOfSelectedObject].Color = m_TempColor;
      m_TempColor = boxes[Index].Color;
      boxes[Index].Color = m_SelectedColor;
      m_IndexOfSelectedObject = Index;
}

void ObjectManager::UnselectObject()
{
      if(m_IndexOfSelectedObject >= 0 && m_IndexOfSelectedObject < boxes.size())
        boxes[m_IndexOfSelectedObject].Color = m_TempColor;
}

QDomElement ObjectManager::Serialize(QDomDocument& DomDocument)
{
    QDomElement BoxesNode = DomDocument.createElement("Boxes");

    for(uint i = 0; i < boxes.size(); i++)
    {
        BoxesNode.appendChild(boxes[i].Serialize(DomDocument));
    }


    return BoxesNode;
}

bool ObjectManager::Deserialize(const QDomElement& DomElement)
{
    bool bResult = false;
    if(!DomElement.isNull())
    {
         bResult = true;
                boxes.clear();
                QDomElement CurBoxNode = DomElement.firstChildElement("Box");
                while(!CurBoxNode.isNull())
                {
                   // MPlanetoidSystem* PS = new MPlanetoidSystem();
                    Box tBox;
                    if(tBox.Deserialize(CurBoxNode))
                    {
                        qDebug()<<"posxmenager"<<tBox.Widght;
                        boxes.push_back(tBox);
                    }
                    CurBoxNode = CurBoxNode.nextSiblingElement("Box");
                }



    }
    //Show();
    return bResult;
}

  /*
  void ObjectManager::MoveBoxLeft()
  {
      boxes[m_IndexOfSelectedBox].Position.x -= 1;
      //updateGL();
  }

  void ObjectManager::MoveBoxRight()
  {
      boxes[m_IndexOfSelectedBox].Position.x -= 1;
  }

  void ObjectManager::MoveBoxUp()
  {
      boxes[m_IndexOfSelectedBox].Position.y += 1;
  }

  void ObjectManager::MoveBoxDown()
  {
      boxes[m_IndexOfSelectedBox].Position.y -= 1;
  }
  //*/

/*
Box ObjectManager::AddBox(Point3D Position, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght)
{
    TempBox = BoxCreator::CreateBox(Position, 10, 10, 5, 10, 10, 10);
}
// */
