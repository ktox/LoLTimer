///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 10 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "WinBackend.h"

///////////////////////////////////////////////////////////////////////////

Frame0::Frame0( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 250,250 ), wxSize( 250,250 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Dragon"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText2->Wrap( -1 );
	bSizer9->Add( m_staticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer9, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Baron"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText21->Wrap( -1 );
	bSizer91->Add( m_staticText21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer91, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Their Red"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText22->Wrap( -1 );
	bSizer92->Add( m_staticText22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer92, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Their Blue"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText23->Wrap( -1 );
	bSizer93->Add( m_staticText23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer93, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Our Red"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText24->Wrap( -1 );
	bSizer94->Add( m_staticText24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer94, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Our Blue"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText25->Wrap( -1 );
	bSizer95->Add( m_staticText25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer22->Add( bSizer95, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer21->Add( bSizer22, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	tbDrake = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( tbDrake, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer10, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );
	
	tbBaron = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( tbBaron, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer101, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxVERTICAL );
	
	tbTRed = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( tbTRed, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer102, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );
	
	tbTBlue = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer103->Add( tbTBlue, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer103, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer( wxVERTICAL );
	
	tbORed = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer104->Add( tbORed, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer104, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer105;
	bSizer105 = new wxBoxSizer( wxVERTICAL );
	
	tbOBlue = new wxToggleButton( this, wxID_ANY, wxT("Available"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer105->Add( tbOBlue, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	bSizer23->Add( bSizer105, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer21->Add( bSizer23, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer24->Add( bSizer39, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );
	
	m_stIntv0 = new wxStaticText( this, wxID_ANY, wxT("1st Reminder"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stIntv0->Wrap( -1 );
	bSizer32->Add( m_stIntv0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer26->Add( bSizer32, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );
	
	m_spinCtrl1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 20, 240, 20 );
	m_spinCtrl1->SetFont( wxFont( 24, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer33->Add( m_spinCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer26->Add( bSizer33, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer24->Add( bSizer26, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );
	
	m_stIntv1 = new wxStaticText( this, wxID_ANY, wxT("2nd Reminder"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stIntv1->Wrap( -1 );
	bSizer34->Add( m_stIntv1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer28->Add( bSizer34, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxTE_PROCESS_ENTER );
	m_textCtrl1->SetMaxLength( 2 ); 
	m_textCtrl1->SetFont( wxFont( 20, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer35->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	
	bSizer28->Add( bSizer35, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer24->Add( bSizer28, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );
	
	m_stLang = new wxStaticText( this, wxID_ANY, wxT("Language"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stLang->Wrap( -1 );
	bSizer30->Add( m_stLang, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer29->Add( bSizer30, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );
	
	wxString m_choice1Choices[] = { wxT("English"), wxT("Spanish") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, wxCB_SORT );
	m_choice1->SetSelection( 0 );
	bSizer31->Add( m_choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer29->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	
	bSizer24->Add( bSizer29, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer21->Add( bSizer24, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer21 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tbDrake->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnDrake ), NULL, this );
	tbBaron->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnBaron ), NULL, this );
	tbTRed->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnTRed ), NULL, this );
	tbTBlue->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnTBlue ), NULL, this );
	tbORed->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnORed ), NULL, this );
	tbOBlue->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnOBlue ), NULL, this );
	m_choice1->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( Frame0::OnLanguageSelected ), NULL, this );
}

Frame0::~Frame0()
{
	// Disconnect Events
	tbDrake->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnDrake ), NULL, this );
	tbBaron->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnBaron ), NULL, this );
	tbTRed->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnTRed ), NULL, this );
	tbTBlue->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnTBlue ), NULL, this );
	tbORed->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnORed ), NULL, this );
	tbOBlue->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( Frame0::OnOBlue ), NULL, this );
	m_choice1->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( Frame0::OnLanguageSelected ), NULL, this );
	
}
