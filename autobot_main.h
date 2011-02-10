#ifndef AUTOBOT_MAIN_H_INCLUDED
#define AUTOBOT_MAIN_H_INCLUDED


#include <wx/wx.h>
#include <wx/snglinst.h>

#include "core/task_manager.h"
#include "UI/autobot_UI.h"

class AutoBotMainFrame;
class TaskManager;

// Define a new application
class AutoBotApp: public wxApp
{
    private:
        wxSingleInstanceChecker *m_checker;
        wxLocale                *m_locale;
        AutoBotMainFrame        *m_appui;
        TaskManager             *m_taskManager;

    public:
        bool    OnInit(void);
        int     OnExit(void);
        void    SetupLocale();

        AutoBotMainFrame* getMainUI();
        TaskManager*      getTaskManager();
};

DECLARE_APP(AutoBotApp)


#endif // AUTOBOT_MAIN_H_INCLUDED
