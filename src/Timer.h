#ifndef TIMER_H
#define TIMER_H
#include <wx/timer.h>
#include <wx/tglbtn.h>
#include <wx/sound.h>

enum monster_type { ID_DRAGON, ID_BARON, ID_ORED, ID_OBLUE, ID_TRED, ID_TBLUE };

class Timer : public wxTimer {
private:
	Timer(){ tb = NULL; sw = NULL; voz = NULL; };
	wxToggleButton* tb;
	monster_type creep_id;
	wxStopWatch* sw;
	wxSound* voz;
	int intv0, intv1, drag_t, baron_t, buff_t;
protected:
public:
	Timer( wxToggleButton* tg_button, monster_type id );
	void Notify();
	~Timer();
};

#endif

