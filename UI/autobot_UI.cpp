#include "autobot_UI.h"

#include "../resources/taskbar_icon.xpm"

AutoBotMainFrame::AutoBotMainFrame(wxFrame *frame) : AutoBotMainFrameBase(frame)
{
    m_taskBarIcon   = new AutoBotTaskBarIcon();

    wxIcon icon(taskbar_icon_xpm);
    this->SetIcon(icon);

    m_listCtrl_tasks->InsertColumn(0, _("ID"), wxLIST_FORMAT_CENTRE, 0);
    m_listCtrl_tasks->InsertColumn(1, _("Task Name"), wxLIST_FORMAT_CENTRE, 180);
    m_listCtrl_tasks->InsertColumn(2, _("Next Activity Time"), wxLIST_FORMAT_CENTRE, 270);
    m_listCtrl_tasks->InsertColumn(3, _("Status"), wxLIST_FORMAT_CENTRE, 100);

    this->Centre();
}

AutoBotMainFrame::~AutoBotMainFrame()
{
    delete m_taskBarIcon;
}

void AutoBotMainFrame::OnCloseFrame( wxCloseEvent& event )
{
    this->Show(false);
    event.Veto();
}

wxListCtrl* AutoBotMainFrame::getTaskListCtrl()
{
    return m_listCtrl_tasks;
}
