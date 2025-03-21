//
// Created by Legio on 3/21/2025.
//

#pragma once

#include <wx/wx.h>

namespace ui {

class GuiApp : public wxApp {
public:
  virtual bool OnInit();
};

class GuiFrame : public wxFrame {
public:
  GuiFrame(const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize);
};
} // ui

wxDECLARE_APP(ui::GuiApp);