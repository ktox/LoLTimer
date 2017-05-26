#ifndef MainWindow_H
#define MainWindow_H
#include <wx/icon.h>
#include "wxFB_WinBackend.h"
#include "Timer.h"
#include "icon.xpm"
#include <SFML/Window/Keyboard.hpp>

class MainWindow:public Frame0 {
private:
	Timer *dtimer, *btimer, *trtimer, *tbtimer, *ortimer, *obtimer;
	wxTimer *keytimer;
	void OnTimer( Timer* xtimer, wxToggleButton* tbX, monster_type id );

	void KeyHook( wxTimerEvent& event );
	
protected:
	void OnDrake( wxCommandEvent& event ) ;
	void OnBaron( wxCommandEvent& event ) ;
	void OnTRed( wxCommandEvent& event ) ;
	void OnTBlue( wxCommandEvent& event ) ;
	void OnORed( wxCommandEvent& event ) ;
	void OnOBlue( wxCommandEvent& event ) ;
	void OnLanguageSelected( wxCommandEvent& event ) ;

public:
	MainWindow(wxWindow *parent=NULL);
	void OnBotonCerrar(wxCommandEvent &evt);
	~MainWindow();
};

#endif
