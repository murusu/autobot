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

void AutoBotMainFrame::OnExit(wxCommandEvent& event)
{
    this->Destroy();
}

void AutoBotMainFrame::OnNewTask(wxCommandEvent& event)
{
    DialogTaskConfig *task_dlg = new DialogTaskConfig(this, -1);
    task_dlg->initDialog();
    task_dlg->ShowModal();
    task_dlg->Destroy();
}

void AutoBotMainFrame::OnEditTask(wxCommandEvent& event)
{
    long select_item = m_listCtrl_tasks->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

    if (select_item != -1)
    {

    }
}

void AutoBotMainFrame::OnDeleteTask(wxCommandEvent& event)
{
    long select_item = m_listCtrl_tasks->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

    if (select_item != -1)
    {

    }
}

wxListCtrl* AutoBotMainFrame::getTaskListCtrl()
{
    return m_listCtrl_tasks;
}

DialogTaskConfig::DialogTaskConfig(wxFrame *frame, size_t item_index) : DialogTaskConfigBase(frame)
{
    m_index = item_index;
}

DialogTaskConfig::~DialogTaskConfig()
{
}

bool DialogTaskConfig::initDialog()
{
    return true;
}

void DialogTaskConfig::OnChangeTimeType(wxCommandEvent& event)
{
    m_panel_baseinterval->Show(false);
    m_panel_baseonce->Show(false);
    m_panel_basedaliy->Show(false);
    m_panel_baseweekly->Show(false);
    m_panel_basemonthly->Show(false);

    size_t choice_selection = m_choiceTimeType->GetCurrentSelection() + 1;

    switch(choice_selection)
    {
        case TIMMER_INTERVAL:
            m_panel_baseinterval->Show(true);

            break;

        case TIMMER_SPECIFY:
            m_panel_baseonce->Show(true);
            break;

        case TIMMER_DAILY_INTERVAL:
            m_panel_basedaliy->Show(true);
            break;

        case TIMMER_WEEKLY_INTERVAL:
            m_panel_baseweekly->Show(true);
            break;

        case TIMMER_MONTHLY_INTERVAL:
            m_panel_basemonthly->Show(true);
            break;

        default:
            m_panel_baseinterval->Show(true);
            break;
    }
}

void DialogTaskConfig::OnAddAction(wxCommandEvent& event)
{
    DialogActionConfig *action_dlg = new DialogActionConfig(this);
    //action_dlg->initDialog();
    action_dlg->ShowModal();
    action_dlg->Destroy();
}

void DialogTaskConfig::OnCloseTaskDialog(wxCommandEvent& event)
{
    this->Close();
}


DialogActionConfig::DialogActionConfig(wxDialog *dialg) : DialogActionConfigBase(dialg)
{
}

DialogActionConfig::~DialogActionConfig()
{
}

void DialogActionConfig::OnChangeActionType(wxCommandEvent& event)
{
    m_panel_actionhttp->Show(false);
    m_panel_actionrunprogram->Show(false);

    size_t choice_selection = m_choiceActionType->GetCurrentSelection() + 1;

    switch(choice_selection)
    {
        case ACTION_HTTP:
            m_panel_actionhttp->Show(true);

            break;

        case ACTION_RUN_PROGRAM:
            m_panel_actionrunprogram->Show(true);
            break;

        default:
            m_panel_actionhttp->Show(true);
            break;
    }
}

void DialogActionConfig::OnCloseActionDialog(wxCommandEvent& event)
{
    this->Close();
}

