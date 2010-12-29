#include "autobot_UI.h"

#include "../resources/taskbar_icon.xpm"

AutoBotMainFrame::AutoBotMainFrame(wxFrame *frame) : AutoBotMainFrameBase(frame)
{
    m_taskBarIcon   = new AutoBotTaskBarIcon();

    wxIcon icon(taskbar_icon_xpm);
    this->SetIcon(icon);

    m_listCtrl_tasks->InsertColumn(0, _("Task Name"));
    m_listCtrl_tasks->InsertColumn(1, _("Next Activity Time"));
    m_listCtrl_tasks->InsertColumn(2, _("Status"));

    m_listCtrl_tasks->SetColumnWidth(0, 80);
    m_listCtrl_tasks->SetColumnWidth(1, 200);
    m_listCtrl_tasks->SetColumnWidth(2, 80);

    m_listCtrl_tasks->SetItemCount(1000);

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
