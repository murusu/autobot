#ifndef BOT_TASK_H_INCLUDED
#define BOT_TASK_H_INCLUDED

#include "../common/global_value.h"
#include "../xmldata/xml_log.h"
#include "../xmldata/xml_task.h"

class BotTask
{
    private:
        TaskXml* m_taskxml;
        LogXml*  m_logxml;
        size_t   m_taskstatus;

    public:
        BotTask();
        ~BotTask();

        bool initBotTask(const char *pfilename);

        const char* getTaskName();
        size_t getTaskStatus();
        time_t getLastRunDate();
};

#endif // BOT_TASK_H_INCLUDED
