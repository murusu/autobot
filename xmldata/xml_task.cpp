
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
    TiXmlElement * pelement = this->getElement(TASK_XML_NAME, 0, true);
    return this->getElementText(pelement);
}
/*
time_t TaskXml::getLastRunDate()
{
    TiXmlElement * pelement = this->getElement(TASK_XML_LAST_RUN_DATE, 0, true);
    return atoi(this->getElementText(pelement));
}

void TaskXml::updateLastRunDate()
{
    TiXmlElement * pelement = this->getElement(TASK_XML_LAST_RUN_DATE, 0, true);
    char buffer[16];
    sprintf(buffer,"%ld", wxDateTime::GetTimeNow());
    this->setElementText(pelement, buffer);
}
*/
void TaskXml::commitData()
{
    this->saveXmlFile();
}

size_t TaskXml::getTaskTimerType()
{
    TiXmlElement * pelement = this->getElement(TASK_XML_TIMER, 0, true);
    return atoi(this->getElementAttribute(pelement, TASK_XML_TIMER_TYPE));
}

const char* TaskXml::getTaskTimerTime()
{
    TiXmlElement * pelement = this->getElement(TASK_XML_TIMER, 0, true);
    return this->getElementAttribute(pelement, TASK_XML_TIMER_TIME);
}


void TaskXml::setTaskName(const char* pname)
{
    TiXmlElement * pelement = this->getElement(TASK_XML_NAME, 0, true);
    this->setElementText(pelement, pname);
}

void TaskXml::setTaskTimerType(const char* ptype)
{
    TiXmlElement * pelement = this->getElement(TASK_XML_TIMER, 0, true);
    this->setElementAttribute(pelement, TASK_XML_TIMER_TYPE, ptype);
}

void TaskXml::setTaskTimerTime(const char* ptime)
{
    TiXmlElement * pelement = this->getElement(TASK_XML_TIMER, 0, true);
    this->setElementAttribute(pelement, TASK_XML_TIMER_TIME, ptime);
}
