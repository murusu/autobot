#ifndef XML_CLASS_H_INCLUDED
#define XML_CLASS_H_INCLUDED

#include <stdio.h>

#include "global_value.h"
#include "../tinyxml/tinyxml.h"

class XmlBase
{
    private:
        TiXmlDocument   *m_xmldoc;
        TiXmlString     *m_filename;
        TiXmlString     *m_rootname;

        bool setData(const char *key, const char *data);
        bool getData(const char *key, char *data);

    public:
        XmlBase();
        ~XmlBase();

        bool init(const char *filename, const char *rootname = "datas");
};

#endif // XML_CLASS_H_INCLUDED
