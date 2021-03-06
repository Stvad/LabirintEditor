#include "xmlloader.h"

XmlLoader::XmlLoader()
{
}

bool XmlLoader::LoadFile(QString sFileName)
{
    bool bResult = false;
    QFile File(sFileName);
    if( File.open(QIODevice::ReadOnly) )
    {
        QDomDocument DomDoc;
        if(DomDoc.setContent(&File))
        {
            QDomElement Root = DomDoc.documentElement();
            if(ObjectManager::Deserialize(Root.firstChildElement("Objects")))
            {
                bResult = true;
                ObjectManager::Show();
            }
        }
        File.close();
    }
    return bResult;
}


bool XmlLoader::SaveFile(QString sFileName)
{
    bool bResult = true;
    QFile File(sFileName);
    if( File.open(QIODevice::WriteOnly) )
    {
        QDomDocument DomDocument("DomDocument");
        QDomElement Root = DomDocument.createElement("Map");
        QDomElement TextureNode = DomDocument.createElement("Texture");
        QDomElement LightingNode = DomDocument.createElement("Lighting");
        QDomElement EmptyNode = DomDocument.createElement("Empty");
        DomDocument.appendChild(Root);


        QDomNode Node = ObjectManager::Serialize(DomDocument);
        if(Node.isNull())
        {
            //QMessageBox::warning(this, "Node", "Can't serialize!");
            bResult = false;
        }
        Root.appendChild(TextureNode);
        Root.appendChild(LightingNode);
        Root.appendChild(Node);
        Root.appendChild(EmptyNode);

        QTextStream(&File) << DomDocument.toString();

        File.close();
    }
    else
    {
        //QMessageBox::warning(this, "Create XML", "Can't open file to write xml!");
        bResult = false;
    }

    return bResult;
    /*
    for (int i = 0; i < ObjectManager::GetBoxesSize(); i++)
    {
        ObjectManager::GetAt(i).Serialize();
    }
    //*/
}


