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
	
	m_listCtrl_tasks = new wxListCtrl( this, wxID_ANY, wxPoint( -1,-1 ), wxSize( -1,310 ), wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	m_listCtrl_tasks->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	
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
	m_menuItem_exit = new wxMenuItem( m_menu_system, wxID_menuItem_exit, wxString( _("&Exit") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_system->Append( m_menuItem_exit );
	
	m_menubar1->Append( m_menu_system, _("&System") ); 
	
	m_menu_task = new wxMenu();
	wxMenuItem* m_menuItem_updatelist;
	m_menuItem_updatelist = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Update Task List") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_updatelist );
	
	wxMenuItem* m_separator2;
	m_separator2 = m_menu_task->AppendSeparator();
	
	wxMenuItem* m_menuItem_runtask;
	m_menuItem_runtask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Run Task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_runtask );
	
	wxMenuItem* m_menuItem_stoptask;
	m_menuItem_stoptask = new wxMenuItem( m_menu_task, wxID_ANY, wxString( _("&Stop Task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_stoptask );
	
	wxMenuItem* m_separator1;
	m_separator1 = m_menu_task->AppendSeparator();
	
	wxMenuItem* m_menuItem_addtask;
	m_menuItem_addtask = new wxMenuItem( m_menu_task, wxID_menuItem_addtask, wxString( _("&Add Task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_addtask );
	
	wxMenuItem* m_menuItem_edittask;
	m_menuItem_edittask = new wxMenuItem( m_menu_task, wxID_menuItem_edittask, wxString( _("&Edit Task") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_task->Append( m_menuItem_edittask );
	
	wxMenuItem* m_menuItem_deltask;
	m_menuItem_deltask = new wxMenuItem( m_menu_task, wxID_menuItem_deltask, wxString( _("&Delete Task") ) , wxEmptyString, wxITEM_NORMAL );
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
	this->Connect( wxID_menuItem_exit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnExit ) );
	this->Connect( wxID_menuItem_addtask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnNewTask ) );
	this->Connect( wxID_menuItem_edittask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnEditTask ) );
	this->Connect( wxID_menuItem_deltask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnDeleteTask ) );
}

AutoBotMainFrameBase::~AutoBotMainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( AutoBotMainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_menuItem_exit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnExit ) );
	this->Disconnect( wxID_menuItem_addtask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnNewTask ) );
	this->Disconnect( wxID_menuItem_edittask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnEditTask ) );
	this->Disconnect( wxID_menuItem_deltask, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AutoBotMainFrameBase::OnDeleteTask ) );
	
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
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( m_panel_taskbase, wxID_ANY, _("Task Name:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
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
	
	wxString m_choiceTaskTypeChoices[] = { _("Interval"), _("Once"), _("Daily"), _("Weekly"), _("Monthly") };
	int m_choiceTaskTypeNChoices = sizeof( m_choiceTaskTypeChoices ) / sizeof( wxString );
	m_choiceTaskType = new wxChoice( m_panel_taskbase, wxID_choiceTaskType, wxDefaultPosition, wxSize( 150,-1 ), m_choiceTaskTypeNChoices, m_choiceTaskTypeChoices, 0 );
	m_choiceTaskType->SetSelection( 0 );
	bSizer13->Add( m_choiceTaskType, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer9->Add( bSizer13, 1, wxEXPAND|wxLEFT, 5 );
	
	bSizer8->Add( bSizer9, 3, wxEXPAND|wxTOP, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_panel9 = new wxPanel( m_panel_taskbase, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );
	
	m_panel_baseinterval = new wxPanel( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Interval:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText3->Wrap( -1 );
	bSizer16->Add( m_staticText3, 0, wxALL, 5 );
	
	m_spinCtrl7 = new wxSpinCtrl( m_panel_baseinterval, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 95,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	bSizer16->Add( m_spinCtrl7, 0, wxLEFT, 5 );
	
	m_staticText7 = new wxStaticText( m_panel_baseinterval, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer16->Add( m_staticText7, 0, wxALL, 5 );
	
	m_panel_baseinterval->SetSizer( bSizer16 );
	m_panel_baseinterval->Layout();
	bSizer16->Fit( m_panel_baseinterval );
	bSizer33->Add( m_panel_baseinterval, 1, wxEXPAND, 0 );
	
	m_panel_baseonce = new wxPanel( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_baseonce->Hide();
	
	wxBoxSizer* bSizer251;
	bSizer251 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer261;
	bSizer261 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( m_panel_baseonce, wxID_ANY, _("Date:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText8->Wrap( -1 );
	bSizer261->Add( m_staticText8, 0, wxALL, 5 );
	
	m_calendar2 = new wxCalendarCtrl( m_panel_baseonce, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	bSizer261->Add( m_calendar2, 0, wxALL, 5 );
	
	bSizer251->Add( bSizer261, 4, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText9 = new wxStaticText( m_panel_baseonce, wxID_ANY, _("Time:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText9->Wrap( -1 );
	bSizer27->Add( m_staticText9, 0, wxALL, 5 );
	
	m_spinCtrl4 = new wxSpinCtrl( m_panel_baseonce, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer27->Add( m_spinCtrl4, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( m_panel_baseonce, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer27->Add( m_staticText10, 0, wxLEFT|wxRIGHT|wxTOP, 7 );
	
	m_spinCtrl5 = new wxSpinCtrl( m_panel_baseonce, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer27->Add( m_spinCtrl5, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( m_panel_baseonce, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer27->Add( m_staticText11, 0, wxALL, 7 );
	
	m_spinCtrl6 = new wxSpinCtrl( m_panel_baseonce, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer27->Add( m_spinCtrl6, 0, wxALL, 5 );
	
	bSizer251->Add( bSizer27, 1, wxEXPAND, 5 );
	
	m_panel_baseonce->SetSizer( bSizer251 );
	m_panel_baseonce->Layout();
	bSizer251->Fit( m_panel_baseonce );
	bSizer33->Add( m_panel_baseonce, 1, wxEXPAND, 0 );
	
	m_panel_basedaliy = new wxPanel( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_basedaliy->Hide();
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( m_panel_basedaliy, wxID_ANY, _("Time:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText12->Wrap( -1 );
	bSizer32->Add( m_staticText12, 0, wxALL, 5 );
	
	m_spinCtrl1 = new wxSpinCtrl( m_panel_basedaliy, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer32->Add( m_spinCtrl1, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( m_panel_basedaliy, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer32->Add( m_staticText13, 0, wxTOP, 7 );
	
	m_spinCtrl2 = new wxSpinCtrl( m_panel_basedaliy, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer32->Add( m_spinCtrl2, 0, wxALL, 5 );
	
	m_staticText14 = new wxStaticText( m_panel_basedaliy, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer32->Add( m_staticText14, 0, wxTOP, 7 );
	
	m_spinCtrl3 = new wxSpinCtrl( m_panel_basedaliy, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer32->Add( m_spinCtrl3, 0, wxALL, 5 );
	
	m_panel_basedaliy->SetSizer( bSizer32 );
	m_panel_basedaliy->Layout();
	bSizer32->Fit( m_panel_basedaliy );
	bSizer33->Add( m_panel_basedaliy, 1, wxEXPAND, 0 );
	
	m_panel_baseweekly = new wxPanel( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_baseweekly->Hide();
	
	wxBoxSizer* bSizer321;
	bSizer321 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer262;
	bSizer262 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText18 = new wxStaticText( m_panel_baseweekly, wxID_ANY, _("Date:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetMinSize( wxSize( 100,-1 ) );
	
	bSizer262->Add( m_staticText18, 0, wxALL, 5 );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 3, 3, 0, 0 );
	
	gSizer1->SetMinSize( wxSize( 450,-1 ) ); 
	m_checkBox2 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("SunDay"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox2, 0, wxALL, 5 );
	
	m_checkBox3 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Monday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox3, 0, wxALL, 5 );
	
	m_checkBox4 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Tuesday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox4, 0, wxALL, 5 );
	
	m_checkBox5 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Wednesday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox5, 0, wxALL, 5 );
	
	m_checkBox6 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Thursday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox6, 0, wxALL, 5 );
	
	m_checkBox7 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Friday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox7, 0, wxALL, 5 );
	
	m_checkBox8 = new wxCheckBox( m_panel_baseweekly, wxID_ANY, _("Sunday"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_checkBox8, 0, wxALL, 5 );
	
	bSizer262->Add( gSizer1, 0, wxEXPAND, 5 );
	
	bSizer241->Add( bSizer262, 1, wxEXPAND, 5 );
	
	bSizer321->Add( bSizer241, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer252;
	bSizer252 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText121 = new wxStaticText( m_panel_baseweekly, wxID_ANY, _("Time:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText121->Wrap( -1 );
	bSizer252->Add( m_staticText121, 0, wxALL, 5 );
	
	m_spinCtrl11 = new wxSpinCtrl( m_panel_baseweekly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer252->Add( m_spinCtrl11, 0, wxALL, 5 );
	
	m_staticText131 = new wxStaticText( m_panel_baseweekly, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer252->Add( m_staticText131, 0, wxTOP, 7 );
	
	m_spinCtrl21 = new wxSpinCtrl( m_panel_baseweekly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer252->Add( m_spinCtrl21, 0, wxALL, 5 );
	
	m_staticText141 = new wxStaticText( m_panel_baseweekly, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	bSizer252->Add( m_staticText141, 0, wxTOP, 7 );
	
	m_spinCtrl31 = new wxSpinCtrl( m_panel_baseweekly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer252->Add( m_spinCtrl31, 0, wxALL, 5 );
	
	bSizer321->Add( bSizer252, 1, wxEXPAND, 0 );
	
	m_panel_baseweekly->SetSizer( bSizer321 );
	m_panel_baseweekly->Layout();
	bSizer321->Fit( m_panel_baseweekly );
	bSizer33->Add( m_panel_baseweekly, 1, wxEXPAND | wxALL, 0 );
	
	m_panel_basemonthly = new wxPanel( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_basemonthly->Hide();
	
	wxBoxSizer* bSizer3211;
	bSizer3211 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2411;
	bSizer2411 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer2621;
	bSizer2621 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText181 = new wxStaticText( m_panel_basemonthly, wxID_ANY, _("Date:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181->Wrap( -1 );
	m_staticText181->SetMinSize( wxSize( 100,-1 ) );
	
	bSizer2621->Add( m_staticText181, 0, wxALL, 5 );
	
	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 6, 6, 0, 0 );
	
	gSizer11->SetMinSize( wxSize( 450,-1 ) ); 
	m_checkBox21 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("1"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox21, 0, wxALL, 5 );
	
	m_checkBox31 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("2"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox31, 0, wxALL, 5 );
	
	m_checkBox41 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox41, 0, wxALL, 5 );
	
	m_checkBox51 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("4"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox51, 0, wxALL, 5 );
	
	m_checkBox61 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("5"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox61, 0, wxALL, 5 );
	
	m_checkBox71 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("6"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox71, 0, wxALL, 5 );
	
	m_checkBox81 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("7"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox81, 0, wxALL, 5 );
	
	m_checkBox23 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("8"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox23, 0, wxALL, 5 );
	
	m_checkBox24 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("9"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox24, 0, wxALL, 5 );
	
	m_checkBox25 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("10"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox25, 0, wxALL, 5 );
	
	m_checkBox26 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("11"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox26, 0, wxALL, 5 );
	
	m_checkBox27 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("12"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox27, 0, wxALL, 5 );
	
	m_checkBox28 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("13"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox28, 0, wxALL, 5 );
	
	m_checkBox29 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("14"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox29, 0, wxALL, 5 );
	
	m_checkBox30 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("15"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox30, 0, wxALL, 5 );
	
	m_checkBox311 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("16"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox311, 0, wxALL, 5 );
	
	m_checkBox32 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("17"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox32, 0, wxALL, 5 );
	
	m_checkBox33 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("18"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox33, 0, wxALL, 5 );
	
	m_checkBox34 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("19"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox34, 0, wxALL, 5 );
	
	m_checkBox35 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("20"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox35, 0, wxALL, 5 );
	
	m_checkBox36 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("21"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox36, 0, wxALL, 5 );
	
	m_checkBox37 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("22"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox37, 0, wxALL, 5 );
	
	m_checkBox38 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("23"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox38, 0, wxALL, 5 );
	
	m_checkBox39 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("24"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox39, 0, wxALL, 5 );
	
	m_checkBox40 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("25"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox40, 0, wxALL, 5 );
	
	m_checkBox411 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("26"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox411, 0, wxALL, 5 );
	
	m_checkBox42 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("27"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox42, 0, wxALL, 5 );
	
	m_checkBox43 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("28"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox43, 0, wxALL, 5 );
	
	m_checkBox44 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("29"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox44, 0, wxALL, 5 );
	
	m_checkBox45 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("30"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox45, 0, wxALL, 5 );
	
	m_checkBox46 = new wxCheckBox( m_panel_basemonthly, wxID_ANY, _("31"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer11->Add( m_checkBox46, 0, wxALL, 5 );
	
	bSizer2621->Add( gSizer11, 4, wxEXPAND, 5 );
	
	bSizer2411->Add( bSizer2621, 1, wxEXPAND, 5 );
	
	bSizer3211->Add( bSizer2411, 4, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2521;
	bSizer2521 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1211 = new wxStaticText( m_panel_basemonthly, wxID_ANY, _("Time:"), wxDefaultPosition, wxSize( 100,-1 ), 0 );
	m_staticText1211->Wrap( -1 );
	bSizer2521->Add( m_staticText1211, 0, wxALL, 5 );
	
	m_spinCtrl111 = new wxSpinCtrl( m_panel_basemonthly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer2521->Add( m_spinCtrl111, 0, wxALL, 5 );
	
	m_staticText1311 = new wxStaticText( m_panel_basemonthly, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311->Wrap( -1 );
	bSizer2521->Add( m_staticText1311, 0, wxTOP, 7 );
	
	m_spinCtrl211 = new wxSpinCtrl( m_panel_basemonthly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer2521->Add( m_spinCtrl211, 0, wxALL, 5 );
	
	m_staticText1411 = new wxStaticText( m_panel_basemonthly, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1411->Wrap( -1 );
	bSizer2521->Add( m_staticText1411, 0, wxTOP, 7 );
	
	m_spinCtrl311 = new wxSpinCtrl( m_panel_basemonthly, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer2521->Add( m_spinCtrl311, 0, wxALL, 5 );
	
	bSizer3211->Add( bSizer2521, 1, wxEXPAND, 0 );
	
	m_panel_basemonthly->SetSizer( bSizer3211 );
	m_panel_basemonthly->Layout();
	bSizer3211->Fit( m_panel_basemonthly );
	bSizer33->Add( m_panel_basemonthly, 1, wxEXPAND | wxALL, 5 );
	
	m_panel9->SetSizer( bSizer33 );
	m_panel9->Layout();
	bSizer33->Fit( m_panel9 );
	bSizer10->Add( m_panel9, 1, wxEXPAND, 5 );
	
	bSizer8->Add( bSizer10, 18, wxALL|wxEXPAND, 5 );
	
	m_panel_taskbase->SetSizer( bSizer8 );
	m_panel_taskbase->Layout();
	bSizer8->Fit( m_panel_taskbase );
	m_notebook_taskconfig->AddPage( m_panel_taskbase, _("Base"), false );
	m_panel_taskaction = new wxPanel( m_notebook_taskconfig, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button_addaction = new wxButton( m_panel_taskaction, wxID_button_addaction, _("Add Action"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button_addaction, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_button4 = new wxButton( m_panel_taskaction, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_button5 = new wxButton( m_panel_taskaction, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button5, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_button6 = new wxButton( m_panel_taskaction, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer24->Add( bSizer25, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrl2 = new wxListCtrl( m_panel_taskaction, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
	m_listCtrl2->SetMinSize( wxSize( -1,250 ) );
	
	bSizer26->Add( m_listCtrl2, 0, wxALL|wxEXPAND, 5 );
	
	bSizer24->Add( bSizer26, 6, wxEXPAND, 5 );
	
	m_panel_taskaction->SetSizer( bSizer24 );
	m_panel_taskaction->Layout();
	bSizer24->Fit( m_panel_taskaction );
	m_notebook_taskconfig->AddPage( m_panel_taskaction, _("Actions"), true );
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
	
	// Connect Events
	m_choiceTaskType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DialogTaskConfigBase::OnChangeActionType ), NULL, this );
	m_button_addaction->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogTaskConfigBase::OnAddAction ), NULL, this );
}

DialogTaskConfigBase::~DialogTaskConfigBase()
{
	// Disconnect Events
	m_choiceTaskType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DialogTaskConfigBase::OnChangeActionType ), NULL, this );
	m_button_addaction->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogTaskConfigBase::OnAddAction ), NULL, this );
	
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
