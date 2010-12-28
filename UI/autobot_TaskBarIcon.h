#ifndef AUTOBOT_TASKBARICON_H_INCLUDED
#define AUTOBOT_TASKBARICON_H_INCLUDED


#include <wx/taskbar.h>

#include "../autobot_main.h"


class AutoBotTaskBarIcon: public wxTaskBarIcon
{
    public:
        AutoBotTaskBarIcon();
        ~AutoBotTaskBarIcon();

    void OnLeftButtonDClick(wxTaskBarIconEvent&);
    void OnMenuRestore(wxCommandEvent&);
    void OnMenuExit(wxCommandEvent&);
    virtual wxMenu *CreatePopupMenu();
};

#endif // AUTOBOT_TASKBARICON_H_INCLUDED
