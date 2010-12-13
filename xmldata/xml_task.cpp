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
    TiXmlString pfullname = TiXmlString(TASK_XML_PATH) + TiXmlString("//") + TiXmlString(pfilename);

    if(!init(pfullname.c_str(), TASK_XML_ROOT_NAME)) return false;
    return true;
}
/*
void TaskXml::setTaskId(const char * pid)
{
    this->setElementText(getElement("id", 0, true), pid);
    this->saveXmlFile();
}
*/
void TaskXml::addAction(const char * pcontent)
{
    //TiXmlElement * pelement = this->getElement(TASK_XML_ACTION, this->getElementNum(TASK_XML_ACTION), true);
    //this->setElementAttribute(pelement, TASK_XML_ACTION_CONTENT, pcontent);
    //this->saveXmlFile();
    this->modifyAction(this->getElementNum(TASK_XML_ACTION), pcontent);
}

void TaskXml::deleteAciton(size_t index)
{
    TiXmlElement * pelement = this->getElement(TASK_XML_ACTION, index, true);
    pelement->Parent()->RemoveChild(pelement);
}

void TaskXml::modifyAction(size_t index, const char * pcontent)
{
    TiXmlElement * pelement = this->getElement(TASK_XML_ACTION, index, true);
    this->setElementAttribute(pelement, TASK_XML_ACTION_CONTENT, pcontent);
}

const char* TaskXml::getTaskName()
{
    return "test";
}

time_t TaskXml::getLastRunDate()
{
    return 5122012;
}

void TaskXml::updateLastRunDate(time_t newdate)
{
}

void TaskXml::commitData()
{
    this->saveXmlFile();
}
