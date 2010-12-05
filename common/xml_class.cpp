#include "xml_class.h"

XmlBase::XmlBase()
{
    m_xmldoc    = NULL;
    m_filename  = NULL;
    m_rootname  = NULL;
}

XmlBase::~XmlBase()
{
    if(m_xmldoc)
    {
        delete m_xmldoc;
        m_xmldoc = NULL;
    }

    if(m_filename)
    {
        delete m_filename;
        m_filename = NULL;
    }

    if(m_rootname)
    {
        delete m_rootname;
        m_rootname = NULL;
    }
}

bool XmlBase::init(const char *filename, const char *rootname)
{
    m_filename  = new TiXmlString(filename);
    m_rootname  = new TiXmlString(rootname);
    m_xmldoc    = new TiXmlDocument();

    if(!m_filename || !m_rootname || !m_xmldoc) return false;

    if(!m_xmldoc->LoadFile(m_filename->c_str()))
    {
        TiXmlDeclaration *xmlhead = new TiXmlDeclaration("1.0", "utf-8","");
        m_xmldoc->LinkEndChild( xmlhead );
        if(!m_xmldoc->SaveFile(m_filename->c_str())) return false;
    }

    return true;
}

bool XmlBase::setData(const char *key, const char *data)
{
/*
    if(!m_filename || !m_rootname || !m_xmldoc) return false;

    TiXmlString *pElementKey    = NULL;
    TiXmlString *pElementData   = NULL;

    pElementKey    = new TiXmlString(key);
    pElementData   = new TiXmlString(data);

    if(!pElementKey || !pElementData) return false;

    TiXmlElement *pElementParents = NULL;
    TiXmlElement *pElementChild   = NULL;
    pElementParents = m_xmldoc->RootElement();

    if(!pElementParents)
    {
        pElementParents = new TiXmlElement(m_rootname->c_str());
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
*/

    return true;
}

bool XmlBase::getData(const char *key, char *data)
{
    return true;
}
