#include "boxmanager.h"

//static Box TempBox;
std::vector <Box> BoxManager::boxes;
BoxManager* BoxManager::m_pInstance = NULL;
int BoxManager::m_IndexOfSelectedBox = -1;

QColor BoxManager::m_TempColor = QColor(255, 255, 255);
QColor BoxManager::m_SelectedColor = QColor(149, 255, 234);

BoxManager::BoxManager()
{
}

BoxManager* BoxManager::GetInstance()
{
    if(m_pInstance == NULL)
        m_pInstance = new BoxManager();

    return m_pInstance;
}

void BoxManager::AddBox(Box NewBox)
{
    boxes.push_back(NewBox);
}

void BoxManager::ClearAll()
{
    boxes.clear();
}

void BoxManager::RemoveLast()
{
    boxes.pop_back();
}

void BoxManager::Remove(int pos)
{
    boxes.erase(boxes.begin()+pos);
}

void BoxManager::Show()
{
    glInitNames();
    glPushName((uint)0);
    for(int i = 0;i < boxes.size(); i++)
    {
        glLoadName(i);
        boxes[i].Show();
    }
}

Box& BoxManager::GetAt(int nIndex)
{
    if(nIndex < 0 || nIndex > boxes.size() ) throw "Index error!";
    return boxes[nIndex];
}
int BoxManager::GetBoxesSize()
{
    return boxes.size();
}


  void BoxManager::SelectBox(int Index)
  {
      if(Index < 0 || Index > boxes.size()) return;
      if(m_IndexOfSelectedBox != -1) boxes[m_IndexOfSelectedBox].Color = m_TempColor;
      m_TempColor = boxes[Index].Color;
      boxes[Index].Color = m_SelectedColor;
      m_IndexOfSelectedBox = Index;
  }

  void BoxManager::UnselectBox()
  {
      if(m_IndexOfSelectedBox >= 0 && m_IndexOfSelectedBox < boxes.size())
        boxes[m_IndexOfSelectedBox].Color = m_TempColor;
  }

  /*
  void BoxManager::MoveBoxLeft()
  {
      boxes[m_IndexOfSelectedBox].Position.x -= 1;
      //updateGL();
  }

  void BoxManager::MoveBoxRight()
  {
      boxes[m_IndexOfSelectedBox].Position.x -= 1;
  }

  void BoxManager::MoveBoxUp()
  {
      boxes[m_IndexOfSelectedBox].Position.y += 1;
  }

  void BoxManager::MoveBoxDown()
  {
      boxes[m_IndexOfSelectedBox].Position.y -= 1;
  }
  //*/

/*
Box BoxManager::AddBox(Point3D Position, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght)
{
    TempBox = BoxCreator::CreateBox(Position, 10, 10, 5, 10, 10, 10);
}
// */
