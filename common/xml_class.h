#ifndef XML_CLASS_H_INCLUDED
#define XML_CLASS_H_INCLUDED

#include <stdio.h>
#include "../tinyxml/tinyxml.h"

class XmlBase
{
    protected:
        TiXmlDocument   *m_xmldoc;
        TiXmlString     *m_filename;
        TiXmlString     *m_rootname;

    protected:
        size_t  getElementNum(const char *pKeyName);
        TiXmlElement * getElement(const char *pKeyName, size_t iIndex = 0, bool bAutoGenerate = false);

        const char * getElementText(TiXmlElement *pElement);
        const char * getElementAttribute(TiXmlElement *pElement, const char *pAttributeName);

        bool setElementText(TiXmlElement *pElement, const char *pData);
        bool setElementAttribute(TiXmlElement *pElement, const char *pAttributeName, const char *pData);
        bool setElementAttribute(TiXmlElement *pElement, const char *pAttributeName, int pData);

        bool init(const char *filename, const char *rootname = "datas");
        bool saveXmlFile();

    public:
        XmlBase();
        ~XmlBase();
};
#endif // XML_CLASS_H_INCLUDED
