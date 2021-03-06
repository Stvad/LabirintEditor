#include "objectmanager.h"

//static Box TempBox;
std::vector <Object*> ObjectManager::objects;
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
    objects.push_back(NewObject);
}

void ObjectManager::AddPlain(Plain NewPlain)
{
    plains.push_back(NewPlain);
}

void ObjectManager::ClearAll()
{
    objects.clear();
    plains.clear();
}

void ObjectManager::RemoveLastBox()
{
    objects.pop_back();
}

void ObjectManager::RemoveLastPlain()
{
    objects.pop_back();
}

void ObjectManager::Remove(int pos)
{
    objects.erase(objects.begin()+pos);
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

    for(uint j = 0; j < objects.size(); j++)
    {
        glLoadName(i+j);
        objects[j]->Show();
    }
}

Object* ObjectManager::GetBoxAt(int nIndex)
{
    if(nIndex < 0 || nIndex > objects.size() ) throw "Index error!";
    return objects[nIndex];
}

Plain& ObjectManager::GetPlainAt(int nIndex)
{
    if(nIndex < 0 || nIndex > plains.size() ) throw "Index error!";
    return plains[nIndex];
}

int ObjectManager::GetObjectsSize()
{
    return objects.size();
}

int ObjectManager::GetPlainsSize()
{
    return plains.size();
}

void ObjectManager::SelectObject(int Index)
{
      if(Index < 0 || Index > objects.size()) return;
      if(m_IndexOfSelectedObject != -1) objects[m_IndexOfSelectedObject]->Color = m_TempColor;
      m_TempColor = objects[Index]->Color;
      objects[Index]->Color = m_SelectedColor;
      m_IndexOfSelectedObject = Index;
}

void ObjectManager::UnselectObject()
{
      if(m_IndexOfSelectedObject >= 0 && m_IndexOfSelectedObject < objects.size())
        objects[m_IndexOfSelectedObject]->Color = m_TempColor;
}

QDomElement ObjectManager::Serialize(QDomDocument& DomDocument)
{
    QDomElement ObjectsNode = DomDocument.createElement("Objects");

    for(uint i = 0; i < objects.size(); i++)
    {
        ObjectsNode.appendChild(objects[i]->Serialize(DomDocument));
    }


    return ObjectsNode;
}

bool ObjectManager::Deserialize(const QDomElement& DomElement)
{
    bool bResult = false;
    if(!DomElement.isNull())
    {
         bResult = true;
                objects.clear();
                QDomElement CurBoxNode = DomElement.firstChildElement("Box");
                while(!CurBoxNode.isNull())
                {
                   // MPlanetoidSystem* PS = new MPlanetoidSystem();
                    Box* tBox = new Box;
                    if(tBox->Deserialize(CurBoxNode))
                    {
                        objects.push_back(tBox);
                    }
                    CurBoxNode = CurBoxNode.nextSiblingElement("Box");
                }



    }
    //Show();
    return bResult;
}

ObjectManager::~ObjectManager()
{
    ClearAll();
}

  /*
  void ObjectManager::MoveBoxLeft()
  {
      objects[m_IndexOfSelectedBox].Position.x -= 1;
      //updateGL();
  }

  void ObjectManager::MoveBoxRight()
  {
      objects[m_IndexOfSelectedBox].Position.x -= 1;
  }

  void ObjectManager::MoveBoxUp()
  {
      objects[m_IndexOfSelectedBox].Position.y += 1;
  }

  void ObjectManager::MoveBoxDown()
  {
      objects[m_IndexOfSelectedBox].Position.y -= 1;
  }
  //*/

/*
Box ObjectManager::AddBox(Point3D Position, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght)
{
    TempBox = BoxCreator::CreateBox(Position, 10, 10, 5, 10, 10, 10);
}
// */
