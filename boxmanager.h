#ifndef BOXMANAGER_H
#define BOXMANAGER_H

#include "box.h"
#include <vector>
#include "boxcreator.h"
#include <QtXml>

class BoxManager
{
private:
        static QColor m_TempColor;
        static QColor m_SelectedColor;
        BoxManager();
public:

  static  void Show();
  static  void ClearAll();
  static  void RemoveLast();
  static  void Remove(int pos);
  static  void AddBox(Box);
  static Box& GetAt(int nIndex);
  static int GetBoxesSize();
  static void SelectBox(int Index);
  static void UnselectBox();
  static QDomElement Serialize(QDomDocument& DomDocument);
  static bool Deserialize(const QDomElement& DomElement);
  /*
  static void MoveBoxLeft();
  static void MoveBoxRight();
  static void MoveBoxUp();
  static void MoveBoxDown();
  //*/
  //static void MoveBox(float X, float Y, float Z);
 //static   Box AddBox(Point3D Position, float Widht, float Height, float Lenght, float VertexPerWidht, float VertexPerHeight, float VertexPerLenght);
protected:
 static std::vector <Box> boxes;
 static int m_IndexOfSelectedBox;    // индекс текущего выделенного бокса
 //Box TempBox;

 static BoxManager* GetInstance();
 static BoxManager* m_pInstance;
};

#endif // BOXMANAGER_H
