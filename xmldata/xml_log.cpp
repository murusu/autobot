#include <wx/filefn.h>
#include "xml_log.h"

LogXml::LogXml():XmlBase()
{
}

LogXml::~LogXml()
{
}

bool LogXml::initLogXml(const char * pfilename)
{
    if(!wxDirExists(wxT(LOG_XML_PATH)))
    {
        if(!wxMkdir(wxT(LOG_XML_PATH))) return false;
    }

    TiXmlString pfullname = TiXmlString(LOG_XML_PATH) + TiXmlString("//") + TiXmlString(pfilename);

    if(!init(pfullname.c_str(), "logs")) return false;
    return true;
}
