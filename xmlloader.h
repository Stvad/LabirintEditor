#ifndef XMLLOADER_H
#define XMLLOADER_H

#include <QFile>
#include "objectmanager.h"
#include <QtXml>

class XmlLoader
{

public:
    XmlLoader();
    static bool LoadFile(QString sFileName);
    static bool SaveFile(QString sFileName);
};

#endif // XMLLOADER_H
