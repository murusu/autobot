#include "xml_class.h"

XmlBase::XmlBase(const char *filename)
{
    printf(filename);

    m_xmldoc = new TiXmlDocument();

    if(!m_xmldoc->LoadFile(filename))
    {
        TiXmlDeclaration *xmlhead = new TiXmlDeclaration("1.0", "utf-8","");
        m_xmldoc->LinkEndChild( xmlhead );
        if(!m_xmldoc->SaveFile(filename))
        {
            delete m_xmldoc;
            m_xmldoc = NULL;
        }
    }
}

XmlBase::~XmlBase()
{
    if(m_xmldoc)
    {
        delete m_xmldoc;
        m_xmldoc = NULL;
    }
}

bool XmlBase::setData(const char *key, const char *data)
{
    if(!m_xmldoc)
    {
        return false;
    }

    TiXmlElement *pElementParents = NULL;
    TiXmlElement *pElementChild   = NULL;
    pElementParents = m_xmldoc->RootElement();

    if(!pElementParents)
    {
        pElementParents = new TiXmlElement("configration");
        m_xmldoc->LinkEndChild(pElementParents);
    }

    char *cNodeKey = (char *)malloc(strlen(key) + 1);
    char *cInputString = (char *)key;

    memset(cNodeKey, '\0', sizeof(cNodeKey));

    char *cPosition = strchr(cInputString, '/');

    strncpy(cNodeKey, cInputString, cPosition - cInputString);

    cNodeKey[cPosition - cInputString] = '\0';

    while(cPosition)
    {
        pElementChild = pElementParents->FirstChildElement(cNodeKey);

        if(!pElementChild)
        {
            pElementChild = new TiXmlElement(cNodeKey);
            pElementParents->LinkEndChild(pElementChild);
        }

        pElementParents = pElementChild;

        memset(cNodeKey, 0, sizeof(cNodeKey));

        if(cPosition)
        {
            cInputString = cPosition + 1;
            cPosition = strchr(cInputString, '/');

            if(cPosition)
            {
                strncpy(cNodeKey, cInputString, cPosition - cInputString);
                cNodeKey[cPosition - cInputString] = '\0';
            }
            else
            {
                strcpy(cNodeKey, cInputString);
                pElementChild = pElementParents->FirstChildElement(cNodeKey);

                if(!pElementChild)
                {
                    pElementChild = new TiXmlElement(cNodeKey);
                    pElementParents->LinkEndChild(pElementChild);

                }
            }
        }
    }

    pElementParents = pElementChild;

    TiXmlText* pText = NULL;
    pText = new TiXmlText(data);
    if(pElementParents->FirstChild())
    {
        pElementParents->ReplaceChild(pElementParents->FirstChild(), *pText);
    }
    else
    {
        pElementParents->LinkEndChild(pText);
    }

    if(m_xmldoc->SaveFile(CONFIG_XML_PATH))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool XmlBase::getData(const char *key, char *data)
{
    return true;
}
