///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  4 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "autobot_UIbase.h"

#include "../resources/toolsbar_run.xpm"

///////////////////////////////////////////////////////////////////////////

AutoBotMainFrameBase::AutoBotMainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrl_tasks = new wxListCtrl( this, wxID_ANY, wxPoint( -1,-1 ), wxSize( -1,310 ), wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VIRTUAL|wxLC_VRULES );
	m_listCtrl_tasks->SetFont( wxFont( 10, 70, 90, 90, false, wxEmptyString ) );
	
	bSizer12->Add( m_listCtrl_tasks, 0, wxEXPAND, 2 );
	
	this->SetSizer( bSizer12 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_menubar1 = new wxMenuBar( 0 );
	m_menu_system = new wxMenu();
	wxMenuItem* m_menuItem_config;
	m_menuItem_config = new wxMenuItem( m_menu_system, wxID_ANY, wxString( _("&Config") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_system->Append( m_menuItem_config );
	
	wxMenuItem* m_menuItem_exit;
	m_menuItem_exit = new wxMenuItem( m_menu_system, wxID_ANY, wxString( _("&Exit") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_system->Append( m_menuItem_exit );
	
	m_menubar1->Append( m_menu_system, _("&System") ); 
	
	m_menu_task = new wxMenu();
	wxMenuItem* m_menuItem_runtask;
	m_menuItem_runtask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Run task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_runtask );
	
	wxMenuItem* m_menuItem_stoptask;
	m_menuItem_stoptask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Stop task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_stoptask );
	
	wxMenuItem* m_separator1;
	m_separator1 = m_menu_task->AppendSeparator();
	
	wxMenuItem* m_menuItem_addtask;
	m_menuItem_addtask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Add task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_addtask );
	
	wxMenuItem* m_menuItem_deltask;
	m_menuItem_deltask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Delete task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_deltask );
	
	m_menubar1->Append( m_menu_task, _("&Task") ); 
	
	m_menu_help = new wxMenu();
	wxMenuItem* m_menuItem_about;
	m_menuItem_about = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("&About...") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItem_about );
	
	m_menubar1->Append( m_menu_help, _("&Help") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	m_toolBar_main = this->CreateToolBar( wxTB_FLAT|wxTB_HORIZONTAL, wxID_ANY ); 
	m_toolBar_main->AddTool( wxID_ANY, _("tool"), wxBitmap( toolsbar_run_xpm ), wxNullBitmap, wxITEM_NORMAL, _("Run Task"), wxEmptyString ); 
	m_toolBar_main->AddTool( wxID_ANY, _("tool"), wxBitmap( toolsbar_run_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString ); 
	m_toolBar_main->AddTool( wxID_ANY, _("tool"), wxBitmap( toolsbar_run_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString ); 
	m_toolBar_main->AddSeparator(); 
	m_toolBar_main->AddTool( wxID_ANY, _("tool"), wxBitmap( toolsbar_run_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString ); 
	m_toolBar_main->AddTool( wxID_ANY, _("tool"), wxBitmap( toolsbar_run_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString ); 
	m_toolBar_main->Realize();
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AutoBotMainFrameBase::OnCloseFrame ) );
}

AutoBotMainFrameBase::~AutoBotMainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AutoBotMainFrameBase::OnCloseFrame ) );
	
}

