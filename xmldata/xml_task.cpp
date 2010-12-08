#include <wx/filefn.h>
#include "xml_task.h"

TaskXml::TaskXml():XmlBase()
{
}

TaskXml::~TaskXml()
{
}

bool TaskXml::initTaskXml(const char * pfilename)
{
    if(!wxDirExists(wxT(TASK_XML_PATH)))
    {
        if(!wxMkdir(wxT(TASK_XML_PATH))) return false;
    }

    TiXmlString pfullname = TiXmlString(TASK_XML_PATH) + TiXmlString("//") + TiXmlString(pfilename);

    if(!init(pfullname.c_str(), TASK_XML_ROOT_NAME)) return false;
    return true;
}

void TaskXml::setTaskId(const char * pid)
{
    this->setElementText(getElement("id", 0, true), pid);
    this->saveXmlFile();
}
