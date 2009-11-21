#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "box.h"
#include "plain.h"
#include <vector>
#include "boxcreator.h"
#include <QtXml>

class ObjectManager
{
private:
        static QColor m_TempColor;
        static QColor m_SelectedColor;
        ObjectManager();
public:

  static  void Show();
  static  void ClearAll();
  static  void RemoveLastBox();
  static  void RemoveLastPlain();
  static  void Remove(int pos);
  static  void AddObject(Object* NewObject);
  static  void AddPlain(Plain);
  static Object* GetBoxAt(int nIndex);
  static Plain& GetPlainAt(int nIndex);
  static int GetBoxesSize();
  static int GetPlainsSize();
  static void SelectObject(int Index);
  static void UnselectObject();
  static QDomElement Serialize(QDomDocument& DomDocument);
  static bool Deserialize(const QDomElement& DomElement);

protected:
 static std::vector <Object*> boxes;
 static std::vector <Plain> plains;
 static int m_IndexOfSelectedObject;    // индекс текущего выделенного бокса
 //Box TempBox;

 static ObjectManager* GetInstance();
 static ObjectManager* m_pInstance;
};

#endif // OBJECTMANAGER_H
