#include "MainWindow.h"

MainWindow::MainWindow(wxWindow *parent):Frame0(parent){
	dtimer = btimer = trtimer = tbtimer = ortimer = obtimer = NULL;
	SetIcon(wxIcon(icon_xpm));
	
	keytimer = new wxTimer(GetEventHandler());
	Connect( wxEVT_TIMER, wxTimerEventHandler( MainWindow::KeyHook ) );
	keytimer->Start(50, wxTIMER_CONTINUOUS);
	
	Show();
}

void MainWindow::OnBotonCerrar( wxCommandEvent& event ) { 
	Close();
}

void MainWindow::OnTimer( Timer* xtimer, wxToggleButton* tbX, monster_type id )  {
	if( tbX->GetLabel() == "DOWN" ){
		tbX->SetValue(true);
		return;
	}
	delete xtimer;
	tbX->SetLabel( wxT( "DOWN" ) );
	tbX->SetValue(true);
	xtimer = new Timer(tbX, id);
	xtimer->Start(1000, wxTIMER_CONTINUOUS);
}

void MainWindow::OnDrake( wxCommandEvent& event )  {
	OnTimer( dtimer, tbDrake, ID_DRAGON );
}

void MainWindow::OnBaron( wxCommandEvent& event )  {
	OnTimer( btimer, tbBaron, ID_BARON );
}

void MainWindow::OnTRed( wxCommandEvent& event )  {
	OnTimer( trtimer, tbTRed, ID_TRED );
}

void MainWindow::OnTBlue( wxCommandEvent& event )  {
	OnTimer( tbtimer, tbTBlue, ID_TBLUE );
}

void MainWindow::OnORed( wxCommandEvent& event )  {
	OnTimer( ortimer, tbORed, ID_ORED );
}

void MainWindow::OnOBlue( wxCommandEvent& event )  {
	OnTimer( obtimer, tbOBlue, ID_OBLUE );
}

void MainWindow::KeyHook( wxTimerEvent& event ){
	if( sf::Keyboard::isKeyPressed( sf::Keyboard::F6 ) ){
		OnTimer( dtimer, tbDrake, ID_DRAGON );
	}
	else if( sf::Keyboard::isKeyPressed( sf::Keyboard::F7 ) ){
		OnTimer( btimer, tbBaron, ID_BARON );
	}
	else if( sf::Keyboard::isKeyPressed( sf::Keyboard::F8 ) ){
		OnTimer( trtimer, tbTRed, ID_TRED );
	}
	else if( sf::Keyboard::isKeyPressed( sf::Keyboard::F9 ) ){
		OnTimer( tbtimer, tbTBlue, ID_TBLUE );
	}
	else if( sf::Keyboard::isKeyPressed( sf::Keyboard::F10 ) ){
		OnTimer( ortimer, tbORed, ID_ORED );
	}
	else if( sf::Keyboard::isKeyPressed( sf::Keyboard::F11 ) ){
		OnTimer( obtimer, tbOBlue, ID_OBLUE );
	}
}

void MainWindow::OnLanguageSelected( wxCommandEvent& event ){
	event.Skip();
}

MainWindow::~MainWindow(){
	Disconnect( wxEVT_TIMER, wxTimerEventHandler( MainWindow::KeyHook ) );
	delete dtimer; delete btimer; delete trtimer; delete tbtimer; delete ortimer; delete obtimer;
	delete keytimer;
}
