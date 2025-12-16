#pragma once
#include<wx/wx.h>

class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString& title);
private:
    void CreateControls();
    void SetupSizers();
    void BlindEventHandlers();
    void AddSavedTasks();

    void OnAddButtonClicked(wxCommandEvent& evt);
    void OnInputEnter(wxCommandEvent& evt);
    void OnListKeyDown(wxKeyEvent& evt);
    void OnClearButtonClicked(wxCommandEvent& evt);
    void OnWindowClosed(wxCloseEvent& evt);

    void AddTaskFromInput();
    void DeleteSelectedTask();
    void MoveSelectedTask(int offsset);
    void SwapTasks(int i, int j);

    wxPanel* panel;
    wxStaticText* headLineText;
    wxTextCtrl* inputField;
    wxButton* addButton;
    wxCheckListBox* checkListBox;
    wxButton* clearButton;
};
