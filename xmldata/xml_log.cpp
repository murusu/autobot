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
    TiXmlString pfullname = TiXmlString(LOG_XML_PATH) + TiXmlString("//") + TiXmlString(pfilename);

    if(!init(pfullname.c_str(), LOG_XML_ROOT_NAME)) return false;
    return true;
}

void LogXml::addLog(const char* plogdate, const char* plogcontent)
{
    TiXmlElement * pelement = this->getElement(LOG_XML_ITEM_NAME, this->getElementNum(LOG_XML_ITEM_NAME), true);
    this->setElementAttribute(pelement, LOG_XML_ITEM_DATE, plogdate);
    this->setElementAttribute(pelement, LOG_XML_ITEM_CONTENT, plogcontent);
    this->saveXmlFile();
}
