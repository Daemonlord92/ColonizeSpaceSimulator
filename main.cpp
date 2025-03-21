#include <iostream>
#include <wx/app.h>

#include "ui/Gui.h"

wxIMPLEMENT_APP_NO_MAIN(ui::GuiApp);

int main(int argc, char** argv) {
    wxEntry(argc, argv);
    return 0;
}