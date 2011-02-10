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
        void OnExit(wxCommandEvent& event);
        void OnNewTask(wxCommandEvent& event);
        void OnEditTask(wxCommandEvent& event);
		void OnDeleteTask(wxCommandEvent& event);

	public:
		AutoBotMainFrame(wxFrame *frame);
		~AutoBotMainFrame();

		wxListCtrl* getTaskListCtrl();
};

class DialogTaskConfig : public DialogTaskConfigBase
{
	private:
        size_t m_index;

	public:
		DialogTaskConfig(wxFrame* frame, size_t item_index);
		~DialogTaskConfig();

		bool initDialog();
		void OnChangeActionType(wxCommandEvent& event);
		void OnAddAction(wxCommandEvent& event);
};

class DialogActionConfig : public DialogActionConfigBase
{
	public:
		DialogActionConfig(wxDialog* dialg);
		~DialogActionConfig();
};

#endif // AUTOBOT_UI_H_INCLUDED
