///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_WINBACKEND_H__
#define __WXFB_WINBACKEND_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/tglbtn.h>
#include <wx/spinctrl.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Frame0
///////////////////////////////////////////////////////////////////////////////
class Frame0 : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText25;
		wxToggleButton* tbDrake;
		wxToggleButton* tbBaron;
		wxToggleButton* tbTRed;
		wxToggleButton* tbTBlue;
		wxToggleButton* tbORed;
		wxToggleButton* tbOBlue;
		wxStaticText* m_stIntv0;
		wxSpinCtrl* m_spinCtrl1;
		wxStaticText* m_stIntv1;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_stLang;
		wxChoice* m_choice1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnDrake( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBaron( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTRed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTBlue( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnORed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOBlue( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLanguageSelected( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Frame0( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("LoL Jungle Timer"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 250,250 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Frame0();
	
};

#endif //__WXFB_WINBACKEND_H__
