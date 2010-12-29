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
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


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
		wxChoice* m_choice1;
		wxPanel* m_panel_baseinterval;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl_basedays;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrl_basehours;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl_baseminutes;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl_baseseconds;
		wxStaticText* m_staticText7;
		wxPanel* m_panel_taskaction;
		wxPanel* m_panel_taskother;
		wxButton* m_button_tasksave;
	
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
