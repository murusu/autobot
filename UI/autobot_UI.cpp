///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  4 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "autobot_UI.h"

///////////////////////////////////////////////////////////////////////////

AutoBotMainFrame::AutoBotMainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	this->SetSizer( bSizer12 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_menubar1 = new wxMenuBar( 0 );
	m_menu_task = new wxMenu();
	wxMenuItem* m_menuItem_addtask;
	m_menuItem_addtask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("Add a new task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_addtask );
	
	wxMenuItem* m_separator1;
	m_separator1 = m_menu_task->AppendSeparator();
	
	wxMenuItem* m_menuItem_exit;
	m_menuItem_exit = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_exit );
	
	m_menubar1->Append( m_menu_task, _("Task") ); 
	
	m_menu_help = new wxMenu();
	wxMenuItem* m_menuItem_about;
	m_menuItem_about = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("About...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItem_about );
	
	m_menubar1->Append( m_menu_help, _("Help") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	
	this->Centre( wxBOTH );
}

AutoBotMainFrame::~AutoBotMainFrame()
{
}
