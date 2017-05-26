#include "wxApp.h"
#include "MainWindow.h"
#include <wx/image.h>

IMPLEMENT_APP(mxApplication)

bool mxApplication::OnInit() {
	wxInitAllImageHandlers();
	new MainWindow(NULL);
	return true;
}

