#ifndef BOT_TASK_H_INCLUDED
#define BOT_TASK_H_INCLUDED

#include <wx/event.h>
#include <wx/timer.h>
#include "../core/global_value.h"
#include "../xmldata/xml_log.h"
#include "../xmldata/xml_task.h"
#include "task_event.h"

class BotTask : public wxEvtHandler
{
    private:
        TaskXml*    m_taskxml;
        LogXml*     m_logxml;
        wxTimer*    m_timer;
        size_t      m_taskstatus;
        wxDateTime* m_activedatetime;

    protected:
        void OnTimer(wxTimerEvent& event);

    public:
        BotTask();
        ~BotTask();

        bool initBotTask(const char *pfilename);
        void updateTimer();

        void commitData();

        const char* getTaskName();
        void setTaskName(const char* pname);

        size_t getTaskStatus();

        time_t getNextRunDate();
        void updateLastRunDate();

        size_t getTaskTimerType();
        void setTaskTimerType(size_t ptype);

        size_t getTaskTimerTime();
        void setTaskTimerTime(const char* ptime);
};

#endif // BOT_TASK_H_INCLUDED
