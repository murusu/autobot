#ifndef AUTOBOT_MAIN_H_INCLUDED
#define AUTOBOT_MAIN_H_INCLUDED


#include <wx/wx.h>
#include <wx/snglinst.h>

#include "core/task_manager.h"
#include "UI/autobot_UI.h"



// Define a new application
class AutoBotApp: public wxApp
{
    private:
        wxSingleInstanceChecker *m_checker;

    public:
        bool    OnInit(void);
        int     OnExit(void);
};

DECLARE_APP(AutoBotApp)


#endif // AUTOBOT_MAIN_H_INCLUDED
