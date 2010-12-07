#include "xml_task.h"

TaskXml::TaskXml():XmlBase()
{
}

TaskXml::~TaskXml()
{
}

bool TaskXml::initTaskXml(const char * pfilename)
{
    if(!init(pfilename, "task")) return false;
    return true;
}
