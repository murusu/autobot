#include "autobot_UI.h"

#include "../resources/taskbar_icon.xpm"

AutoBotMainFrame::AutoBotMainFrame(wxFrame *frame) : AutoBotMainFrameBase(frame)
{
    m_taskBarIcon   = new AutoBotTaskBarIcon();

    wxIcon icon(taskbar_icon_xpm);
    this->SetIcon(icon);
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
