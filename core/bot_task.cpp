#include "bot_task.h"

DEFINE_EVENT_TYPE(wxEVT_TASK_START)
DEFINE_EVENT_TYPE(wxEVT_TASK_END)
DEFINE_EVENT_TYPE(wxEVT_TASK_ERROR)
IMPLEMENT_DYNAMIC_CLASS(wxTaskEvent, wxNotifyEvent)

BotTask::BotTask()
{
    m_logxml        = NULL;
    m_taskxml       = NULL;
    m_timer         = NULL;
    m_taskstatus    = TASK_STOP;
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

    if(m_timer)
    {
        delete m_timer;
        m_timer = NULL;
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

    m_timer = new wxTimer(this);

    this->Connect(wxID_ANY, wxEVT_TIMER, wxTimerEventHandler(BotTask::OnTimer));

    this->updateTimer();

    return true;
}

void BotTask::commitData()
{
    m_taskxml->commitData();
}

void BotTask::updateTimer()
{
    m_timer->Stop();
    //wxString timmer_type(m_taskxml->getTaskTimerType(), wxConvUTF8);

    switch(m_taskxml->getTaskTimerType())
    {
        case TIMMER_INTERVAL:
            m_timer->Start(wxAtoi(wxString(m_taskxml->getTaskTimerTime(), wxConvUTF8)) * 1000, true);
            break;

        case TIMMER_SPECIFY:
            break;

        case TIMMER_DAILY_INTERVAL:
            break;
    }
}

const char* BotTask::getTaskName()
{
    return m_taskxml->getTaskName();
}

size_t BotTask::getTaskStatus()
{
    return m_taskstatus;
}

time_t BotTask::getNextRunDate()
{
    return 200;
}

size_t BotTask::getTaskTimerType()
{
    return m_taskxml->getTaskTimerType();
}

const char* BotTask::getTaskTimerTime()
{
    return m_taskxml->getTaskTimerTime();
}

void BotTask::setTaskName(const char* pname)
{
    m_taskxml->setTaskName(pname);
}

void BotTask::updateLastRunDate()
{
    //m_taskxml->updateLastRunDate();
}

void BotTask::setTaskTimerType(const char* ptype)
{
    m_taskxml->setTaskTimerType(ptype);
}

void BotTask::setTaskTimerTime(const char* ptime)
{
    m_taskxml->setTaskTimerTime(ptime);
}

void BotTask::OnTimer(wxTimerEvent& event)
{
    printf("timer alert!!");
}
