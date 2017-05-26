#include "Timer.h"

Timer::Timer( wxToggleButton* tg_button, monster_type id ) {
	tb = tg_button;
	creep_id = id;
	sw = new wxStopWatch();
	drag_t = 360000; baron_t = 420000; buff_t = 300000;
	intv0 = 60*1000; intv1 = 10*1000;
}

void Timer::Notify(){	
	int swtime = sw->Time();
	
	if( swtime>=0 && swtime<240000 ) return;
	
	switch( creep_id ){
		
	case ID_DRAGON:
		if( swtime>=(drag_t-intv0) && swtime<(drag_t-intv0+1000) ){
			voz = new wxSound("wav/dragon60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(drag_t-intv0+1000);
			return;
		}
		else if( swtime>=(drag_t-intv1) && swtime<(drag_t-intv1+1000) ){
			if( voz->Create("wav/dragon10.wav") ) voz->Play();
			sw->Start(drag_t-intv1+1000);
			return;
		}
		else if( swtime>=drag_t && swtime<(drag_t+1000) ){
			if( voz->Create("wav/dragon0.wav") ) voz->Play();
			break;
		}
		return;
	case ID_BARON:
		if( swtime>=(baron_t-intv0) && swtime<(baron_t-intv0+1000) ){
			voz = new wxSound("wav/baron60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(baron_t-intv0+1000);
			return;
		}
		else if( swtime>=(baron_t-intv1) && swtime<(baron_t-intv1+1000) ){
			if( voz->Create("wav/baron10.wav") ) voz->Play();
			sw->Start(baron_t-intv1+1000);
			return;
		}
		else if( swtime>=baron_t && swtime<(baron_t+1000) ){
			if( voz->Create("wav/baron0.wav") ) voz->Play();
			break;
		}
		return;
	case ID_TRED:
		if( swtime>=(buff_t-intv0) && swtime<(buff_t-intv0+1000) ){
			voz = new wxSound("wav/tred60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(buff_t-intv0+1000);
			return;
		}
		else if( swtime>=(buff_t-intv1) && swtime<(buff_t-intv1+1000) ){
			if( voz->Create("wav/tred10.wav") ) voz->Play();
			sw->Start(buff_t-intv1+1000);
			return;
		}
		else if( swtime>=buff_t && swtime<(buff_t+1000) ){
			if( voz->Create("wav/tred0.wav") ) voz->Play();
			break;
		}
		return;
	case ID_TBLUE:
		if( swtime>=(buff_t-intv0) && swtime<(buff_t-intv0+1000) ){
			voz = new wxSound("wav/tblue60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(buff_t-intv0+1000);
			return;
		}
		else if( swtime>=(buff_t-intv1) && swtime<(buff_t-intv1+1000) ){
			if( voz->Create("wav/tblue10.wav") ) voz->Play();
			sw->Start(buff_t-intv1+1000);
			return;
		}
		else if( swtime>=buff_t && swtime<(buff_t+1000) ){
			if( voz->Create("wav/tblue0.wav") ) voz->Play();
			break;
		}
		return;
	case ID_ORED:
		if( swtime>=(buff_t-intv0) && swtime<(buff_t-intv0+1000) ){
			voz = new wxSound("wav/ored60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(buff_t-intv0+1000);
			return;
		}
		else if( swtime>=(buff_t-intv1) && swtime<(buff_t-intv1+1000) ){
			if( voz->Create("wav/ored10.wav") ) voz->Play();
			sw->Start(buff_t-intv1+1000);
			return;
		}
		else if( swtime>=buff_t && swtime<(buff_t+1000) ){
			if( voz->Create("wav/ored0.wav") ) voz->Play();
			break;
		}
		return;
	case ID_OBLUE:
		if( swtime>=(buff_t-intv0) && swtime<(buff_t-intv0+1000) ){
			voz = new wxSound("wav/oblue60.wav");
			if( voz->IsOk() ) voz->Play();
			sw->Start(buff_t-intv0+1000);
			return;
		}
		else if( swtime>=(buff_t-intv1) && swtime<(buff_t-intv1+1000) ){
			if( voz->Create("wav/oblue10.wav") ) voz->Play();
			sw->Start(buff_t-intv1+1000);
			return;
		}
		else if( swtime>=buff_t && swtime<(buff_t+1000) ){
			if( voz->Create("wav/oblue0.wav") ) voz->Play();
			break;
		}
		return;
	}
	
	tb->SetLabel( wxT( "Available" ) );
	tb->SetValue( false );
	this->Stop();
	sw->Pause();
	delete sw;
	delete voz;
	tb = NULL; sw = NULL; voz = NULL;
}

Timer::~Timer() {
	
}
