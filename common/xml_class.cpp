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
/*
bool XmlBase::setData(const char *key, const char *data)
{

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


    return true;
}

bool XmlBase::getData(const char *key, char *data)
{
    return true;
}
*/
/*
int XmlBase::getElementNum(const char *key)
{
    int pElementNum = 0;

    if(!m_rootname || !m_xmldoc) return pElementNum;

    TiXmlHandle pDocHandle(&m_xmldoc);
    TiXmlElement* child2 = docHandle.FirstChild( "Document" ).FirstChild( "Element" ).Child( "Child", 1 ).ToElement();
	if ( child2 )
	{
	}




    return pElementNum;
}
*/
TiXmlElement * XmlBase::getElement(const char *pKeyName, size_t iIndex)
{
    if(!m_rootname || !m_xmldoc) return NULL;

    TiXmlElement *pElementParents = NULL;
    TiXmlElement *pElementChild   = NULL;

    if(!(pElementParents = m_xmldoc->RootElement()))
    {
        pElementChild = new TiXmlElement(m_rootname->c_str());
        m_xmldoc->LinkEndChild(pElementChild);
        pElementParents = pElementChild;
    }

    const char *pNodePosition;

    /*
    char *cNodeKey = (char *)malloc(strlen(pKeyName) + 1);
    const char *cInputString = pKeyName;

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

    pElementParents = pElementChild;
    */
/*
    while(iIndex > 0)
    {
        pElementChild = pElementParents->NextSiblingElement(cNodeKey);

        if(!pElementChild)
        {
            pElementChild = new TiXmlElement(cNodeKey);
            pElementParents->LinkEndChild(pElementChild);
        }

        pElementParents = pElementChild;
    }
*/
    return pElementParents;
    /*

    pElementParents = pElementChild;

    TiXmlText* pText = NULL;
    pText = new TiXmlText(buf);
    if(pElementParents->FirstChild())
    {
        pElementParents->ReplaceChild(pElementParents->FirstChild(), *pText);
    }
    else
    {
        pElementParents->LinkEndChild(pText);
    }

    if(xmlconfigfile->SaveFile(cFileName))
    {
        return true;
    }
    else
    {
        return false;
    }
    */
}

const char * XmlBase::getElementText(TiXmlElement *pElement)
{
    if(!pElement) return NULL;

    return pElement->GetText();
}

const char * XmlBase::getElementAttribute(TiXmlElement *pElement, const char *pAttributeName)
{
    if(!pElement) return NULL;

    return pElement->Attribute(pAttributeName);
}

bool XmlBase::setElementText(TiXmlElement *pElement, const char *pData)
{
    if(!pElement) return false;

    TiXmlText* pXmlText = NULL;
    pXmlText = new TiXmlText(pData);

    if(pElement->FirstChild())
    {
        pElement->ReplaceChild(pElement->FirstChild(), *pXmlText);
    }
    else
    {
        pElement->LinkEndChild(pXmlText);
    }

    return true;
}

bool XmlBase::setElementAttribute(TiXmlElement *pElement, const char *pAttributeName, const char *pData)
{
    if(!pElement) return false;
    pElement->SetAttribute(pAttributeName, pData);

    return true;
}

bool XmlBase::saveXmlFile()
{
    if(!m_xmldoc) return false;

    return m_xmldoc->SaveFile(m_filename->c_str());
}
