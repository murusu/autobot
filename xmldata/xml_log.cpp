#include "xml_log.h"

LogXml::LogXml():XmlBase()
{
}

LogXml::~LogXml()
{
}

bool LogXml::initLogXml(const char * pfilename)
{
    if(!init(pfilename, "logs")) return false;
    return true;
}
