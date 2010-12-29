#ifndef AUTOBOT_UI_H_INCLUDED
#define AUTOBOT_UI_H_INCLUDED

#include "autobot_UIbase.h"
#include "autobot_TaskBarIcon.h"

class AutoBotTaskBarIcon;

class AutoBotMainFrame : public AutoBotMainFrameBase
{
    private:
        AutoBotTaskBarIcon *m_taskBarIcon;

    protected:
        void OnCloseFrame(wxCloseEvent& event);

	public:
		AutoBotMainFrame(wxFrame *frame);
		~AutoBotMainFrame();
};

#endif // AUTOBOT_UI_H_INCLUDED