DialogTaskConfigBase::DialogTaskConfigBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook_taskconfig = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_taskbase = new wxPanel( m_notebook_taskconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	bSizer8->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( m_panel_taskbase, wxID_ANY, _("Task Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer11->Add( m_staticText1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( m_panel_taskbase, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	bSizer11->Add( m_textCtrl1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer9->Add( bSizer11, 1, wxEXPAND|wxLEFT, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( m_panel_taskbase, wxID_ANY, _("Action Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer13->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString m_choice1Choices[] = { _("Interval"), _("Once"), _("Daily"), _("Weekly"), _("Monthly"), _("Yearly") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( m_panel_taskbase, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer13->Add( m_choice1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer9->Add( bSizer13, 1, wxEXPAND|wxLEFT, 5 );
	
	bSizer8->Add( bSizer9, 3, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_panel_baseinterval = new wxPanel( m_panel_taskbase, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Interval:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer17->Add( m_staticText3, 0, wxALL, 5 );
	
	bSizer16->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl_basedays = new wxTextCtrl( m_panel_baseinterval, wxID_ANY, _("0"), wxDefaultPosition, wxSize( 50,-1 ), wxTE_RIGHT );
	bSizer19->Add( m_textCtrl_basedays, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	m_staticText4 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Days"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer19->Add( m_staticText4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer18->Add( bSizer19, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl_basehours = new wxTextCtrl( m_panel_baseinterval, wxID_ANY, _("0"), wxDefaultPosition, wxSize( 50,-1 ), wxTE_RIGHT );
	bSizer20->Add( m_textCtrl_basehours, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	m_staticText5 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Hours"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer20->Add( m_staticText5, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer18->Add( bSizer20, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl_baseminutes = new wxTextCtrl( m_panel_baseinterval, wxID_ANY, _("0"), wxDefaultPosition, wxSize( 50,-1 ), wxTE_RIGHT );
	bSizer21->Add( m_textCtrl_baseminutes, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	m_staticText6 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer21->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer18->Add( bSizer21, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl_baseseconds = new wxTextCtrl( m_panel_baseinterval, wxID_ANY, _("0"), wxDefaultPosition, wxSize( 50,-1 ), wxTE_RIGHT );
	bSizer22->Add( m_textCtrl_baseseconds, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );
	
	m_staticText7 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer22->Add( m_staticText7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer18->Add( bSizer22, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	bSizer18->Add( bSizer23, 4, wxEXPAND, 5 );
	
	bSizer16->Add( bSizer18, 6, wxEXPAND, 5 );
	
	m_panel_baseinterval->SetSizer( bSizer16 );
	m_panel_baseinterval->Layout();
	bSizer16->Fit( m_panel_baseinterval );
	bSizer10->Add( m_panel_baseinterval, 1, wxEXPAND | wxALL, 5 );
	
	bSizer8->Add( bSizer10, 21, wxEXPAND, 5 );
	
	m_panel_taskbase->SetSizer( bSizer8 );
	m_panel_taskbase->Layout();
	bSizer8->Fit( m_panel_taskbase );
	m_notebook_taskconfig->AddPage( m_panel_taskbase, _("Base"), true );
	m_panel_taskaction = new wxPanel( m_notebook_taskconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer24->Add( bSizer25, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );
	
	bSizer24->Add( bSizer26, 1, wxEXPAND, 5 );
	
	m_panel_taskaction->SetSizer( bSizer24 );
	m_panel_taskaction->Layout();
	bSizer24->Fit( m_panel_taskaction );
	m_notebook_taskconfig->AddPage( m_panel_taskaction, _("Actions"), false );
	m_panel_taskother = new wxPanel( m_notebook_taskconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook_taskconfig->AddPage( m_panel_taskother, _("Others"), false );
	
	bSizer3->Add( m_notebook_taskconfig, 1, wxEXPAND | wxALL, 5 );
	
	bSizer2->Add( bSizer3, 10, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_button_tasksave = new wxButton( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_tasksave, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

DialogTaskConfigBase::~DialogTaskConfigBase()
{
}

DialogActionConfigBase::DialogActionConfigBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook_actionconfig = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_condition = new wxPanel( m_notebook_actionconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook_actionconfig->AddPage( m_panel_condition, _("Condition"), true );
	m_panel_execution = new wxPanel( m_notebook_actionconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook_actionconfig->AddPage( m_panel_execution, _("Execution"), false );
	
	bSizer6->Add( m_notebook_actionconfig, 1, wxEXPAND | wxALL, 5 );
	
	bSizer5->Add( bSizer6, 10, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_button_actionsave = new wxButton( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button_actionsave, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer5 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

DialogActionConfigBase::~DialogActionConfigBase()
{
}
