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

    if(!wxDirExists(wxT(TASK_XML_PATH)))
    {
        if(!wxMkdir(wxT(TASK_XML_PATH))) return false;
    }

    if(!wxDirExists(wxT(LOG_XML_PATH)))
    {
        if(!wxMkdir(wxT(LOG_XML_PATH))) return false;
    }

    wxDir dir(wxT(TASK_XML_PATH));
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
