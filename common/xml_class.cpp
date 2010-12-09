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

size_t  XmlBase::getElementNum(const char *pKeyName)
{
    const char *pNodePositionStart  = NULL;

    TiXmlElement *pElementNode      = NULL;
    size_t iElementNum              = 0;

    pNodePositionStart = strrchr(pKeyName, '/');
    if(!pNodePositionStart)
    {
        pNodePositionStart = pKeyName;
    }
    else
    {
        pNodePositionStart++;
    }

    pElementNode = getElement(pKeyName);

    while(pElementNode)
    {
         iElementNum++;

        pElementNode = pElementNode->NextSiblingElement(pNodePositionStart);
    }

    return iElementNum;
}

TiXmlElement * XmlBase::getElement(const char *pKeyName, size_t iIndex, bool bAutoGenerate)
{
    if(!m_rootname || !m_xmldoc) return NULL;

    TiXmlElement *pElementNode      = NULL;
    TiXmlElement *pElementChild     = NULL;
    TiXmlElement *pElementSibling   = NULL;

    if(!(pElementNode = m_xmldoc->RootElement()))
    {
        if(!bAutoGenerate) return NULL;

        pElementChild = new TiXmlElement(m_rootname->c_str());
        m_xmldoc->LinkEndChild(pElementChild);
        pElementNode = pElementChild;
    }

    const char *pNodePositionStart  = NULL;
    const char *pNodePositionEnd    = NULL;
    char *pNodeKey = (char *)malloc(sizeof(pKeyName));

    pNodePositionStart = pKeyName;
    pNodePositionEnd = strchr(pKeyName, '/');

    while(pNodePositionEnd)
    {
        memset(pNodeKey, '\0', sizeof(pKeyName));

        strncpy(pNodeKey, pNodePositionStart, pNodePositionEnd - pNodePositionStart);
        pNodeKey[pNodePositionEnd - pNodePositionStart] = '\0';
        pNodePositionStart = pNodePositionEnd + 1;

        if(strlen(pNodeKey))
        {

        }

        pElementChild = pElementNode->FirstChildElement(pNodeKey);

        if(!pElementChild)
        {
            if(!bAutoGenerate)
            {
                free(pNodeKey);
                return NULL;
            }

            pElementChild = new TiXmlElement(pNodeKey);
            pElementNode->LinkEndChild(pElementChild);
        }

        pElementNode = pElementChild;

        pNodePositionEnd = strchr(pNodePositionStart, '/');
    }

    pElementChild = pElementNode->FirstChildElement(pNodePositionStart);

    if(!pElementChild)
    {
        if(!bAutoGenerate)
        {
            free(pNodeKey);
            return NULL;
        }

        pElementChild = new TiXmlElement(pNodePositionStart);
        pElementNode->LinkEndChild(pElementChild);
    }

    pElementNode = pElementChild;

    while(iIndex >0)
    {
        pElementSibling = pElementNode->NextSiblingElement(pNodePositionStart);

        if(!pElementSibling)
        {
            if(!bAutoGenerate)
            {
                free(pNodeKey);
                return NULL;
            }

            pElementSibling = new TiXmlElement(pNodePositionStart);
            pElementNode->Parent()->LinkEndChild(pElementSibling);
        }

        pElementNode = pElementSibling;
        iIndex--;
    }

    free(pNodeKey);
    return pElementNode;
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

