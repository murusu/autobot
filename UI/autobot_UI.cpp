#include "autobot_UI.h"

//#include "taskbar.xpm"

AutoBotMainFrame::AutoBotMainFrame(wxFrame *frame) : AutoBotMainFrameBase(frame)
{
    m_taskBarIcon   = new AutoBotTaskBarIcon();

    //wxIcon icon(taskbar_xpm);
    //this->SetIcon(icon);
    this->Centre();
}

AutoBotMainFrame::~AutoBotMainFrame()
{
}

void AutoBotMainFrame::OnCloseFrame( wxCloseEvent& event )
{
    this->Show(false);
    event.Veto();
}
