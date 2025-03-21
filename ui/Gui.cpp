//
// Created by Legio on 3/21/2025.
//

#include "Gui.h"

namespace ui {
    wxIMPLEMENT_APP(GuiApp);

    bool GuiApp::OnInit() {
        GuiFrame* frame = new GuiFrame("Colonize Space Simulator", wxPoint(50, 50), wxSize(450, 340));
        frame->Show(true);
        return true;
    }

    GuiFrame::GuiFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size) {
        // You can add more GUI components here
    }
} // ui