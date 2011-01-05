#include "task_manager.h"

WX_DEFINE_OBJARRAY(TaskArray);

TaskManager::TaskManager()
{
    m_taskarray = NULL;
}

TaskManager::~TaskManager()
{
    if(!m_taskarray)
    {
        size_t tasknum = m_taskarray->GetCount();

        for(size_t index = 0; index < tasknum; index++)
        {
            m_taskarray->RemoveAt(index);
        }

        delete m_taskarray;
        m_taskarray = NULL;
    }
}

bool TaskManager::initTaskManager()
{
    m_taskarray = new TaskArray();

    if(!wxDirExists(wxString(TASK_XML_PATH, wxConvUTF8)))
    {
        if(!wxMkdir(wxString(TASK_XML_PATH, wxConvUTF8))) return false;
    }

    if(!wxDirExists(wxString(LOG_XML_PATH, wxConvUTF8)))
    {
        if(!wxMkdir(wxString(LOG_XML_PATH, wxConvUTF8))) return false;
    }

    wxDir dir(wxString(TASK_XML_PATH, wxConvUTF8));
    if(!dir.IsOpened())  return false;

    wxString filename;
    bool cont = dir.GetFirst(&filename, wxEmptyString, wxDIR_FILES);

    while (cont)
    {
        BotTask *ptaskitem = new BotTask();
        ptaskitem->initBotTask(filename.Mid(TASK_XML_PREFIX_LEN, TASK_XML_NAME_LEN).mb_str(wxConvUTF8));
        m_taskarray->Add(ptaskitem);

        cont = dir.GetNext(&filename);
    }

    return true;
}

void TaskManager::updateTaskList()
{
    wxListCtrl* ptasklist = NULL;
    ptasklist = wxGetApp().getMainUI()->getTaskListCtrl();
/*
    tasklist->InsertItem(0, _("001"));
    tasklist->SetItem(0, 1, _("syscode"));
    tasklist->SetItem(0, 2, _("commoditycode"));
    tasklist->SetItem(0, 3, _("name"));
*/
    if(m_taskarray)
    {
        size_t tasknum = m_taskarray->GetCount();

        for(size_t index = 0; index < tasknum; index++)
        {
            ptasklist->InsertItem(index, _("001"));
            ptasklist->SetItem(index, 1, wxString(m_taskarray->Item(index)->getTaskName(), wxConvUTF8));

            switch(m_taskarray->Item(index)->getTaskStatus())
            {
                case TASK_WAITFORRUNING:
                    ptasklist->SetItem(index, 3, _("waiting"));
                    break;

                case TASK_RUNNING:
                    ptasklist->SetItem(index, 3, _("running"));
                    break;

                case TASK_STOP:
                    ptasklist->SetItem(index, 3, _("stop"));
                    break;

                case TASK_WAITFORRETRY:
                    ptasklist->SetItem(index, 3, _("waiting for retry"));
                    break;

                default:
                    ptasklist->SetItem(index, 3, _("unknown"));
                    break;
            }
        }
    }
}
