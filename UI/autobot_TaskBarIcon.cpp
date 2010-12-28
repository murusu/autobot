#include "autobot_TaskBarIcon.h"

#include "taskbar.xpm"


enum {
    PU_RESTORE = 10001,
    PU_EXIT,
};

AutoBotTaskBarIcon::AutoBotTaskBarIcon():wxTaskBarIcon()
{
    wxIcon icon(taskbar_xpm);
    SetIcon(icon, _("Run"));

    this->Connect (wxEVT_TASKBAR_LEFT_DCLICK, wxTaskBarIconEventHandler(AutoBotTaskBarIcon::OnLeftButtonDClick));
}

AutoBotTaskBarIcon::~AutoBotTaskBarIcon()
{
}

void AutoBotTaskBarIcon::OnLeftButtonDClick(wxTaskBarIconEvent&)
{
    wxGetApp().GetTopWindow()->Show(true);
}

void AutoBotTaskBarIcon::OnMenuRestore(wxCommandEvent& )
{
    wxGetApp().GetTopWindow()->Show(true);
}

void AutoBotTaskBarIcon::OnMenuExit(wxCommandEvent& )
{
    wxGetApp().GetTopWindow()->Destroy();
}


wxMenu *AutoBotTaskBarIcon::CreatePopupMenu()
{
    wxMenu *menu = new wxMenu;
    menu->Append(PU_RESTORE, _("Open Main UI"));
    menu->AppendSeparator();
    menu->Append(PU_EXIT,_("Exit"));

    this->Connect(PU_RESTORE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(AutoBotTaskBarIcon::OnMenuRestore));
    this->Connect(PU_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(AutoBotTaskBarIcon::OnMenuExit));

    return menu;
}
