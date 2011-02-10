///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  4 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __autobot_UIbase__
#define __autobot_UIbase__

#include <wx/intl.h>

#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/calctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_menuItem_exit 1000
#define wxID_menuItem_addtask 1001
#define wxID_menuItem_edittask 1002
#define wxID_menuItem_deltask 1003
#define wxID_choiceTaskType 1004
#define wxID_button_addaction 1005

///////////////////////////////////////////////////////////////////////////////
/// Class AutoBotMainFrameBase
///////////////////////////////////////////////////////////////////////////////
class AutoBotMainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxListCtrl* m_listCtrl_tasks;
		wxStatusBar* m_statusBar1;
		wxMenuBar* m_menubar1;
		wxMenu* m_menu_system;
		wxMenu* m_menu_task;
		wxMenu* m_menu_help;
		wxToolBar* m_toolBar_main;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnExit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewTask( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditTask( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteTask( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AutoBotMainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Auto Bot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxCAPTION|wxCLOSE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL );
		~AutoBotMainFrameBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogTaskConfigBase
///////////////////////////////////////////////////////////////////////////////
class DialogTaskConfigBase : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebook_taskconfig;
		wxPanel* m_panel_taskbase;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText2;
		wxChoice* m_choiceTaskType;
		wxPanel* m_panel9;
		wxPanel* m_panel_baseinterval;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_spinCtrl7;
		wxStaticText* m_staticText7;
		wxPanel* m_panel_baseonce;
		wxStaticText* m_staticText8;
		wxCalendarCtrl* m_calendar2;
		wxStaticText* m_staticText9;
		wxSpinCtrl* m_spinCtrl4;
		wxStaticText* m_staticText10;
		wxSpinCtrl* m_spinCtrl5;
		wxStaticText* m_staticText11;
		wxSpinCtrl* m_spinCtrl6;
		wxPanel* m_panel_basedaliy;
		wxStaticText* m_staticText12;
		wxSpinCtrl* m_spinCtrl1;
		wxStaticText* m_staticText13;
		wxSpinCtrl* m_spinCtrl2;
		wxStaticText* m_staticText14;
		wxSpinCtrl* m_spinCtrl3;
		wxPanel* m_panel_baseweekly;
		wxStaticText* m_staticText18;
		wxCheckBox* m_checkBox2;
		wxCheckBox* m_checkBox3;
		wxCheckBox* m_checkBox4;
		wxCheckBox* m_checkBox5;
		wxCheckBox* m_checkBox6;
		wxCheckBox* m_checkBox7;
		wxCheckBox* m_checkBox8;
		wxStaticText* m_staticText121;
		wxSpinCtrl* m_spinCtrl11;
		wxStaticText* m_staticText131;
		wxSpinCtrl* m_spinCtrl21;
		wxStaticText* m_staticText141;
		wxSpinCtrl* m_spinCtrl31;
		wxPanel* m_panel_basemonthly;
		wxStaticText* m_staticText181;
		wxCheckBox* m_checkBox21;
		wxCheckBox* m_checkBox31;
		wxCheckBox* m_checkBox41;
		wxCheckBox* m_checkBox51;
		wxCheckBox* m_checkBox61;
		wxCheckBox* m_checkBox71;
		wxCheckBox* m_checkBox81;
		wxCheckBox* m_checkBox23;
		wxCheckBox* m_checkBox24;
		wxCheckBox* m_checkBox25;
		wxCheckBox* m_checkBox26;
		wxCheckBox* m_checkBox27;
		wxCheckBox* m_checkBox28;
		wxCheckBox* m_checkBox29;
		wxCheckBox* m_checkBox30;
		wxCheckBox* m_checkBox311;
		wxCheckBox* m_checkBox32;
		wxCheckBox* m_checkBox33;
		wxCheckBox* m_checkBox34;
		wxCheckBox* m_checkBox35;
		wxCheckBox* m_checkBox36;
		wxCheckBox* m_checkBox37;
		wxCheckBox* m_checkBox38;
		wxCheckBox* m_checkBox39;
		wxCheckBox* m_checkBox40;
		wxCheckBox* m_checkBox411;
		wxCheckBox* m_checkBox42;
		wxCheckBox* m_checkBox43;
		wxCheckBox* m_checkBox44;
		wxCheckBox* m_checkBox45;
		wxCheckBox* m_checkBox46;
		wxStaticText* m_staticText1211;
		wxSpinCtrl* m_spinCtrl111;
		wxStaticText* m_staticText1311;
		wxSpinCtrl* m_spinCtrl211;
		wxStaticText* m_staticText1411;
		wxSpinCtrl* m_spinCtrl311;
		wxPanel* m_panel_taskaction;
		wxButton* m_button_addaction;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxListCtrl* m_listCtrl2;
		wxPanel* m_panel_taskother;
		wxButton* m_button_tasksave;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnChangeActionType( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddAction( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogTaskConfigBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Task Setting"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxDEFAULT_DIALOG_STYLE );
		~DialogTaskConfigBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogActionConfigBase
///////////////////////////////////////////////////////////////////////////////
class DialogActionConfigBase : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebook_actionconfig;
		wxPanel* m_panel_condition;
		wxPanel* m_panel_execution;
		wxButton* m_button_actionsave;
	
	public:
		
		DialogActionConfigBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Action Setting"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxDEFAULT_DIALOG_STYLE );
		~DialogActionConfigBase();
	
};

#endif //__autobot_UIbase__
