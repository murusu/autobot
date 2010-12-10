#include "bot_task.h"

BotTask::BotTask()
{
    m_logxml = NULL;
    m_taskxml = NULL;
}

BotTask::~BotTask()
{
    if(m_logxml)
    {
        delete m_logxml;
        m_logxml = NULL;
    }

    if(m_taskxml)
    {
        delete m_taskxml;
        m_taskxml = NULL;
    }
}

bool BotTask::initBotTask(const char *pfilename)
{
    m_taskxml = new TaskXml();
    TiXmlString ptaskname = TiXmlString("task_") + TiXmlString(pfilename) + TiXmlString(".xml");
    m_taskxml->initTaskXml(ptaskname.c_str());

    m_logxml = new LogXml();
    TiXmlString plogname = TiXmlString("log_") + TiXmlString(pfilename) + TiXmlString(".xml");
    m_logxml->initLogXml(plogname.c_str());

    return true;
}

const char* BotTask::getTaskName()
{
    return m_taskxml->getTaskName();
}

size_t BotTask::getTaskStatus()
{
    return m_taskstatus;
}

time_t BotTask::getLastRunDate()
{
    return m_taskxml->getLastRunDate();
}
