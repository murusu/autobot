#ifndef XML_CLASS_H_INCLUDED
#define XML_CLASS_H_INCLUDED

#include <stdio.h>

#include "global_value.h"
#include "../tinyxml/tinyxml.h"

class XmlBase
{
    private:
        TiXmlDocument *m_xmldoc;
        bool setData(const char *key, const char *data);
        bool getData(const char *key, char *data);

    public:
        XmlBase(const char *filename);
        ~XmlBase();
};

#endif // XML_CLASS_H_INCLUDED
