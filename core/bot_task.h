#ifndef BOT_TASK_H_INCLUDED
#define BOT_TASK_H_INCLUDED

#include <wx/event.h>
#include <wx/timer.h>
#include "../common/global_value.h"
#include "../xmldata/xml_log.h"
#include "../xmldata/xml_task.h"
#include "task_event.h"

class BotTask : public wxEvtHandler
{
    private:
        TaskXml* m_taskxml;
        LogXml*  m_logxml;
        wxTimer* m_timer;
        size_t   m_taskstatus;

    protected:
        void OnTimer(wxTimerEvent& event);

    public:
        BotTask();
        ~BotTask();

        bool initBotTask(const char *pfilename);
        void updateTimer();

        void commitData();

        const char* getTaskName();
        size_t getTaskStatus();
        time_t getLastRunDate();
        const char* getTaskTimerType();
        const char* getTaskTimerTime();

        void setTaskName(const char* pname);
        void updateLastRunDate();
        void setTaskTimerType(const char* ptype);
        void setTaskTimerTime(const char* ptime);
};

#endif // BOT_TASK_H_INCLUDED
