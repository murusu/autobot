#ifndef TASK_MANAGER_H_INCLUDED
#define TASK_MANAGER_H_INCLUDED

#include <wx/dir.h>
#include <wx/dynarray.h>
#include <wx/arrimpl.cpp>
#include <wx/filefn.h>

#include "bot_task.h"
#include "../autobot_main.h"

class BotTask;
WX_DECLARE_OBJARRAY(BotTask *, TaskArray);


class TaskManager
{
    private:
        TaskArray* m_taskarray;

    public:
        TaskManager();
        ~TaskManager();

        bool initTaskManager();
        void updateTaskList();
};

#endif // TASK_MANAGER_H_INCLUDED
