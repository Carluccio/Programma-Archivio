//
// APPLICAZIONE ARCHIVIO
// di Carlo Sala
// Via Plinio 6 - Torno (Co)
// Tel. 031 417092 Cell. 3207591458
// 01/03/2014 V.3.1.5
// License:   	wxWidgets license (www.wxwidgets.org)
//
#include <iostream>
#include <wx/wxprec.h>
#include <windows.h>
#ifdef __BORLANDC__
#pragma hdrstop
#endif
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include <wx/wxsqlite3.h>
#include <ctime>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/filepicker.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/checkbox.h>
#include <wx/hyperlink.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/frame.h>
#include <wx/event.h>
#include <wx/object.h>
#include <wx/cmndata.h>
#include <wx/print.h>
#include <wx/printdlg.h>
#include <cmath>
#include <wx/textfile.h>
#include <wx/imaglist.h>
//#include <wx/graphics.h>
wxSQLite3Database* db = new wxSQLite3Database();
wxSQLite3Database* db1 = new wxSQLite3Database();
wxDateTime now=wxDateTime::Now();
wxFont font(*wxNORMAL_FONT);
wxString W="";
wxString S="";
wxString M="";
wxString P="";
wxString ORDINE="";
wxString QUANDO="";
wxString POSTA="";
int range;
int x =0;
int y =0;
int RIX;
int RIY;
int RFX;
int RFY;
int RISX;
int RISY;
int R1=0;
int L=0;
int E=0;
int T=0;
int Y=0;
int K=0;
int I=0;
int A = 0;
int flagStampa =0;
int NR= 0;
int NE = 0;
int X1= 0;
int Y1= 0;
int X2= 0;
int Y2 = 0;
int DI = 0;
int RI =0;
int IO;
int KO;
int U;
int letti;
int inseriti;
int noninseriti;
int OF;
int GY=0;
float SC;
wxString ORD;
wxString Intestazione;
wxString Indirizzo;
wxString Citta;
wxString Stm;
wxString Stm1 ;
wxString RB;
wxString CT1;
wxString CT2;
wxString CT3;
wxString CT4;
wxString CT5;
wxString CT6;
wxString CT7;
wxString CT8;
wxString CT9;
wxString CT10;
wxString CT11;
wxString CT12;
wxString CT13;
wxString CT14;
wxString CT15;
wxString CT16;
wxString CT17;
wxString CT18;
wxString CT19;
wxString CT20;
wxString DA1;
wxString DA2;
wxString DA3;
wxString DA4;
wxString DA5;
wxString DA6;
wxString DA7;
wxString DA8;
wxString DA9;
wxString DA10;
wxString DA11;
int CONT1 = 0;
wxString SQL1;
wxString SQL2;
wxString path;
wxSQLite3ResultSet set;
wxSQLite3ResultSet set0;
wxString wsql;
wxString conf0;
wxString conf1;
wxString conf2;
wxString conf3;
wxString conf4;
wxString conf5;
wxString conf6;
wxString conf7;
wxString conf8;
wxString conf9;
wxString conf10;
wxString conf11;
wxString xp;
wxString yp;
wxString SET1;
wxString SET2;
wxString SET3;
wxString SET4;
wxString SET5;
wxString SET6;
wxString SET7;
wxString SET8;
wxString SET9;
wxString SET10;
wxString SET11;
wxString SET12;
wxString SET13;
bool loop_on;
bool gaug = false;
#define ID_MYFRAME 1000

class MyApp: public wxApp
{
public:
	virtual bool OnInit();
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame escluso #endif //__GUI_H__
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame
{
private:

protected:
	wxWindow* newDim = new wxWindow;
	wxNotebook* m_notebook1;
	wxPanel* m_panel1;
	wxStaticText* m_staticText1;
	wxTextCtrl* m_textCtrl1;
	wxStaticText* m_staticText2;
	wxTextCtrl* m_textCtrl2;
	wxStaticText* m_staticText3;
	wxTextCtrl* m_textCtrl3;
	wxStaticText* m_staticText4;
	wxTextCtrl* m_textCtrl4;
	wxStaticText* m_staticText5;
	wxTextCtrl* m_textCtrl5;
	wxStaticText* m_staticText6;
	wxTextCtrl* m_textCtrl6;
	wxStaticText* m_staticText7;
	wxTextCtrl* m_textCtrl7;
	wxStaticText* m_staticText8;
	wxTextCtrl* m_textCtrl8;
	wxBitmapButton* m_bpButton11;
	wxBitmapButton* m_bpButton12;
	wxBitmapButton* m_bpButton13;
	wxBitmapButton* m_bpButton14;
	wxBitmapButton* m_bpButton15;
	wxStaticText* m_staticText9;
	wxTextCtrl* m_textCtrl9;
	wxStaticText* m_staticText12;
	wxTextCtrl* m_textCtrl10;
	wxStaticText* m_staticText13;
	wxTextCtrl* m_textCtrl11;
	wxDirPickerCtrl* m_dirPicker2;
	wxDirPickerCtrl* m_dirPicker21;
	wxBitmapButton* m_bpButton17;
	wxButton* m_button1;
	wxButton* m_button2;
	wxButton* m_button3;
	wxButton* m_button4;
	wxButton* m_button5;
	wxButton* m_button6;
	wxButton* m_button7;
	wxButton* m_button8;
	wxStaticText* m_staticText14;
	wxTextCtrl* m_textCtrl12;
	wxButton* m_button9;
	wxStaticLine* m_staticline1;
	wxStaticLine* m_staticline2;
	wxStaticText* m_staticText15;
	wxRadioButton* m_radioBtn1;
	wxRadioButton* m_radioBtn2;
	wxRadioButton* m_radioBtn3;
	wxTextCtrl* m_textCtrl13;
	wxRadioButton* m_radioBtn4;
	wxRadioButton* m_radioBtn5;
	wxRadioButton* m_radioBtn6;
	wxTextCtrl* m_textCtrl14;
	wxStaticText* m_staticText141;
	wxStaticText* m_staticText151;
	wxCheckBox* m_checkBox1;
	wxCheckBox* m_checkBox4;
	wxTextCtrl* m_textCtrl15;
	wxTextCtrl* m_textCtrl16;
	wxTextCtrl* m_textCtrl17;
	wxCheckBox* m_checkBox2;
	wxStaticText* m_staticText16;
	wxTextCtrl* m_textCtrl18;
	wxStaticText* m_staticText17;
	wxTextCtrl* m_textCtrl19;
	wxRadioButton* m_radioBtn7;
	wxRadioButton* m_radioBtn8;
	wxCheckBox* m_checkBox3;
	wxBitmapButton* m_bpButton9;
	wxStaticText* m_staticText21;
	wxStaticBitmap* m_bitmap1;
	wxGenericHyperlinkCtrl* m_hyperlink1;
	wxPanel* m_panel2;
	wxTextCtrl* m_textCtrl23;
	wxStaticText* m_staticText251;
	wxBitmapButton* m_bpButton5;
	wxStaticText* m_staticText24;
	wxBitmapButton* m_bpButton6;
	wxStaticText* m_staticText25;
	wxPanel* m_panel3;
	wxStaticText* m_staticText211;
	wxTextCtrl* m_textCtrl20;
	wxStaticText* m_staticText22;
	wxTextCtrl* m_textCtrl21;
	wxStaticText* m_staticText23;
	wxTextCtrl* m_textCtrl22;
	wxStaticText* m_staticText261;
	wxTextCtrl* m_textCtrl24;
	wxStaticText* m_staticText27;
	wxTextCtrl* m_textCtrl25;
	wxStaticText* m_staticText28;
	wxTextCtrl* m_textCtrl26;
	wxStaticText* m_staticText29;
	wxTextCtrl* m_textCtrl27;
	wxStaticText* m_staticText30;
	wxTextCtrl* m_textCtrl28;
	wxStaticText* m_staticText31;
	wxTextCtrl* m_textCtrl29;
	wxStaticText* m_staticText32;
	wxTextCtrl* m_textCtrl30;
	wxStaticText* m_staticText33;
	wxButton* m_button13;
	wxBitmapButton* m_bpButton10;
	wxStaticText* m_staticText26;
	wxRadioButton* m_radioBtn9;
	wxRadioButton* m_radioBtn10;
	wxButton* m_button14;
	wxFilePickerCtrl* m_filePicker1;
	wxBitmapButton* m_bpButton111;
	wxStaticText* m_staticText34;
	wxTextCtrl* m_textCtrl31;
	wxStaticText* m_staticText35;
	wxStaticText* m_staticText36;
	wxStatusBar* m_statusBar1;
	virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}
	// Virtual event handlers, overide them in your derived class
	virtual void OnKeyPress( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void Idle( wxIdleEvent& event ) {
		event.Skip();
	}

	virtual void OnCloseFrame( wxCloseEvent& event ) {
		event.Skip();
	}

	virtual void PageChanged( wxNotebookEvent& event ) {
		event.Skip();
	}
	virtual void Focus1( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus2( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus3( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus4( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus5( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus6( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus7( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus8( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton7OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton2OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton3OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton1OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton8OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Focus9( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus10( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void Focus11( wxFocusEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton4OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button1OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button2OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button3OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button4OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button5OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button6OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button7OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button8OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl12( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void m_button9OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio1( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio2( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio3( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl13( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio4( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio5( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void OnRadio6( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl14( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void OnCheck1( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl15( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl16( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl17( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void OnCheck2( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl18( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void Ctrl19( wxKeyEvent& event ) {
		event.Skip();
	}
	virtual void Bt7( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Bt8( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Cb3( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton9OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton5OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton6OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}

	virtual void m_button13OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton10OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_button14OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void Check4( wxCommandEvent& event ) {
		event.Skip();
	}
	virtual void m_bpButton111OnButtonClick( wxCommandEvent& event ) {
		event.Skip();
	}
public:

	MyFrame( wxWindow* parent, wxWindowID id = ID_MYFRAME, const wxString& title = _T(" Archivio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL|wxCLIP_CHILDREN);

	~MyFrame();

};
class MyDialog1 : public wxDialog
{
private:

protected:
	wxWindow* newDim = new wxWindow;
	wxStaticText* m_staticText36;
	wxStaticText* m_staticText37;
	wxStaticText* m_staticText38;
	wxStaticText* m_staticText41;
	virtual dpiz(int dxy) {return newDim->wxWindow::FromDIP(dxy);}

public:
	wxGauge* m_gauge1;
	wxStaticText* m_staticText39;
	wxStaticText* m_staticText40;
	wxStaticText* m_staticText42;
	MyDialog1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title =  _T(" Riparazione Archivio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxFULL_REPAINT_ON_RESIZE|wxSYSTEM_MENU);
	~MyDialog1();

};

////////////////////////////////////////////////////
// CLASSE DERIVATA DA class ....{ a   ... };
////////////////////////////////////////////////////
class guiMyFrame : public MyFrame
{

protected:
	// Handlers for MyFrame events.
	void OnKeyPress( wxKeyEvent& event );
	void OnCloseFrame( wxCloseEvent& event );
	void Idle( wxIdleEvent& event );
	void PageChanged( wxNotebookEvent& event );
	void Focus1( wxFocusEvent& event );
	void Focus2( wxFocusEvent& event );
	void Focus3( wxFocusEvent& event );
	void Focus4( wxFocusEvent& event );
	void Focus5( wxFocusEvent& event );
	void Focus6( wxFocusEvent& event );
	void Focus7( wxFocusEvent& event );
	void Focus8( wxFocusEvent& event );
	void m_bpButton7OnButtonClick( wxCommandEvent& event );
	void m_bpButton2OnButtonClick( wxCommandEvent& event );
	void m_bpButton3OnButtonClick( wxCommandEvent& event );
	void m_bpButton1OnButtonClick( wxCommandEvent& event );
	void m_bpButton8OnButtonClick( wxCommandEvent& event );
	void Focus9( wxFocusEvent& event );
	void Focus10( wxFocusEvent& event );
	void Focus11( wxFocusEvent& event );
	void m_bpButton4OnButtonClick( wxCommandEvent& event );
	void m_button1OnButtonClick( wxCommandEvent& event );
	void m_button2OnButtonClick( wxCommandEvent& event );
	void m_button3OnButtonClick( wxCommandEvent& event );
	void m_button4OnButtonClick( wxCommandEvent& event );
	void m_button5OnButtonClick( wxCommandEvent& event );
	void m_button6OnButtonClick( wxCommandEvent& event );
	void m_button7OnButtonClick( wxCommandEvent& event );
	void m_button8OnButtonClick( wxCommandEvent& event );
	void Ctrl12( wxKeyEvent& event );
	void m_button9OnButtonClick( wxCommandEvent& event );
	void OnRadio1( wxCommandEvent& event );
	void OnRadio2( wxCommandEvent& event );
	void OnRadio3( wxCommandEvent& event );
	void Ctrl13( wxKeyEvent& event );
	void OnRadio4( wxCommandEvent& event );
	void OnRadio5( wxCommandEvent& event );
	void OnRadio6( wxCommandEvent& event );
	void Ctrl14( wxKeyEvent& event );
	void OnCheck1( wxCommandEvent& event );
	void Ctrl15( wxKeyEvent& event );
	void Ctrl16( wxKeyEvent& event );
	void Ctrl17( wxKeyEvent& event );
	void OnCheck2( wxCommandEvent& event );
	void Ctrl18( wxKeyEvent& event );
	void Ctrl19( wxKeyEvent& event );
	void Bt7( wxCommandEvent& event );
	void Bt8( wxCommandEvent& event );
	void Cb3( wxCommandEvent& event );
	void m_bpButton9OnButtonClick( wxCommandEvent& event );
	void m_bpButton5OnButtonClick( wxCommandEvent& event );
	void m_bpButton6OnButtonClick( wxCommandEvent& event );
	void m_button13OnButtonClick( wxCommandEvent& event );
	void m_bpButton10OnButtonClick( wxCommandEvent& event );
	void m_button14OnButtonClick( wxCommandEvent& event );
	void Check4( wxCommandEvent& event );
	void m_bpButton111OnButtonClick( wxCommandEvent& event );



	void sql() {
		if(OF > 1) {
			if (!(conf1=="")) {
				if (m_radioBtn7->GetValue()) {
					W=conf1;
				} else {
					W=conf0;
				}
				S=conf2;
				P=conf0;
				W.Replace ( "'", "''", true);
				S.Replace ( "'", "''", true);
				P.Replace ( "'", "''", true);
				if (m_radioBtn7->GetValue()) {
					W = "'"+W+S+P+"'";
				} else {
					W = "'"+W+"'";
				}
			}
		}
		if (m_radioBtn7->GetValue()) {
			ORDINE = " order by (COGNOME || NOME || ID) "+ORD;
			QUANDO= " (COGNOME || NOME || ID) ";
		} else {
			ORDINE = " order by ID "+ORD;
			QUANDO=" ID ";
		}
		switch (OF) {
		case 1:
			QUANDO="";
			break;
		case 2:
			QUANDO = QUANDO+" > "+W+" AND";
			break;
		case 3:
			QUANDO = QUANDO+" < "+W+" AND";
			break;
		default:
			break;
		}
		wsql = wxT("SELECT * FROM Nominativi WHERE"+QUANDO+" COGNOME LIKE "+CT12+" AND  ATTIVITA "+SQL1+" LIKE "+CT13+" AND  CITTA "+SQL2+" LIKE "+CT14+" AND  SOCIO LIKE "+CT15+" AND  EMAIL NOT LIKE "+CT20+
		           " AND  DATA BETWEEN "+CT16+" AND "+CT17+" AND  INIZIATIVE BETWEEN "+CT18+" AND "+CT19+ORDINE+";");

	}

	void disattivaNavigazione() {
		m_button5->Enable( false );
		m_button6->Enable( false );
		m_button7->Enable( false );
		m_button8->Enable( false );
		m_bpButton5->Enable( false );
		m_bpButton6->Enable( false );
		m_bpButton111->Enable( false );
		m_bpButton9->Enable( false );
		m_button3->Enable( false );
		m_button4->Enable( false );
	}
	void leggiNomi() {
		conf0="";
		conf1="";
		conf2="";
		conf3="";
		conf4="";
		conf5="";
		conf6="";
		conf7="";
		conf8="";
		conf9="";
		conf10="";
		conf11="";
		conf0= set.GetAsString(0);
		conf1= set.GetAsString(1);
		conf2= set.GetAsString(2);
		conf3= set.GetAsString(3);
		conf4= set.GetAsString(4);
		conf5= set.GetAsString(5);
		conf6= set.GetAsString(6);
		conf7= set.GetAsString(7);
		conf8= set.GetAsString(8);
		conf9= set.GetAsString(9);
		conf10= set.GetAsString(10);
		conf11= set.GetAsString(11);
		m_textCtrl1->SetValue(set.GetAsString(1));
		m_textCtrl2->SetValue(set.GetAsString(2));
		m_textCtrl3->SetValue(set.GetAsString(3));
		m_textCtrl4->SetValue(set.GetAsString(4));
		m_textCtrl5->SetValue(set.GetAsString(5));
		m_textCtrl6->SetValue(set.GetAsString(6));
		m_textCtrl7->SetValue(set.GetAsString(7));
		m_textCtrl8->SetValue(set.GetAsString(10));
		m_textCtrl9->SetValue(set.GetAsString(8));
		m_textCtrl10->SetValue(set.GetAsString(9));
		m_textCtrl11->SetValue(set.GetAsString(11));
	}
	void daDatabase() {
		DA1="";
		DA2="";
		DA3="";
		DA4="";
		DA5="";
		DA6="";
		DA7="";
		DA8="";
		DA9="";
		DA10="";
		DA11="";
		DA1 = conf1;
		DA1.Replace ( "'", "''", true);
		DA1 = "'"+DA1+"'";
		DA2 = conf2;
		DA2.Replace ( "'", "''", true);
		DA2 = "'"+DA2+"'";
		DA3 = conf3;
		DA3.Replace ( "'", "''", true);
		DA3 = "'"+DA3+"'";
		DA4 = conf4;
		DA4.Replace ( "'", "''", true);
		DA4 = "'"+DA4+"'";
		DA5 = conf5;
		DA5.Replace ( "'", "''", true);
		DA5 = "'"+DA5+"'";
		DA6 = conf6;
		DA6.Replace ( "'", "''", true);
		DA6 = "'"+DA6+"'";
		DA7 = conf7;
		DA7.Replace ( "'", "''", true);
		DA7 = "'"+DA7+"'";
		DA8 = conf10;
		DA8.Replace ( "'", "''", true);
		DA8 = "'"+DA8+"'";
		DA9 = conf8;
		DA9.Replace ( "'", "''", true);
		DA9 = "'"+DA9+"'";
		DA10 = conf9;
		DA10.Replace ( "'", "''", true);
		DA10 = "'"+DA10+"'";
		DA11 = conf11;
		DA11.Replace ( "'", "''", true);
		DA11 = "'"+DA11+"'";
	}
	float round(float f) {
		float y, d;
		R1=f;
		y = f;
		d = y - R1;
		if (d > 0) {
			R1= R1+1;
		}
		return R1;
	}
	void controllo1() {
		wxString M(m_textCtrl8->GetValue());
		int I=M.Find("@");
		int A1 = atoi(m_textCtrl10->GetValue());
		int A2 = atoi(m_textCtrl11->GetValue());
		if ((m_textCtrl1->GetValue()) =="") {
			wxMessageBox(_T("Campo cognome vuoto !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl1 ->SetFocus();
			CONT1=1;
		} else if((!((I>0)) && (I<30)) && (!(m_textCtrl8->GetValue() ==""))) {
			wxMessageBox(_T("VALORE CAMPO E@Mail:\n non ammesso !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl8 ->SetFocus();
			CONT1 = 2;
		} else if ((A1 < 1000) && (!(m_textCtrl10->GetValue() ==""))) {
			wxMessageBox(_T("VALORE NELL' ANNO:\n non ammesso !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl10 ->SetFocus();
			CONT1 = 3;
		} else if ((A2 < 1000) && (!(m_textCtrl11->GetValue() ==""))) {
			wxMessageBox(_T("VALORE ANNO DELL' ULTIMO INTERVANTO:\n non ammesso !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl11 ->SetFocus();
			CONT1 = 4;
		} else {
			CONT1 = 0;
		}
	}
	void aDatabase() {
		CT1="";
		CT2="";
		CT3="";
		CT4="";
		CT5="";
		CT6="";
		CT7="";
		CT8="";
		CT9="";
		CT10="";
		CT11="";
		CT12="";
		CT13="";
		CT14="";
		CT15="";
		CT16="";
		CT17="";
		CT18="";
		CT19="";
		W="";
		S="";
		P="";
		ORDINE="";
		QUANDO="";
		CT1= (m_textCtrl1->GetValue().MakeUpper());
		CT1.Replace ( "'", "''", true);
		CT1.Trim(false);
		CT1.Trim(true);
		CT1 = "'"+CT1+"'";
		CT2= (m_textCtrl2->GetValue().MakeUpper());
		CT2.Replace ( "'", "''", true);
		CT2.Trim(false);
		CT2.Trim(true);
		CT2 = "'"+CT2+"'";
		CT3= (m_textCtrl3->GetValue().MakeUpper());
		CT3.Replace ( "'", "''", true);
		CT3.Trim(false);
		CT3.Trim(true);
		CT3 = "'"+CT3+"'";
		CT4= (m_textCtrl4->GetValue().MakeUpper());
		CT4.Replace ( "'", "''", true);
		CT4.Trim(false);
		CT4.Trim(true);
		CT4 = "'"+CT4+"'";
		CT5= (m_textCtrl5->GetValue().MakeUpper());
		CT5.Replace ( "'", "''", true);
		CT5.Trim(false);
		CT5.Trim(true);
		CT5 = "'"+CT5+"'";
		CT6= (m_textCtrl6->GetValue().MakeUpper());
		CT6.Replace ( "'", "''", true);
		CT6.Trim(false);
		CT6.Trim(true);
		CT6 = "'"+CT6+"'";
		CT7= (m_textCtrl7->GetValue().MakeUpper());
		CT7.Replace ( "'", "''", true);
		CT7.Trim(false);
		CT7.Trim(true);
		CT7 = "'"+CT7+"'";
		CT8= (m_textCtrl8->GetValue().MakeLower());
		CT8.Replace ( "'", "''", true);
		CT8.Trim(false);
		CT8.Trim(true);
		CT8 = "'"+CT8+"'";
		CT9= (m_textCtrl9->GetValue().MakeUpper());
		CT9.Replace ( "'", "''", true);
		CT9.Trim(false);
		CT9.Trim(true);
		CT9 = "'"+CT9+"'";
		CT10= (m_textCtrl10->GetValue().MakeUpper());
		CT10.Replace ( "'", "''", true);
		CT10.Trim(false);
		CT10.Trim(true);
		CT10 = "'"+CT10+"'";
		CT11= (m_textCtrl11->GetValue().MakeUpper());
		CT11.Replace ( "'", "''", true);
		CT11.Trim(false);
		CT11.Trim(true);
		CT11 = "'"+CT11+"'";
		CT12= (m_textCtrl12->GetValue().MakeUpper());
		CT12.Replace ( "'", "''", true);
		CT12 = "'"+CT12+"%'";
		CT13= (m_textCtrl13->GetValue().MakeUpper());
		CT13.Replace ( "'", "''", true);
		CT13 = "'"+CT13+"%'";
		CT14= (m_textCtrl14->GetValue().MakeUpper());
		CT14.Replace ( "'", "''", true);
		CT14 = "'"+CT14+"%'";
		CT15 = "'"+(m_textCtrl15->GetValue().MakeUpper())+"%'";
		CT16 = "'"+(m_textCtrl16->GetValue().MakeUpper())+"'";
		CT17 = "'"+(m_textCtrl17->GetValue().MakeUpper())+"'";
		CT18 = "'"+(m_textCtrl18->GetValue().MakeUpper())+"'";
		CT19 = "'"+(m_textCtrl19->GetValue().MakeUpper())+"'";
	}
	void disattivaCampi() {
		m_textCtrl1->Enable( false );
		m_textCtrl2->Enable( false );
		m_textCtrl3->Enable( false );
		m_textCtrl4->Enable( false );
		m_textCtrl5->Enable( false );
		m_textCtrl6->Enable( false );
		m_textCtrl7->Enable( false );
		m_textCtrl8->Enable( false );
		m_textCtrl9->Enable( false );
		m_textCtrl10->Enable( false );
		m_textCtrl11->Enable( false );
	}


	wxSQLite3Database* initDB(void) {
		wxString testDBName;
		if(!(wxDirExists("/Archivio"))) {
			wxMkdir("/Archivio",wxPATH_MKDIR_FULL);
		}
		if (m_dirPicker21->GetPath() == "") {
			testDBName =wxT("/Archivio/Archivio.db");
		} else {
			if(!(wxDirExists(m_dirPicker21->GetPath()))) {
				wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
				             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
				m_dirPicker21->SetPath("");
				return 0;
			}
			testDBName = m_dirPicker21->GetPath() + wxT("/Archivio.db");
		}

		if (wxFileExists(testDBName)) {
			db->Open(testDBName);
			if (!(db->TableExists(wxT("Nominativi")))) {
				db->ExecuteUpdate(wxT("CREATE TABLE Nominativi (ID integer primary key default null, COGNOME varchar(20), NOME varchar(20), ATTIVITA varchar(10), INDIRIZZO varchar(30), CAP varchar(5), CITTA varchar(20), TELEFONO varchar(12), SOCIO varchar(1), DATA varchar(4), EMAIL varchar(35), INIZIATIVE varchar(4))"));
			}

		} else {
			db->Open(testDBName);
			db->ExecuteUpdate(wxT("CREATE TABLE Nominativi (ID integer primary key default null, COGNOME varchar(20), NOME varchar(20), ATTIVITA varchar(10), INDIRIZZO varchar(30), CAP varchar(5), CITTA varchar(20), TELEFONO varchar(12), SOCIO varchar(1), DATA varchar(4), EMAIL varchar(35), INIZIATIVE varchar(4))"));
			wxMessageBox(_T("Ho creato un archivio vuoto nel percorso indicato ... !"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		}
		return db;
	}
	void clearDB() {
		assert(db != NULL);
		db->Close();
		delete db;
	}
	void chiudi() {
		db->Close();
	}
	void resetCampi() {
		m_textCtrl1->Enable( true );
		m_textCtrl2->Enable( true );
		m_textCtrl3->Enable( true );
		m_textCtrl4->Enable( true );
		m_textCtrl5->Enable( true );
		m_textCtrl6->Enable( true );
		m_textCtrl7->Enable( true );
		m_textCtrl8->Enable( true );
		m_textCtrl9->Enable( true );
		m_textCtrl10->Enable( true );
		m_textCtrl11->Enable( true );
		m_textCtrl1->SetValue("");
		m_textCtrl2->SetValue("");
		m_textCtrl3->SetValue("");
		m_textCtrl4->SetValue("");
		m_textCtrl5->SetValue("");
		m_textCtrl6->SetValue("");
		m_textCtrl7->SetValue("");
		m_textCtrl8->SetValue("");
		m_textCtrl9->SetValue("");
		m_textCtrl10->SetValue("");
		m_textCtrl11->SetValue("");
	}
public:
	/** Constructor */
	guiMyFrame( wxWindow* parent );

	//// end generated class members

};
class guiMyDialog1 : public MyDialog1
{
protected:

public:
	/** Constructor */
	guiMyDialog1( wxWindow* parent );
	//// end generated class members

};
//Stampa
static const int brush_size = 3;
class QuickPrint : public wxPrintout
{

	wxPageSetupDialogData m_page_setup;

	/** the type of paper (letter, A4, etc...) */
	wxPaperSize m_paper_type;

	/** horizontal or vertical */
	//int m_orient;

	// Or, if you use wxWidgets 2.9+ :
	wxPrintOrientation m_orient;

	/** number of pages we want to print. here it's static, but in a real example you will often
	  * want to calculate dynamically once you know the size of the printable area from page setup
	  */
	int m_page_amount;

	/** margins, in millimeters */
	int m_margin_left, m_margin_right, m_margin_top, m_margin_bottom;

	/** we'll use this to determine the coordinate system; it describes the number of units per
	  * centimeter (i.e. how fine the coordinate system is)
	  */
	float m_units_per_cm;

	/** will contain the dimensions of the coordinate system, once it's calculated.
	  * in the printing callback, you can then draw from (0, 0) to (m_coord_system_width, m_coord_system_height),
	  * which will be the area covering the paper minus the margins
	  */
	int m_coord_system_width, m_coord_system_height;

public:

	/**
	  * @param page_amount    number of pages we want to print. Here it's static because it's just a test, but in
	  *                       real code you will often want to calculate dynamically once you know the size of the
	  *                       printable area from page setup
	  * @param title          name of the print job / of the printed document
	  * @param units_per_cem  we'll use this to determine the coordinate system; it describes the number of units
	  *                       per centimeter (i.e. how fine the coordinate system is)
	  */
	QuickPrint(int page_amount, wxString title, float units_per_cm) : wxPrintout( title ) {
		m_page_amount = page_amount;
		switch (flagStampa) {
		case 1:
			m_orient = wxLANDSCAPE;
			m_margin_left   = X1;
			m_margin_right  = X1;
			m_margin_top    = Y1;
			m_margin_bottom = Y1;
			m_paper_type = wxPAPER_A4;
			break;
		case 2:
			m_orient = wxPORTRAIT;
			m_margin_left   = X2;
			m_margin_right  = X2;
			m_margin_top    = Y2;
			m_margin_bottom = Y2;
			m_paper_type = wxPAPER_A4;
			break;
		case 3:
			m_orient = wxLANDSCAPE;
			m_margin_left   = 10;
			m_margin_right  = 10;
			m_margin_top    = 10;
			m_margin_bottom = 10;
			m_paper_type = wxPAPER_ENV_DL;
			break;
		}
		m_units_per_cm   = units_per_cm;
	}


	/** shows the page setup dialog, OR sets up defaults */
	bool performPageSetup(const bool showPageSetupDialog) {
		// don't show page setup dialog, use default values
		wxPrintData printdata;
		printdata.SetPrintMode( wxPRINT_MODE_PRINTER );
		printdata.SetPaperId( m_paper_type );
		printdata.SetOrientation( m_orient );
		printdata.SetNoCopies(1);
		m_page_setup = wxPageSetupDialogData(printdata);
		m_page_setup.SetMarginTopLeft    (wxPoint(m_margin_left,  m_margin_top));
		m_page_setup.SetMarginBottomRight(wxPoint(m_margin_right, m_margin_bottom));
		if (showPageSetupDialog) {
			wxPageSetupDialog dialog( NULL, &m_page_setup );
			if (dialog.ShowModal() == wxID_OK) {
				m_page_setup = dialog.GetPageSetupData();
				m_orient = m_page_setup.GetPrintData().GetOrientation();
				m_paper_type = m_page_setup.GetPrintData().GetPaperId();

				wxPoint marginTopLeft = m_page_setup.GetMarginTopLeft();
				wxPoint marginBottomRight = m_page_setup.GetMarginBottomRight();
				m_margin_left   = marginTopLeft.x;
				m_margin_right  = marginBottomRight.x;
				m_margin_top    = marginTopLeft.y;
				m_margin_bottom = marginBottomRight.y;

			} else {

				return false;
			}
		}
		return true;
	}

	/** Called when printing starts */
	void OnBeginPrinting() {
		// set-up coordinate system however we want, we'll use it when drawing

		// take paper size and margin sizes into account when setting up coordinate system
		// so that units are "square" (1 unit x is a wide as 1 unit y is high)
		// (actually, if we don't make it square, on some platforms wx will even resize your
		//  margins to make it so)
		wxSize paperSize = m_page_setup.GetPaperSize();  // in millimeters

		// still in millimeters
		float large_side = std::max(paperSize.GetWidth(), paperSize.GetHeight());
		float small_side = std::min(paperSize.GetWidth(), paperSize.GetHeight());

		//float large_side_cm = large_side / 10.0f;  // in centimeters
		float small_side_cm = small_side / 10.0f;  // in centimeters

		if (m_orient == wxPORTRAIT) {
			float ratio = float(large_side - m_margin_top  - m_margin_bottom) /
			              float(small_side - m_margin_left - m_margin_right);

			m_coord_system_width  = (int)((small_side_cm - m_margin_left/10.0f -
			                               m_margin_right/10.0f)*m_units_per_cm);
			m_coord_system_height = m_coord_system_width*ratio;
		} else {
			float ratio = float(large_side - m_margin_left - m_margin_right) /
			              float(small_side - m_margin_top  - m_margin_bottom);

			m_coord_system_height = (int)((small_side_cm - m_margin_top/10.0f -
			                               m_margin_bottom/10.0f)* m_units_per_cm);
			m_coord_system_width  = m_coord_system_height*ratio;

		}

	}

	/** returns the data obtained from the page setup dialog (or the defaults,
	 * if dialog was not shown) */
	wxPrintData getPrintData() {
		return m_page_setup.GetPrintData();
	}

	/** Called when starting to print a document */
	bool OnBeginDocument(int startPage, int endPage) {
		return wxPrintout::OnBeginDocument(startPage, endPage);
	}

	/** wx will call this to know how many pages can be printed */
	void GetPageInfo(int *minPage, int *maxPage, int *pageSelFrom, int *pageSelTo) {
		*minPage = 1;
		*maxPage = m_page_amount;

		*pageSelFrom = 1;
		*pageSelTo = m_page_amount;
	}

	/** called by wx to know what pages this document has */
	bool HasPage(int pageNum) {
		// wx will call this to know how many pages can be printed
		return pageNum >= 1 && pageNum <= m_page_amount;

	}


	/** called by wx everytime it's time to render a specific page onto the
	 * printing device context */
	bool OnPrintPage(int pageNum) {
		// ---- setup DC with coordinate system ----
		FitThisSizeToPageMargins(wxSize(m_coord_system_width, m_coord_system_height), m_page_setup);

		wxRect fitRect = GetLogicalPageMarginsRect(m_page_setup);

		wxCoord xoff = (fitRect.width - m_coord_system_width) / 2;
		wxCoord yoff = (fitRect.height - m_coord_system_height) / 2;
		OffsetLogicalOrigin(xoff, yoff);
		// Init the device scale to inches.

		//int copies = m_page_setup.GetPrintData().GetNoCopies();
		wxDC* ptr = GetDC();
		if (ptr==NULL || !ptr->IsOk()) {
			return false;
		}
		wxDC& dc = *ptr;

		// ---- A couple helper variables to help us during draw within paper area -----
		const int x0 = 0;
		const int y0 = 0;
		// ---- Draw to the print DC ----
		dc.Clear();

		dc.SetPen(  wxPen( wxColour(0,0,0), brush_size ) );
		dc.SetBrush( *wxTRANSPARENT_BRUSH );
		dc.SetTextBackground( wxColour(255,255,0) );
		dc.SetTextForeground( wxColour(0,0,0) );
		// Stampa tabulato
		K=0;
		int I=0;
		switch (flagStampa) {
		case 1:
			font.SetPointSize(6);
			//font.SetPixelSize(wxSize(5,8));
			font.SetFaceName("Courier New");
			font.wxFont::Scale(SC);
			dc.SetFont(font);
			IO=0;
			KO=((pageNum-1)*175*NR);
			dc.StartPage();
			dc.DrawText( "*****************************************************************************************************************************************************************************", x0, y0);
			dc.DrawText( "* "+now.Format(wxT("%B %d %Y"))+" * "+Intestazione, x0, y0+10);
			dc.DrawText( "*****************************************************************************************************************************************************************************", x0, y0+20);
			dc.DrawText( "COGNOME              NOME                 ATTIVITA'  INDIRIZZO                      CAP   CITTA'               TELEFONO     E@MAIL                              F DATA  INIZ.", x0, y0+30);
			I = 50;
			IO=KO;
			for (K=0; K <NR; K++) {
				Stm=Stm1.SubString(IO, IO+174);
				dc.DrawText( Stm, x0, y0+I);
				IO=IO+175;
				I=I+10;
			}
			dc.DrawText( "*****************************************************************************************************************************************************************************", x0, y0+I);
			dc.EndPage();
			break;
		case 2:
			//Stampa etichette a una colonna
			if (RB == "1") {
				K=0;
				I=0;
				IO=0;
				KO=((pageNum-1)*175*NE);
				dc.StartPage();
				IO=KO;
				for (K=0; K <NE; K++) {
					int PU = (Stm1.Len()-175);
					if (IO <= PU) {
						font.SetPointSize(5);
						font.SetFaceName("Arial");
						font.wxFont::Scale(SC);
						dc.SetFont(font);
						dc.DrawText( "Mittente:", x0, y0+I);
						dc.DrawText( Intestazione, x0, y0+I+8);
						dc.DrawText( Indirizzo, x0, y0+I+16);
						dc.DrawText( Citta, x0, y0+I+24);
						font.SetPointSize(8);
						font.SetFaceName("Arial");
						font.wxFont::Scale(SC);
						dc.SetFont(font);
						Stm=(Stm1.SubString(IO, IO+20)).Trim(true)+" "+(Stm1.SubString(IO+21, IO+21+20)).Trim(true);
						dc.DrawText( Stm, x0+150, y0+I+43);
						Stm=(Stm1.SubString(IO+53, IO+53+30)).Trim(true);
						dc.DrawText( Stm, x0+150, y0+I+58);
						Stm=(Stm1.SubString(IO+84, IO+84+5)).Trim(true)+" "+(Stm1.SubString(IO+90, IO+90+20)).Trim(true);
						dc.DrawText( Stm, x0+150, y0+I+73);
					}
					IO=IO+175;
					I=I+DI;
				}
				dc.EndPage();

			} else {
				//Stampa etichette a due colonne
				int R=0;
				RI = 0;
				K=0;
				I=0;
				int IO=0;
				int KO=((pageNum-1)*175*NE);
				dc.StartPage();
				IO=KO;
				for (K=0; K <NE; K++) {
					int PU = (Stm1.Len()-175);
					if (IO <= PU) {
						font.SetPointSize(5);
						font.SetFaceName("Arial");
						font.wxFont::Scale(SC);
						dc.SetFont(font);
						dc.DrawText( "Mittente:", x0+RI, y0+I);
						dc.DrawText( Intestazione, x0+RI, y0+I+8);
						dc.DrawText( Indirizzo, x0+RI, y0+I+16);
						dc.DrawText( Citta, x0+RI, y0+I+24);
						font.SetPointSize(8);
						font.SetFaceName("Arial");
						font.wxFont::Scale(SC);
						dc.SetFont(font);
						Stm=(Stm1.SubString(IO, IO+20)).Trim(true)+" "+(Stm1.SubString(IO+21, IO+21+20)).Trim(true);
						dc.DrawText( Stm, x0+RI, y0+I+43);
						Stm=(Stm1.SubString(IO+53, IO+53+30)).Trim(true);
						dc.DrawText( Stm, x0+RI, y0+I+58);
						Stm=(Stm1.SubString(IO+84, IO+84+5)).Trim(true)+" "+(Stm1.SubString(IO+90, IO+90+20)).Trim(true);
						dc.DrawText( Stm, x0+RI, y0+I+73);
						R++;
						int div;
						int resto;
						div= R/2;
						resto = R-(div*2);
						if (resto == 0) {
							I=I+DI;
							RI=0;
						} else {
							RI=315;
						}
					}
					IO=IO+175;
				}
				dc.EndPage();
			}
			break;
		case 3:
			KO=((pageNum-1)*175);
			dc.StartPage();
			IO=KO;
			font.SetPointSize(5);
			font.SetFaceName("Arial");
			font.wxFont::Scale(SC);
			dc.SetFont(font);
			dc.DrawText( "Mittente:", x0, y0);
			dc.DrawText( Intestazione, x0, y0+8);
			dc.DrawText( Indirizzo, x0, y0+16);
			dc.DrawText( Citta, x0, y0+24);
			font.SetPointSize(8);
			font.SetFaceName("Arial");
			font.wxFont::Scale(SC);
			dc.SetFont(font);
			Stm=(Stm1.SubString(IO, IO+20)).Trim(true)+" "+(Stm1.SubString(IO+21, IO+21+20)).Trim(true);
			dc.DrawText( Stm, x0+190, y0+43+80);
			Stm=(Stm1.SubString(IO+53, IO+53+30)).Trim(true);
			dc.DrawText( Stm, x0+190, y0+58+80);
			Stm=(Stm1.SubString(IO+84, IO+84+5)).Trim(true)+" "+(Stm1.SubString(IO+90, IO+90+20)).Trim(true);
			dc.DrawText( Stm, x0+190, y0+73+80);
			dc.EndPage();
			break;
		}
		if (pageNum==R1) {
			dc.EndDoc();
		}
		return true;
	}

	/** Called when printing is done. I have nothing to do in this case
	 * in this example. */

	void OnEndPrinting() {
	}
};
MyDialog1 * dialogo;
guiMyFrame * principale;
wxSystemSettings *risoluzione;
IMPLEMENT_APP(MyApp)
////////////////////////////////////////////////////
// CODICE PRINCIPALE DA MyFrame::MyFrame()
////////////////////////////////////////////////////
MyFrame::MyFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	wxArrayString includeList;
	includeList.Add(wxT("0"));
	includeList.Add(wxT("1"));
	includeList.Add(wxT("2"));
	includeList.Add(wxT("3"));
	includeList.Add(wxT("4"));
	includeList.Add(wxT("5"));
	includeList.Add(wxT("6"));
	includeList.Add(wxT("7"));
	includeList.Add(wxT("8"));
	includeList.Add(wxT("9"));
	wxTextValidator textValidator(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator.SetIncludes(includeList);

	wxArrayString includeList1;
	includeList1.Add(wxT("0"));
	includeList1.Add(wxT("1"));
	includeList1.Add(wxT("2"));
	includeList1.Add(wxT("3"));
	includeList1.Add(wxT("4"));
	includeList1.Add(wxT("5"));
	includeList1.Add(wxT("6"));
	includeList1.Add(wxT("7"));
	includeList1.Add(wxT("8"));
	includeList1.Add(wxT("9"));
	includeList1.Add(wxT("."));
	wxTextValidator textValidator1(wxFILTER_INCLUDE_CHAR_LIST);
	textValidator1.SetIncludes(includeList1);
	wxImage::AddHandler(new wxPNGHandler);
	wxImageList *imageList = new wxImageList(dpiz(16), dpiz(16), true, 2);
	wxBitmap bitmap1(wxT("bmp/application.png"), wxBITMAP_TYPE_ANY);
	wxBitmap bitmap2(wxT("bmp/printer1.png"), wxBITMAP_TYPE_ANY);
	wxBitmap bitmap3(wxT("bmp/cog.png"), wxBITMAP_TYPE_ANY);
	bitmap1 = bitmap1.ConvertToImage().Scale(dpiz(16), dpiz(16));
	bitmap2 = bitmap2.ConvertToImage().Scale(dpiz(16), dpiz(16));
	bitmap3 = bitmap3.ConvertToImage().Scale(dpiz(16), dpiz(16));
	int index1 = imageList->Add(bitmap1);
	int index2 = imageList->Add(bitmap2);
	int index3 = imageList->Add(bitmap3);
	SetIcon(wxICON(sample));
	//this->SetSize(wxSize(dpiz(900), dpiz(630)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 180, 180, 180 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebook1->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	m_notebook1->AssignImageList(imageList);

	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer362;
	bSizer362 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	bSizer2->Add( 0, dpiz(6), 0, 0, 0 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( m_panel1, wxID_ANY, _T("Cognome:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText1->Wrap( -1 );
	bSizer7->Add( m_staticText1, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl1 = new wxTextCtrl( m_panel1, 28, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl1->SetMaxLength( 20 );
	m_textCtrl1->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl1->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl1->Enable( false );

	bSizer7->Add( m_textCtrl1, 1, wxALL, 5 );

	bSizer5->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, _T("Nome:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText2->Wrap( -1 );
	bSizer14->Add( m_staticText2, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl2 = new wxTextCtrl( m_panel1, 29, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl2->SetMaxLength( 20 );
	m_textCtrl2->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl2->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl2->Enable( false );

	bSizer14->Add( m_textCtrl2, 1, wxALL, 5 );

	bSizer5->Add( bSizer14, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( m_panel1, wxID_ANY, _T("Attività:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText3->Wrap( -1 );
	bSizer15->Add( m_staticText3, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl3 = new wxTextCtrl( m_panel1, 30, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl3->SetMaxLength( 10 );
	m_textCtrl3->Enable( false );

	bSizer15->Add( m_textCtrl3, 1, wxALL, 5 );

	bSizer5->Add( bSizer15, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( m_panel1, wxID_ANY, _T("Indirizzo:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText4->Wrap( -1 );
	bSizer16->Add( m_staticText4, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl4 = new wxTextCtrl( m_panel1, 31, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl4->SetMaxLength( 30 );
	m_textCtrl4->Enable( false );

	bSizer16->Add( m_textCtrl4, 1, wxALL, 5 );

	bSizer5->Add( bSizer16, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( m_panel1, wxID_ANY, _T("Cap:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText5->Wrap( -1 );
	bSizer17->Add( m_staticText5, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl5 = new wxTextCtrl( m_panel1, 32, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS, textValidator );
	m_textCtrl5->SetMaxLength( 5 );
	m_textCtrl5->Enable( false );

	bSizer17->Add( m_textCtrl5, 1, wxALL, 5 );

	bSizer5->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( m_panel1, wxID_ANY, _T("Città:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText6->Wrap( -1 );
	bSizer18->Add( m_staticText6, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl6 = new wxTextCtrl( m_panel1, 33, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl6->SetMaxLength( 20 );
	m_textCtrl6->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl6->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl6->Enable( false );

	bSizer18->Add( m_textCtrl6, 1, wxALL, 5 );

	bSizer5->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( m_panel1, wxID_ANY, _T("Telefono:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText7->Wrap( -1 );
	bSizer19->Add( m_staticText7, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl7 = new wxTextCtrl( m_panel1, 34, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl7->SetMaxLength( 12 );
	m_textCtrl7->Enable( false );

	bSizer19->Add( m_textCtrl7, 1, wxALL, 5 );

	bSizer5->Add( bSizer19, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( m_panel1, wxID_ANY, _T("E@Mail:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText8->Wrap( -1 );
	bSizer20->Add( m_staticText8, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl8 = new wxTextCtrl( m_panel1, 35, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl8->SetMaxLength( 35 );
	m_textCtrl8->SetFont(wxFontInfo(8).FaceName("Tahoma"));
	//m_textCtrl8->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl8->SetForegroundColour( wxColour( 0, 51, 187 ) );
	m_textCtrl8->Enable( false );

	bSizer20->Add( m_textCtrl8, 1, wxALL, 5 );

	bSizer5->Add( bSizer20, 0, wxEXPAND, 5 );

	bSizer4->Add( bSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	/*m_bpButton13 = new wxBitmapButton( m_toolBar1, wxID_ANY, wxBitmap( wxT("Img/application_delete.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );*/
	
	
	m_bpButton11 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/Exit.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer6->Add( m_bpButton11, 0, wxALL, 5 );

	m_bpButton12 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/configure-2.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer6->Add( m_bpButton12, 0, wxALL, 5 );

	m_bpButton13 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/run-build-prune.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer6->Add( m_bpButton13, 0, wxALL, 5 );

	m_bpButton14 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/help.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer6->Add( m_bpButton14, 0, wxALL, 5 );

	m_bpButton15 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/mail-forward.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer6->Add( m_bpButton15, 0, wxALL, 5 );

	bSizer4->Add( bSizer6, 0, wxEXPAND, 5 );

	bSizer2->Add( bSizer4, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( m_panel1, wxID_ANY, _T("Socio:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText9->Wrap( -1 );
	bSizer21->Add( m_staticText9, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl9 = new wxTextCtrl( m_panel1, 36, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS );
	m_textCtrl9->SetMaxLength( 1 );
	m_textCtrl9->Enable( false );

	bSizer21->Add( m_textCtrl9, 0, wxALL, 5 );

	bSizer11->Add( bSizer21, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( m_panel1, wxID_ANY, _T("Nell'anno:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText12->Wrap( -1 );
	bSizer22->Add( m_staticText12, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl10 = new wxTextCtrl( m_panel1, 37, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxWANTS_CHARS,textValidator );
	m_textCtrl10->SetMaxLength( 4 );
	m_textCtrl10->Enable( false );

	bSizer22->Add( m_textCtrl10, 0, wxALL, 5 );

	bSizer11->Add( bSizer22, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( m_panel1, wxID_ANY, _T("Anno dell'\nultimo in-\ntervento:"), wxDefaultPosition, wxSize( dpiz(70),-1 ), 0 );
	m_staticText13->Wrap( -1 );
	bSizer23->Add( m_staticText13, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl11 = new wxTextCtrl( m_panel1, 38, wxEmptyString, wxPoint( -1,-1 ), wxDefaultSize, 0|wxWANTS_CHARS, textValidator );
	m_textCtrl11->SetMaxLength( 4 );
	m_textCtrl11->Enable( false );

	bSizer23->Add( m_textCtrl11, 0, wxALL, 5 );

	bSizer11->Add( bSizer23, 0, wxEXPAND, 5 );

	bSizer28->Add( bSizer11, 0, wxBOTTOM, 5 );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Copia di sicurezza dell'archivio") ), wxVERTICAL );

	m_dirPicker2 = new wxDirPickerCtrl( m_panel1, wxID_ANY, wxEmptyString, _T("Selezionare una cartella"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE|wxTAB_TRAVERSAL );
	sbSizer2->Add( m_dirPicker2, 0, wxTOP|wxBOTTOM|wxEXPAND, 5 );

	m_bpButton17 = new wxBitmapButton( m_panel1, wxID_ANY, wxBitmap( wxT("bmp/disk.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	sbSizer2->Add( m_bpButton17, 0, wxALL, 5 );

	bSizer28->Add( sbSizer2, 1, wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	bSizer26->Add( bSizer28, 0, wxEXPAND|wxBOTTOM, 5 );

	bSizer2->Add( bSizer26, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( m_panel1, 8, _T("Aggiungi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button1->Enable( false );

	bSizer12->Add( m_button1, 1, wxALL, 5 );

	m_button2 = new wxButton( m_panel1, 9, _T("Nuova voce"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_button2, 1, wxALL, 5 );

	m_button3 = new wxButton( m_panel1, 10, _T("Aggiorna"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3->Enable( false );

	bSizer12->Add( m_button3, 1, wxALL, 5 );

	m_button4 = new wxButton( m_panel1, 11, _T("Elimina"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button4->Enable( false );

	bSizer12->Add( m_button4, 1, wxALL, 5 );

	bSizer2->Add( bSizer12, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Archivio") ), wxVERTICAL );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxHORIZONTAL );

	m_button5 = new wxButton( m_panel1, 12, _T("Primo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button5->Enable( false );

	bSizer29->Add( m_button5, 1, wxALL, 5 );

	m_button6 = new wxButton( m_panel1, 13, _T("Seguente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button6->Enable( false );

	bSizer29->Add( m_button6, 1, wxALL, 5 );

	m_button7 = new wxButton( m_panel1, 14, _T("Precedente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button7->Enable( false );

	bSizer29->Add( m_button7, 1, wxALL, 5 );

	m_button8 = new wxButton( m_panel1, 15, _T("Ultimo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button8->Enable( false );

	bSizer29->Add( m_button8, 1, wxALL, 5 );

	sbSizer3->Add( bSizer29, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText14 = new wxStaticText( m_panel1, wxID_ANY, _T("Cognome da ricercare:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText14->Wrap( -1 );
	bSizer30->Add( m_staticText14, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl12 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl12->SetMaxLength( 20 );
	m_textCtrl12->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl12->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl12->SetBackgroundColour( wxColour( 152, 186, 203 ) );

	bSizer30->Add( m_textCtrl12, 1, wxALL, 5 );

	m_button9 = new wxButton( m_panel1, 16, _T("Avvia !"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button9, 0, wxALL, 5 );

	sbSizer3->Add( bSizer30, 1, wxEXPAND, 5 );

	bSizer2->Add( sbSizer3, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	bSizer362->Add( bSizer2, 1, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer362->Add( m_staticline1, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	m_staticText15 = new wxStaticText( m_panel1, wxID_ANY, _T("OPZIONI DI STAMPA E VISUALIZZAZIONE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont(wxFontInfo(10).FaceName("Tahoma").Bold().Underlined());
	//m_staticText15->SetFont( wxFont( 10, 74, 90, 92, true, wxT("Tahoma") ) );
	m_staticText15->SetForegroundColour( wxColour( 15, 63, 189 ) );

	bSizer31->Add( m_staticText15, 0, wxEXPAND|wxALL, 5 );

	bSizer3->Add( bSizer31, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Attività") ), wxVERTICAL );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn1 = new wxRadioButton( m_panel1, 17, _T("tutte"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	bSizer33->Add( m_radioBtn1, 0, wxALL, 5 );

	m_radioBtn2 = new wxRadioButton( m_panel1, 18, _T("solo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_radioBtn2, 0, wxALL, 5 );

	m_radioBtn3 = new wxRadioButton( m_panel1, 19, _T("escluso"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_radioBtn3, 0, wxALL, 5 );

	sbSizer4->Add( bSizer33, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl13 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl13->SetMaxLength( 10 );
	m_textCtrl13->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl13->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl13->Enable( false );

	bSizer34->Add( m_textCtrl13, 0, wxALL, 5 );

	sbSizer4->Add( bSizer34, 0, wxEXPAND, 5 );

	bSizer3->Add( sbSizer4, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Città") ), wxVERTICAL );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn4 = new wxRadioButton( m_panel1, 20, _T("tutte"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	bSizer35->Add( m_radioBtn4, 0, wxALL, 5 );

	m_radioBtn5 = new wxRadioButton( m_panel1, 21, _T("solo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_radioBtn5, 0, wxALL, 5 );

	m_radioBtn6 = new wxRadioButton( m_panel1, 22, _T("escluso"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_radioBtn6, 0, wxALL, 5 );

	sbSizer5->Add( bSizer35, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl14 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl14->SetMaxLength( 20 );
	m_textCtrl14->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl14->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl14->Enable( false );

	bSizer36->Add( m_textCtrl14, 0, wxALL, 5 );

	sbSizer5->Add( bSizer36, 0, wxEXPAND, 5 );

	bSizer3->Add( sbSizer5, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Socio") ), wxVERTICAL );

	wxBoxSizer* bSizer301;
	bSizer301 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText141 = new wxStaticText( m_panel1, wxID_ANY, _T("Fra il:"), wxDefaultPosition, wxSize( dpiz(200),-1 ), wxALIGN_RIGHT );
	m_staticText141->Wrap( -1 );
	bSizer301->Add( m_staticText141, 0, wxALL|wxEXPAND, 5 );

	m_staticText151 = new wxStaticText( m_panel1, wxID_ANY, _T("e il:"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText151->Wrap( -1 );
	bSizer301->Add( m_staticText151, 1, wxALL|wxEXPAND, 5 );

	sbSizer6->Add( bSizer301, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox1 = new wxCheckBox( m_panel1, 23, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer311->Add( m_checkBox1, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl15 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl15->SetMaxLength( 1 );
	m_textCtrl15->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl15->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl15->Enable( false );

	bSizer311->Add( m_textCtrl15, 0, wxALL, 5 );

	m_textCtrl16 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator);
	m_textCtrl16->SetMaxLength( 4 );
	m_textCtrl16->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl16->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl16->Enable( false );

	bSizer311->Add( m_textCtrl16, 0, wxALL, 5 );

	m_textCtrl17 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl17->SetMaxLength( 4 );
	m_textCtrl17->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl17->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl17->Enable( false );

	bSizer311->Add( m_textCtrl17, 0, wxALL, 5 );

	sbSizer6->Add( bSizer311, 1, wxEXPAND, 5 );

	bSizer3->Add( sbSizer6, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Anno dell' ultimo intervento") ), wxVERTICAL );

	wxBoxSizer* bSizer321;
	bSizer321 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox2 = new wxCheckBox( m_panel1, 24, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer321->Add( m_checkBox2, 0, wxALL|wxEXPAND, 5 );

	m_staticText16 = new wxStaticText( m_panel1, wxID_ANY, _T("Fra il:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer321->Add( m_staticText16, 0, wxEXPAND|wxALL, 5 );

	m_textCtrl18 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl18->SetMaxLength( 4 );
	m_textCtrl18->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl18->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl18->Enable( false );

	bSizer321->Add( m_textCtrl18, 0, wxALL, 5 );

	m_staticText17 = new wxStaticText( m_panel1, wxID_ANY, _T("e il:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText17->Wrap( -1 );
	bSizer321->Add( m_staticText17, 0, wxALL|wxEXPAND, 5 );

	m_textCtrl19 = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl19->SetMaxLength( 4 );
	m_textCtrl19->SetFont(wxFontInfo(8).FaceName("Tahoma").Bold());
	//m_textCtrl19->SetFont( wxFont( 8, 74, 90, 92, false, wxT("Tahoma") ) );
	m_textCtrl19->Enable( false );

	bSizer321->Add( m_textCtrl19, 0, wxALL, 5 );

	sbSizer7->Add( bSizer321, 1, wxEXPAND, 5 );

	bSizer3->Add( sbSizer7, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Ordine / E@Mail") ), wxHORIZONTAL );

	m_radioBtn7 = new wxRadioButton( m_panel1, wxID_ANY, _T("alfabetico"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	sbSizer8->Add( m_radioBtn7, 0, wxALL, 5 );

	m_radioBtn8 = new wxRadioButton( m_panel1, wxID_ANY, _T("di inserimento"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( m_radioBtn8, 0, wxALL, 5 );

	m_checkBox3 = new wxCheckBox( m_panel1, wxID_ANY, _T("senza E@Mail"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer8->Add( m_checkBox3, 0, wxALL, 5 );

	bSizer3->Add( sbSizer8, 0, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND, 5 );

	//bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	wxStaticBoxSizer* sbSizer71;
	sbSizer71 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, _T("Per quelli scelti nelle opzioni") ), wxVERTICAL );

	sbSizer71->Add( 0, 0, 1, wxEXPAND, 5 );
	m_bpButton9 = new wxBitmapButton( m_panel1, 27, wxBitmap( wxT("bmp/mail-reply-all.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_bpButton9->Enable( false );

	sbSizer71->Add( m_bpButton9, 0, wxALL, 5 );

	m_staticText21 = new wxStaticText( m_panel1, wxID_ANY, _T("Invia E@Mail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	sbSizer71->Add( m_staticText21, 0, wxALL|wxEXPAND, 5 );

	bSizer32->Add( sbSizer71, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( m_panel1, wxID_ANY, wxEmptyString ), wxVERTICAL );

	sbSizer9->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBitmap bmp = wxBitmap( wxT("bmp/wx.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(48), dpiz(35));
	m_bitmap1 = new wxStaticBitmap( m_panel1, wxID_ANY, bmp, wxDefaultPosition, wxDefaultSize, 0 );

	sbSizer9->Add( m_bitmap1, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_hyperlink1 = new wxGenericHyperlinkCtrl( m_panel1, wxID_ANY, _T("© Carlo Sala Software - v.4.0.0"), wxT("http://www.carlosala.net"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );

	m_hyperlink1->SetHoverColour( wxColour( 4, 32, 221 ) );
	m_hyperlink1->SetNormalColour( wxColour( 80, 80, 80 ) );
	m_hyperlink1->SetVisitedColour( wxColour( 80, 80, 80 ) );
	m_hyperlink1->SetFont(wxFontInfo(8).FaceName("Tahoma").Underlined());
	//m_hyperlink1->SetFont( wxFont( 8, 74, 90, 90, true, wxT("Tahoma") ) );
	m_hyperlink1->SetBackgroundColour( wxColour( 180, 180, 180 ) );
	
	sbSizer9->Add( m_hyperlink1, 0, wxALL, 5 );

	bSizer32->Add( sbSizer9, 0, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND, 5 );

	bSizer3->Add( bSizer32, 6, wxEXPAND|wxBOTTOM, 5 );

	bSizer362->Add( bSizer3, 1, wxEXPAND, 5 );

	m_panel1->SetSizer( bSizer362 );
	m_panel1->Layout();
	bSizer362->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, _T("Pannello principale"),true, index1);
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl23 = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
	m_textCtrl23->SetFont(wxFontInfo(10).FaceName("Courier New"));
	//m_textCtrl23->SetFont( wxFont( 10, 74, 90, 90, false, wxT("Courier New") ) );
	m_textCtrl23->Enable( false );
	bSizer38->Add( m_textCtrl23, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText251 = new wxStaticText( m_panel2, wxID_ANY, _T("\nPer quelli scelti nelle opzioni:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText251->Wrap( -1 );
	m_staticText251->SetFont(wxFontInfo(9).FaceName("Tahoma"));
	//m_staticText251->SetFont( wxFont( 9, 74, 90, 92, false, wxT("Tahoma") ) );

	bSizer39->Add( m_staticText251, 0, wxEXPAND|wxALL, 5 );


	bSizer39->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bpButton5 = new wxBitmapButton( m_panel2, 25, wxBitmap( wxT("bmp/run-build-file.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_bpButton5->Enable( false );

	bSizer39->Add( m_bpButton5, 0, wxALL|wxEXPAND, 5 );

	m_staticText24 = new wxStaticText( m_panel2, wxID_ANY, _T("\nAnteprima st. tabulati"), wxDefaultPosition, wxSize( dpiz(120),-1 ), 0 );
	m_staticText24->Wrap( -1 );
	bSizer39->Add( m_staticText24, 0, wxEXPAND|wxALL, 5 );

	m_bpButton6 = new wxBitmapButton( m_panel2, 26, wxBitmap( wxT("bmp/printer1.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_bpButton6->Enable( false );

	bSizer39->Add( m_bpButton6, 0, wxALL|wxEXPAND, 5 );

	m_staticText25 = new wxStaticText( m_panel2, wxID_ANY, _T("\nAnteprima st. etichette"), wxDefaultPosition, wxSize( dpiz(120),-1 ), 0 );
	m_staticText25->Wrap( -1 );
	bSizer39->Add( m_staticText25, 0, wxALL|wxEXPAND, 5 );

	m_bpButton111 = new wxBitmapButton( m_panel2, wxID_ANY, wxBitmap( wxT("bmp/mail-reply-all.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_bpButton111->Enable( false );
	bSizer39->Add( m_bpButton111, 0, wxALL|wxEXPAND, 5 );

	m_staticText34 = new wxStaticText( m_panel2, wxID_ANY, _T("\nAnteprima st. buste"), wxDefaultPosition, wxSize( dpiz(120),-1 ), 0 );
	m_staticText34->Wrap( -1 );
	bSizer39->Add( m_staticText34, 0, wxALL|wxEXPAND, 5 );
	bSizer38->Add( bSizer39, 0, wxEXPAND, 5 );

	m_panel2->SetSizer( bSizer38 );
	m_panel2->Layout();
	bSizer38->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, _T("Pannello stampe"), false, index2 );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Intestazione pagine di stampa") ), wxVERTICAL );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText211 = new wxStaticText( m_panel3, wxID_ANY, _T("Associazione:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	bSizer42->Add( m_staticText211, 1, wxALL, 5 );

	m_textCtrl20 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl20->SetMaxLength( 31 );
	bSizer42->Add( m_textCtrl20, 1, wxALL, 5 );


	bSizer42->Add( 0, 0, 1, wxEXPAND, 5 );

	bSizer43->Add( bSizer42, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText22 = new wxStaticText( m_panel3, wxID_ANY, _T("Indirizzo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer44->Add( m_staticText22, 1, wxALL, 5 );

	m_textCtrl21 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl21->SetMaxLength( 35 );
	bSizer44->Add( m_textCtrl21, 1, wxALL, 5 );


	bSizer44->Add( 0, 0, 1, wxEXPAND, 5 );

	bSizer43->Add( bSizer44, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( m_panel3, wxID_ANY, _T("Città:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer45->Add( m_staticText23, 1, wxALL|wxEXPAND, 5 );

	m_textCtrl22 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl22->SetMaxLength( 30 );
	bSizer45->Add( m_textCtrl22, 1, wxALL, 5 );


	bSizer45->Add( 0, 0, 1, wxEXPAND, 5 );

	bSizer43->Add( bSizer45, 1, wxEXPAND, 5 );

	sbSizer10->Add( bSizer43, 1, wxEXPAND, 5 );

	bSizer40->Add( sbSizer10, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Tabulati") ), wxHORIZONTAL );

	m_staticText261 = new wxStaticText( m_panel3, wxID_ANY, _T("Margine X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText261->Wrap( -1 );
	sbSizer11->Add( m_staticText261, 0, wxALL, 5 );

	m_textCtrl24 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl24->SetMaxLength( 2 );
	sbSizer11->Add( m_textCtrl24, 0, wxALL, 5 );

	m_staticText27 = new wxStaticText( m_panel3, wxID_ANY, _T("Margine Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	sbSizer11->Add( m_staticText27, 0, wxALL, 5 );

	m_textCtrl25 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl25->SetMaxLength( 2 );
	sbSizer11->Add( m_textCtrl25, 0, wxALL, 5 );

	m_staticText28 = new wxStaticText( m_panel3, wxID_ANY, _T("Numero righe per foglio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	sbSizer11->Add( m_staticText28, 0, wxALL, 5 );

	m_textCtrl26 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, textValidator );
	m_textCtrl26->SetMaxLength( 3 );
	sbSizer11->Add( m_textCtrl26, 0, wxALL, 5 );

	bSizer40->Add( sbSizer11, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer12;
	sbSizer12 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Etichette") ), wxHORIZONTAL );

	m_staticText29 = new wxStaticText( m_panel3, wxID_ANY, _T("Margine X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	sbSizer12->Add( m_staticText29, 0, wxALL, 5 );

	m_textCtrl27 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition,  wxSize( dpiz(50),-1 ), 0, textValidator );
	m_textCtrl27->SetMaxLength( 2 );
	sbSizer12->Add( m_textCtrl27, 1, wxALL, 5 );

	m_staticText30 = new wxStaticText( m_panel3, wxID_ANY, _T("Margine Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	sbSizer12->Add( m_staticText30, 0, wxALL, 5 );

	m_textCtrl28 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition,  wxSize( dpiz(50),-1 ), 0, textValidator );
	m_textCtrl28->SetMaxLength( 2 );
	sbSizer12->Add( m_textCtrl28, 1, wxALL, 5 );

	m_staticText31 = new wxStaticText( m_panel3, wxID_ANY, _T("Numero etichette\nper foglio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	sbSizer12->Add( m_staticText31, 0, wxALL, 5 );

	m_textCtrl29 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition,  wxSize( dpiz(50),-1 ), 0, textValidator );
	m_textCtrl29->SetMaxLength( 2 );
	sbSizer12->Add( m_textCtrl29, 1, wxALL, 5 );

	m_staticText32 = new wxStaticText( m_panel3, wxID_ANY, _T("Distanza tra \ni margini superiori \ndelle etichette:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	sbSizer12->Add( m_staticText32, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	m_textCtrl30 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition,  wxSize( dpiz(50),-1 ) ,0, textValidator );
	m_textCtrl30->SetMaxLength( 3 );
	sbSizer12->Add( m_textCtrl30, 1, wxALL, 5 );

	m_radioBtn9 = new wxRadioButton( m_panel3, wxID_ANY, _T("1 colonna"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	m_radioBtn9->SetValue( true );
	sbSizer12->Add( m_radioBtn9, 0, wxALL, 5 );

	m_radioBtn10 = new wxRadioButton( m_panel3, wxID_ANY, _T("2 colonne"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer12->Add( m_radioBtn10, 0, wxALL, 5 );


	bSizer40->Add( sbSizer12, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	wxStaticBoxSizer* sbSizer15;
	sbSizer15 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Caratteri") ), wxHORIZONTAL );

	m_staticText35 = new wxStaticText( m_panel3, wxID_ANY, _T("Scala caratteri:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	sbSizer15->Add( m_staticText35, 0, wxALL, 5 );

	m_textCtrl31 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0,textValidator1 );
	m_textCtrl31->SetMaxLength( 5 );
	sbSizer15->Add( m_textCtrl31, 0, wxALL, 5 );

	m_staticText36 = new wxStaticText( m_panel3, wxID_ANY, _T("Se nei tabulati non compaiono tutti i campi, provare a diminuire la scala ad esempio valore:  0.910\nPer alte risoluzioni (esempio 4K) il valore è circa 0.470"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	sbSizer15->Add( m_staticText36, 0, wxALL, 5 );


	bSizer40->Add( sbSizer15, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );


	wxBoxSizer* bSizer421;
	bSizer421 = new wxBoxSizer( wxHORIZONTAL );




	wxStaticBoxSizer* sbSizer13;
	sbSizer13 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Archivio") ), wxVERTICAL );

	m_filePicker1 = new wxFilePickerCtrl( m_panel3, wxID_ANY, wxT(""), _T("Seleziona il file Archivio"), wxT("*.db"), wxDefaultPosition, wxSize( -1,-1 ), wxFLP_DEFAULT_STYLE|wxTAB_TRAVERSAL );
	sbSizer13->Add( m_filePicker1, 0, wxALL, 5 );

	m_button14 = new wxButton( m_panel3, wxID_ANY, _T("Ripristina l'archivio"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer13->Add( m_button14, 0, wxALL, 5 );

	bSizer421->Add( sbSizer13, 0, wxBOTTOM, 5 );

	bSizer421->Add( 0, 0, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer14;
	sbSizer14 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, _T("Origine dati") ), wxVERTICAL );

	m_dirPicker21 = new wxDirPickerCtrl( m_panel3, wxID_ANY,  wxEmptyString, _T("Seleziona un percorso"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE|wxTAB_TRAVERSAL );
	sbSizer14->Add( m_dirPicker21, 0, wxALL, 5 );

	m_checkBox4 = new wxCheckBox( m_panel3, wxID_ANY, _T("Default setting"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox4->SetValue(true);
	sbSizer14->Add( m_checkBox4, 0, wxALL, 5 );


	bSizer421->Add( sbSizer14, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );


	bSizer40->Add( bSizer421, 1, wxBOTTOM|wxLEFT|wxEXPAND, 5 );

	m_staticline2 = new wxStaticLine( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer40->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	m_staticText33 = new wxStaticText( m_panel3, wxID_ANY, _T("Se si cambiano le impostazioni, affinchè possano essere effettive, devono prima essere salvate."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer40->Add( m_staticText33, 0, wxALL, 5 );

	//bSizer40->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	m_button13 = new wxButton( m_panel3, 63, _T("Default"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_button13, 0, wxALL, 5 );


	bSizer41->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bpButton10 = new wxBitmapButton( m_panel3, 40, wxBitmap( wxT("bmp/cog.png"), wxBITMAP_TYPE_ANY ).ConvertToImage().Scale(dpiz(32), dpiz(32)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer41->Add( m_bpButton10, 0, wxALL, 5 );

	m_staticText26 = new wxStaticText( m_panel3, wxID_ANY, _T("\nSalva impostazioni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer41->Add( m_staticText26, 0, wxALL|wxEXPAND, 5 );

	bSizer40->Add( bSizer41, 0, wxEXPAND, 5 );

	m_panel3->SetSizer( bSizer40 );
	m_panel3->Layout();
	bSizer40->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, _T("Impostazioni applicazione"), false, index3 );

	bSizer1->Add( m_notebook1, 1, wxEXPAND, 5 );

	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_statusBar1->SetSize( wxSize( -1,-1 ) );

	this->Centre( wxBOTH );
	this->Fit();

	// Connect Events
	this->Connect( wxEVT_CHAR_HOOK, wxKeyEventHandler( MyFrame::OnKeyPress ) );
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame::OnCloseFrame ) );
	this->Connect( wxEVT_IDLE, wxIdleEventHandler( MyFrame::Idle ) );
	m_notebook1->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING, wxNotebookEventHandler( MyFrame::PageChanged ), NULL, this );
	m_textCtrl1->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus1 ), NULL, this );
	m_textCtrl2->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus2 ), NULL, this );
	m_textCtrl3->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus3 ), NULL, this );
	m_textCtrl4->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus4 ), NULL, this );
	m_textCtrl5->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus5 ), NULL, this );
	m_textCtrl6->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus6 ), NULL, this );
	m_textCtrl7->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus7 ), NULL, this );
	m_textCtrl8->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus8 ), NULL, this );
	m_bpButton11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton7OnButtonClick ), NULL, this );
	m_bpButton12->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton2OnButtonClick ), NULL, this );
	m_bpButton13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton3OnButtonClick ), NULL, this );
	m_bpButton14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton1OnButtonClick ), NULL, this );
	m_bpButton15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton8OnButtonClick ), NULL, this );
	m_textCtrl9->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus9 ), NULL, this );
	m_textCtrl10->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus10 ), NULL, this );
	m_textCtrl11->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus11 ), NULL, this );
	m_bpButton17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton4OnButtonClick ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button1OnButtonClick ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button2OnButtonClick ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button3OnButtonClick ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button4OnButtonClick ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button5OnButtonClick ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button6OnButtonClick ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button7OnButtonClick ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button8OnButtonClick ), NULL, this );
	m_textCtrl12->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl12 ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button9OnButtonClick ), NULL, this );
	m_radioBtn1->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio1 ), NULL, this );
	m_radioBtn2->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio2 ), NULL, this );
	m_radioBtn3->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio3 ), NULL, this );
	m_textCtrl13->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl13 ), NULL, this );
	m_radioBtn4->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio4 ), NULL, this );
	m_radioBtn5->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio5 ), NULL, this );
	m_radioBtn6->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio6 ), NULL, this );
	m_textCtrl14->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl14 ), NULL, this );
	m_checkBox1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::OnCheck1 ), NULL, this );
	m_textCtrl15->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl15 ), NULL, this );
	m_textCtrl16->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl16 ), NULL, this );
	m_textCtrl17->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl17 ), NULL, this );
	m_checkBox2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::OnCheck2 ), NULL, this );
	m_textCtrl18->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl18 ), NULL, this );
	m_textCtrl19->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl19 ), NULL, this );
	m_radioBtn7->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::Bt7 ), NULL, this );
	m_radioBtn8->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::Bt8 ), NULL, this );
	m_checkBox3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::Cb3 ), NULL, this );
	m_bpButton9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton9OnButtonClick ), NULL, this );
	m_bpButton5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton5OnButtonClick ), NULL, this );
	m_bpButton6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton6OnButtonClick ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button13OnButtonClick ), NULL, this );
	m_bpButton10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton10OnButtonClick ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button14OnButtonClick ), NULL, this );
	m_checkBox4->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::Check4 ), NULL, this );
	m_bpButton111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton111OnButtonClick ), NULL, this );
}

MyFrame::~MyFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CHAR_HOOK, wxKeyEventHandler( MyFrame::OnKeyPress ) );
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame::OnCloseFrame ) );
	this->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MyFrame::Idle ) );
	m_notebook1->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING, wxNotebookEventHandler( MyFrame::PageChanged ), NULL, this );
	m_textCtrl1->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus1 ), NULL, this );
	m_textCtrl2->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus2 ), NULL, this );
	m_textCtrl3->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus3 ), NULL, this );
	m_textCtrl4->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus4 ), NULL, this );
	m_textCtrl5->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus5 ), NULL, this );
	m_textCtrl6->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus6 ), NULL, this );
	m_textCtrl7->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus7 ), NULL, this );
	m_textCtrl8->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus8 ), NULL, this );
	m_bpButton11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton7OnButtonClick ), NULL, this );
	m_bpButton12->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton2OnButtonClick ), NULL, this );
	m_bpButton13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton3OnButtonClick ), NULL, this );
	m_bpButton14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton1OnButtonClick ), NULL, this );
	m_bpButton15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton8OnButtonClick ), NULL, this );
	m_textCtrl9->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus9 ), NULL, this );
	m_textCtrl10->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus10 ), NULL, this );
	m_textCtrl11->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( MyFrame::Focus11 ), NULL, this );
	m_bpButton17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton4OnButtonClick ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button1OnButtonClick ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button2OnButtonClick ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button3OnButtonClick ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button4OnButtonClick ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button5OnButtonClick ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button6OnButtonClick ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button7OnButtonClick ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button8OnButtonClick ), NULL, this );
	m_textCtrl12->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl12 ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button9OnButtonClick ), NULL, this );
	m_radioBtn1->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio1 ), NULL, this );
	m_radioBtn2->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio2 ), NULL, this );
	m_radioBtn3->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio3 ), NULL, this );
	m_textCtrl13->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl13 ), NULL, this );
	m_radioBtn4->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio4 ), NULL, this );
	m_radioBtn5->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio5 ), NULL, this );
	m_radioBtn6->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::OnRadio6 ), NULL, this );
	m_textCtrl14->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl14 ), NULL, this );
	m_checkBox1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::OnCheck1 ), NULL, this );
	m_textCtrl15->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl15 ), NULL, this );
	m_textCtrl16->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl16 ), NULL, this );
	m_textCtrl17->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl17 ), NULL, this );
	m_checkBox2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::OnCheck2 ), NULL, this );
	m_textCtrl18->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl18 ), NULL, this );
	m_textCtrl19->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MyFrame::Ctrl19 ), NULL, this );
	m_radioBtn7->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::Bt7 ), NULL, this );
	m_radioBtn8->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame::Bt8 ), NULL, this );
	m_checkBox3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::Cb3 ), NULL, this );
	m_bpButton9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton9OnButtonClick ), NULL, this );
	m_bpButton5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton5OnButtonClick ), NULL, this );
	m_bpButton6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton6OnButtonClick ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button13OnButtonClick ), NULL, this );
	m_bpButton10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton10OnButtonClick ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_button14OnButtonClick ), NULL, this );
	m_checkBox4->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame::Check4 ), NULL, this );
	m_bpButton111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame::m_bpButton111OnButtonClick ), NULL, this );

}
MyDialog1::MyDialog1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	SetIcon(wxICON(sample));
	this->SetSize(wxSize(dpiz(400), dpiz(110)));
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, _T("Avanzamento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer43->Add( m_staticText36, 0, wxALL, 5 );

	m_gauge1 = new wxGauge( this, wxID_ANY, 1000, wxDefaultPosition, wxSize(dpiz(379),-1 ), wxGA_HORIZONTAL );
	m_gauge1->SetValue( 0 );
	bSizer43->Add( m_gauge1, 0, wxALL, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText37 = new wxStaticText( this, wxID_ANY, _T("Letti: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer44->Add( m_staticText37, 0, wxALL, 5 );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(50),-1 ), 0 );
	m_staticText39->Wrap( -1 );
	bSizer44->Add( m_staticText39, 0, wxALL, 5 );

	m_staticText38 = new wxStaticText( this, wxID_ANY, _T("Inseriti: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer44->Add( m_staticText38, 0, wxALL, 5 );

	m_staticText40 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(50),-1 ), 0 );
	m_staticText40->Wrap( -1 );
	bSizer44->Add( m_staticText40, 0, wxALL, 5 );

	m_staticText41 = new wxStaticText( this, wxID_ANY, _T("Non inseriti: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	bSizer44->Add( m_staticText41, 0, wxALL, 5 );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(dpiz(50),-1 ), 0 );
	m_staticText42->Wrap( -1 );
	bSizer44->Add( m_staticText42, 0, wxALL, 5 );

	bSizer43->Add( bSizer44, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer43 );
	this->Layout();

	this->Centre( wxBOTH );
	
}

MyDialog1::~MyDialog1()
{

}
////////////////////////////////////////////////////
// CODICE PRINCIPALE CLASSE DERIVATA DA #INCLUDE ESCLUSO
////////////////////////////////////////////////////

guiMyFrame::guiMyFrame( wxWindow* parent )
	:
	MyFrame( parent )
{
wxTextFile tfile;
	m_button2->Enable( true );
	m_button9->Enable( true );
	m_button9->SetFocus();
	if(!(wxDirExists("/Archivio"))) {
		wxMkdir("/Archivio",wxPATH_MKDIR_FULL);
	}
	wxString impostazioni = wxT("/Archivio/Settings.txt");
	if (!(wxFileExists(impostazioni))) {
		tfile.Create("\\Archivio\\Settings.txt");
		tfile.Clear() ;
		tfile.AddLine(wxT(""));
		tfile.AddLine(wxT(""));
		tfile.AddLine(wxT(""));
		tfile.AddLine(wxT("6"));
		tfile.AddLine(wxT("15"));
		tfile.AddLine(wxT("50"));
		tfile.AddLine(wxT("5"));
		tfile.AddLine(wxT("15"));
		tfile.AddLine(wxT("12"));
		tfile.AddLine(wxT("48"));
		tfile.AddLine(wxT("2"));
		tfile.AddLine(wxT(""));
		tfile.AddLine(wxT("1.000"));
		tfile.AddLine(wxT("0"));
		tfile.AddLine(wxT("0"));
		tfile.Write();
		tfile.Close();
	}

	if(!(tfile. Open ("\\Archivio\\Settings.txt"))) {
		wxMessageBox("Non posso aprire il flle Impostazioni Iniziali !!",
		             "Avviso", wxOK | wxICON_EXCLAMATION);
	} else {

// read the first line
		m_textCtrl20->SetValue(tfile. GetFirstLine ()) ;
		SET1=m_textCtrl20->GetValue();
		m_textCtrl21->SetValue(tfile. GetNextLine ()) ;
		SET2=m_textCtrl21->GetValue();
		m_textCtrl22->SetValue(tfile. GetNextLine ()) ;
		SET3=m_textCtrl22->GetValue();
		m_textCtrl24->SetValue(tfile. GetNextLine ()) ;
		SET4=m_textCtrl24->GetValue();
		m_textCtrl25->SetValue(tfile. GetNextLine ()) ;
		SET5=m_textCtrl25->GetValue();
		m_textCtrl26->SetValue(tfile. GetNextLine ()) ;
		SET6=m_textCtrl26->GetValue();
		m_textCtrl27->SetValue(tfile. GetNextLine ()) ;
		SET7=m_textCtrl27->GetValue();
		m_textCtrl28->SetValue(tfile. GetNextLine ()) ;
		SET8=m_textCtrl28->GetValue();
		m_textCtrl29->SetValue(tfile. GetNextLine ()) ;
		SET9=m_textCtrl29->GetValue();
		m_textCtrl30->SetValue(tfile. GetNextLine ()) ;
		SET10=m_textCtrl30->GetValue();
		RB = tfile. GetNextLine ();
		SET11=RB;
		m_dirPicker21->SetPath(tfile. GetNextLine ());
		SET12= m_dirPicker21->GetPath();
		m_textCtrl31->SetValue(tfile. GetNextLine ()) ;
		SET13=m_textCtrl31->GetValue();
		xp= tfile. GetNextLine ();
		yp= tfile. GetNextLine ();
		x=wxAtoi(xp);
		y=wxAtoi(yp);
		this->SetPosition(wxPoint(x,y));
		if (m_dirPicker21->GetPath() == "") {
			m_dirPicker21->Enable( false );
			m_checkBox4->SetValue(true);
		} else {
			m_checkBox4->SetValue(false);
		}
		Intestazione = m_textCtrl20->GetValue();
		Indirizzo = m_textCtrl21->GetValue();
		Citta = m_textCtrl22->GetValue();
		X1 = wxAtoi(m_textCtrl24->GetValue());
		Y1 = wxAtoi(m_textCtrl25->GetValue());
		NR = wxAtoi(m_textCtrl26->GetValue());
		X2 = wxAtoi(m_textCtrl27->GetValue());
		Y2 = wxAtoi(m_textCtrl28->GetValue());
		NE = wxAtoi(m_textCtrl29->GetValue());
		DI = wxAtoi(m_textCtrl30->GetValue());
		SC = (float)(wxAtof(m_textCtrl31->GetValue()));
		DI=DI*3;
		if (RB == "1") {
			m_radioBtn9->SetValue( true );
		} else {
			m_radioBtn10->SetValue( true );
		}
		tfile.Close();
	}
	initDB();

}
void guiMyFrame::OnKeyPress( wxKeyEvent& event )
{
	if ((event.GetKeyCode()) == WXK_TAB) {
		m_textCtrl1 ->SetFocus();
	}
	if ((((event.GetKeyCode()) == 13) || ((event.GetKeyCode()) == 370))) {
		if ((m_textCtrl1 ->HasFocus())||(m_textCtrl2 ->HasFocus())||(m_textCtrl3 ->HasFocus())||(m_textCtrl4 ->HasFocus())||(m_textCtrl5 ->HasFocus())||(m_textCtrl6 ->HasFocus())||(m_textCtrl7 ->HasFocus())||(m_textCtrl8 ->HasFocus())||(m_textCtrl9 ->HasFocus())||(m_textCtrl10 ->HasFocus())||(m_textCtrl11 ->HasFocus())) {
			//void EnableBellOnNoMatch(bool on = false);
			controllo1();
			if (CONT1 == 0) {
				if (A==1) {
					m_textCtrl2 ->SetFocus();
				} else if (A==2) {
					m_textCtrl3 ->SetFocus();
				} else if (A==3) {
					m_textCtrl4 ->SetFocus();
				} else if (A==4) {
					m_textCtrl5 ->SetFocus();
				} else if (A==5) {
					m_textCtrl6 ->SetFocus();
				} else if (A==6) {
					m_textCtrl7 ->SetFocus();
				} else if (A==7) {
					m_textCtrl8 ->SetFocus();
				} else if (A==8) {
					m_textCtrl9 ->SetFocus();
				} else if (A==9) {
					m_textCtrl10 ->SetFocus();
				} else if (A==10) {
					m_textCtrl11 ->SetFocus();
				} else {
					m_button1 ->SetFocus();
				}
			}
		}
	}
	event.Skip();
}

void guiMyFrame::OnCloseFrame( wxCloseEvent& event )
{
	x=0;
	y=0;
	xp="";
	yp="";
	this->GetPosition(&x, &y);
	xp <<  x;
	yp <<  y;
	wxTextFile tfile;
	if(!(tfile.Open ("\\Archivio\\Settings.txt"))) {
		wxMessageBox(_T("Non posso aprire il flle Impostazioni Iniziali !!"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	} else {
		if (m_radioBtn9->GetValue()) {
			RB = "1";
		} else {
			RB = "2";
		}
		tfile.Clear() ;
		tfile.AddLine(SET1);
		tfile.AddLine(SET2);
		tfile.AddLine(SET3);
		tfile.AddLine(SET4);
		tfile.AddLine(SET5);
		tfile.AddLine(SET6);
		tfile.AddLine(SET7);
		tfile.AddLine(SET8);
		tfile.AddLine(SET9);
		tfile.AddLine(SET10);
		tfile.AddLine(SET11);
		tfile.AddLine(SET12);
		tfile.AddLine(SET13);
		tfile.AddLine(xp);
		tfile.AddLine(yp);
		tfile.Write();
		tfile.Close();
	}
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		Destroy();
	} else {
		clearDB();
		Destroy();
	}
}

void guiMyFrame::PageChanged( wxNotebookEvent& event )
{
	m_textCtrl23->Enable(false);
	m_textCtrl23->SetValue (_T("EVENTUALI OPZIONI DI STAMPA SI POSSONO SCEGLIERE IN IMPOSTAZIONI APPLICAZIONE.\nPer la stampa delle buste, se la stampante è predisposta a tale scopo,\nutilizzare buste formato DL - 11x22~23. Inserire nella stampante dal lato\npiccolo con patella sotto richiusa!\n\nPER LE STAMPE E' CONSIGLIABILE UTILIZZARE LA STAMPANTE PREDEFINITA.\n\nSettaggi non opportuni saranno scartati!\n\nSe i tasti Anteprima sono disattivati, pigiare il tasto Avvia e eventuali\nopzioni nel Pannello principale."));
	if (m_textCtrl1->GetValue()=="") {
		m_bpButton5->Enable( false );
		m_bpButton6->Enable( false );
		m_bpButton111->Enable( false );
	}
	Stm1="";
	Stm="";
}

void guiMyFrame::Focus1( wxFocusEvent& event )
{
	A = 1;
	event.Skip();
}

void guiMyFrame::Focus2( wxFocusEvent& event )
{
	A = 2;
	event.Skip();
}

void guiMyFrame::Focus3( wxFocusEvent& event )
{
	A = 3;
	event.Skip();
}

void guiMyFrame::Focus4( wxFocusEvent& event )
{
	A = 4;
	event.Skip();
}

void guiMyFrame::Focus5( wxFocusEvent& event )
{
	A = 5;
	event.Skip();
}

void guiMyFrame::Focus6( wxFocusEvent& event )
{
	A = 6;
	event.Skip();
}

void guiMyFrame::Focus7( wxFocusEvent& event )
{
	A = 7;
	event.Skip();
}

void guiMyFrame::Focus8( wxFocusEvent& event )
{
	A = 8;
	event.Skip();
}

void guiMyFrame::m_bpButton7OnButtonClick( wxCommandEvent& event )
{
	x=0;
	y=0;
	xp="";
	yp="";
	this->GetPosition(&x, &y);
	xp <<  x;
	yp <<  y;
	wxTextFile tfile;
	if(!(tfile.Open ("\\Archivio\\Settings.txt"))) {
		wxMessageBox(_T("Non posso aprire il flle Impostazioni Iniziali !!"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	} else {
		if (m_radioBtn9->GetValue()) {
			RB = "1";
		} else {
			RB = "2";
		}
		tfile.Clear() ;
		tfile.AddLine(SET1);
		tfile.AddLine(SET2);
		tfile.AddLine(SET3);
		tfile.AddLine(SET4);
		tfile.AddLine(SET5);
		tfile.AddLine(SET6);
		tfile.AddLine(SET7);
		tfile.AddLine(SET8);
		tfile.AddLine(SET9);
		tfile.AddLine(SET10);
		tfile.AddLine(SET11);
		tfile.AddLine(SET12);
		tfile.AddLine(SET13);
		tfile.AddLine(xp);
		tfile.AddLine(yp);
		tfile.Write();
		tfile.Close();
	}
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		Destroy();
	} else {
		clearDB();
		Destroy();
	}
}

void guiMyFrame::m_bpButton2OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		resetCampi();
		disattivaCampi();
		disattivaNavigazione();
		m_button2->Enable( false );
		m_button9->Enable( false );
		m_bpButton11->Enable( false );
		m_bpButton12->Enable( false );
		m_bpButton13->Enable( false );
		m_bpButton14->Enable( false );
		m_bpButton15->Enable( false );
		m_dirPicker2->Enable( false );
		m_bpButton17->Enable( false );
		dialogo =new MyDialog1(this);
		
		loop_on=true;
		gaug=true;
		int domanda = wxMessageBox(_T("Non sempre la riparazione avviene con successo .. \nPRIMA FARE LE COPIE DI SICUREZZA E ASSICURARSI CHE\nNESSUN ALTRO UTENTE USI IL DATABASE !!\nPROSEGUO ?\nSe sì la riparazione avviene in qualche minuto, attendere la segnalazione della fine della procedura senza pigiare nessun altro tasto .!"),
		                           _T("Avviso"), wxYES_NO | wxICON_WARNING);
		if (domanda == wxYES) {
			
			m_textCtrl3 ->SetValue (_T("IN ESECUZIONE ATTENDI SENZA PIGIARE"));
			m_textCtrl4 ->SetValue (_T("ALCUN ALTRO TASTO .....!!!"));
			dialogo->Show();
			this->Enable( false );
			dialogo->SetFocus();
			if(!(wxDirExists("/Archivio/Riparato"))) {
				wxMkdir("/Archivio/Riparato",wxPATH_MKDIR_FULL);
			}

			wxString ripDB =  wxT("/Archivio/Riparato/Riparato.db");
			if (wxFileExists(ripDB)) {
				wxRemoveFile(ripDB);
			}
			db1->Open(ripDB);
			db1->ExecuteUpdate(wxT("CREATE TABLE Nominativi (ID integer primary key default null, COGNOME varchar(20), NOME varchar(20), ATTIVITA varchar(10), INDIRIZZO varchar(30), CAP varchar(5), CITTA varchar(20), TELEFONO varchar(12), SOCIO varchar(1), DATA varchar(4), EMAIL varchar(35), INIZIATIVE varchar(4))"));
			set = db->ExecuteQuery(wxT("SELECT * FROM Nominativi"));
			while (set.NextRow()) {
				GY++;
			}
			set = db->ExecuteQuery(wxT("SELECT * FROM Nominativi"));
			
			while (set.NextRow()) {
				letti++;
				CT1=set.GetAsString(1);
				CT1.Trim(false);
				CT1.Trim(true);
				CT1.Replace ( "'", "''", true);
				CT1="'"+CT1+"'";
				CT2=set.GetAsString(2);
				CT2.Trim(false);
				CT2.Trim(true);
				CT2.Replace ( "'", "''", true);
				CT2="'"+CT2+"'";
				CT3=set.GetAsString(3);
				CT3.Trim(false);
				CT3.Trim(true);
				CT3.Replace ( "'", "''", true);
				CT3="'"+CT3+"'";
				CT4=set.GetAsString(4);
				CT4.Trim(false);
				CT4.Trim(true);
				CT4.Replace ( "'", "''", true);
				CT4="'"+CT4+"'";
				CT5=set.GetAsString(5);
				CT5.Trim(false);
				CT5.Trim(true);
				CT5.Replace ( "'", "''", true);
				CT5="'"+CT5+"'";
				CT6=set.GetAsString(6);
				CT6.Trim(false);
				CT6.Trim(true);
				CT6.Replace ( "'", "''", true);
				CT6="'"+CT6+"'";
				CT7=set.GetAsString(7);
				CT7.Trim(false);
				CT7.Trim(true);
				CT7.Replace ( "'", "''", true);
				CT7="'"+CT7+"'";
				CT8=set.GetAsString(10);
				CT8.Trim(false);
				CT8.Trim(true);
				CT8.Replace ( "'", "''", true);
				CT8="'"+CT8+"'";
				CT9=set.GetAsString(8);
				CT9.Trim(false);
				CT9.Trim(true);
				CT9.Replace ( "'", "''", true);
				CT9="'"+CT9+"'";
				CT10=set.GetAsString(9);
				CT10.Trim(false);
				CT10.Trim(true);
				CT10.Replace ( "'", "''", true);
				CT10="'"+CT10+"'";
				CT11=set.GetAsString(11);
				CT11.Trim(false);
				CT11.Trim(true);
				CT11.Replace ( "'", "''", true);
				CT11="'"+CT11+"'";
				if(!(CT1=="''")) {
					set0.Finalize();
					if (db1->ExecuteUpdate(wxT("INSERT INTO Nominativi (COGNOME, NOME, ATTIVITA, INDIRIZZO, CAP, CITTA, TELEFONO, EMAIL, SOCIO, DATA, INIZIATIVE) VALUES ("+CT1+", "+CT2+", "+CT3+", "+CT4+", "+CT5+", "+CT6+
					                           ", "+CT7+", "+CT8+", "+CT9+" , "+CT10+", "+CT11+")"+";"))) {
						inseriti ++;
					} else {
						noninseriti ++;
					}
				}
				if(CT1=="''") {
					letti--;
				}
				//dialogo->Refresh();
				//questa funzione sostituisce Yield();
				while(wxTheApp->Pending()) 
				{
				wxTheApp->Dispatch();
				}
				//----fine funzione------
				dialogo->m_gauge1->SetValue(inseriti);
				W="";
				W << letti;
				dialogo->m_staticText39->SetLabel(W);
				P="";
				P << inseriti;
				dialogo->m_staticText40->SetLabel(P);
				S="";
				S << noninseriti;
				dialogo->m_staticText42->SetLabel(S);
				
			}
			db1->Close();
			db->Restore(wxT("/Archivio/Riparato/Riparato.db"));
			initDB();
			resetCampi();
			disattivaCampi();
			disattivaNavigazione();
			letti = 0;
			inseriti = 0;
			noninseriti = 0;
			m_textCtrl1 ->SetValue (_T("RIPARAZIONE ESEGUITA .....!!!"));
			m_textCtrl2 ->SetValue (_T("LETTI: "+ W));
			m_textCtrl5 ->SetValue (_T("INSERITI: "+ P));
			m_textCtrl6 ->SetValue (_T("NON INSERITI: "+S));
		}

		m_textCtrl3 ->SetValue("");
		m_textCtrl4 ->SetValue("");
		set.Finalize();
	}
}
void guiMyFrame::m_bpButton3OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		loop_on=true;
		int domanda = wxMessageBox(_T("Vuoi compattare l'archivio ?   Se sì fare prima le copie di sicurezza e accertarsi che non vi siano altri utenti connessi al database !"),
		                           _T("Avviso"), wxYES_NO | wxICON_WARNING);
		if (domanda == wxYES) {

			if (db->ExecuteUpdate(wxT("Vacuum;"))) {
				wxMessageBox(_T("Compattazione eseguita !!"),
				             _T("Avviso"), wxOK | wxICON_INFORMATION);

				initDB();
			}

			else {
				wxMessageBox(_T("Compattazione non eseguita perchè non necessaria !!"),
				             _T("Avviso"), wxOK | wxICON_INFORMATION);
			}
		}
		resetCampi();
		disattivaCampi();
		disattivaNavigazione();

	}
}
void guiMyFrame::m_bpButton1OnButtonClick( wxCommandEvent& event )
{
	path = "Help\\Help1.pdf";
	ShellExecuteA(GetDesktopWindow(), ("open"), LPCSTR(path.c_str()), NULL, NULL, SW_SHOWNORMAL);
}
void guiMyFrame::m_bpButton8OnButtonClick( wxCommandEvent& event )
{
	wxString M(m_textCtrl8->GetValue());
	int I=M.Find("@");
	if((I>0) && (I<30)) {
		path = "mailto:"+M;
		ShellExecuteA(GetDesktopWindow(), ("open"), LPCSTR(path.c_str()), NULL, NULL, SW_SHOWNORMAL);
	} else {
		wxMessageBox(_T("Campo E@Mail non valido !!"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	}
	m_button9->SetFocus();
}
void guiMyFrame::Focus9( wxFocusEvent& event )
{
	A = 9;
	event.Skip();
}

void guiMyFrame::Focus10( wxFocusEvent& event )
{
	A = 10;
	event.Skip();
}

void guiMyFrame::Focus11( wxFocusEvent& event )
{
	A = 0;
	event.Skip();
}

void guiMyFrame::m_bpButton4OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		wxString S(m_dirPicker2->GetPath());
		if (wxDirExists(S)) {
			m_dirPicker2->SetPath("");
			db->Backup(S+ wxT("/Archivio.db"));

			wxMessageBox(_T("Copia eseguita correttamente !."),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		} else {
			wxMessageBox(_T("Copia non eseguita per uno dei seguenti motivi:\n1> Non è stata selezionata una cartella valida."),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		}
	}
}
void guiMyFrame::m_button1OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		controllo1();
		if (CONT1==0) {
			//db->SetBusyTimeout(2000);
			aDatabase();
			db->Begin(WXSQLITE_TRANSACTION_DEFAULT);
			if (!db->ExecuteUpdate(wxT("INSERT INTO Nominativi (COGNOME, NOME, ATTIVITA, INDIRIZZO, CAP, CITTA, TELEFONO, EMAIL, SOCIO, DATA, INIZIATIVE) VALUES ("+CT1+", "+CT2+", "+CT3+", "+CT4+", "+CT5+", "+CT6+
			                           ", "+CT7+", "+CT8+", "+CT9+" , "+CT10+", "+CT11+")"+";"))) {
				wxMessageBox(_T("ERRORE NELL' INSERIMANTO DATI NELLA TABELLA !!"),
				             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			} else {

				resetCampi();
				m_textCtrl1 ->SetValue (_T("INSERITO !!"));
				m_button2->Enable( true );
				m_button2 ->SetFocus();
				disattivaCampi();
				m_button1->Enable( false );
				db->Commit();
			}
		}

	}
}

void guiMyFrame::m_button2OnButtonClick( wxCommandEvent& event )
{
	resetCampi();
	m_button1->Enable( true );
	m_button3->Enable( false );
	m_button4->Enable( false );
	m_button5->Enable( false );
	m_button6->Enable( false );
	m_button7->Enable( false );
	m_button8->Enable( false );
	m_bpButton5->Enable( false );
	m_bpButton6->Enable( false );
	m_bpButton111->Enable( false );
	m_bpButton9->Enable( false );
	m_textCtrl1 ->SetFocus();
	A=1;
	m_button2->Enable( false );
}

void guiMyFrame::m_button3OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		controllo1();
		if (CONT1== 0) {
			daDatabase();
			aDatabase();
			//db->SetBusyTimeout(2000);
			db->Begin(WXSQLITE_TRANSACTION_DEFAULT);
			if (!db->ExecuteUpdate(wxT("UPDATE Nominativi  SET COGNOME = "+CT1+" , NOME = "+CT2+" , ATTIVITA = "+CT3+" , INDIRIZZO = "+CT4+" , CAP = "+CT5+" , CITTA = "+CT6+" , TELEFONO = "+CT7+" , EMAIL = "+CT8+" , SOCIO = "+CT9+
			                           " , DATA = "+CT10+" , INIZIATIVE = "+CT11+" WHERE COGNOME = "+DA1+" AND NOME = "+DA2+" AND ATTIVITA = "+DA3+" AND INDIRIZZO = "+DA4+" AND CAP = "+DA5+" AND CITTA = "+DA6+
			                           " AND TELEFONO = "+DA7+" AND  EMAIL = "+DA8+" AND SOCIO = "+DA9+" AND DATA = "+DA10+" AND INIZIATIVE = "+DA11+";"))) {
				wxMessageBox(_T("ERRORE NELL'AGGIORNAMENTO DATI NELLA TABELLA !!"),
				             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			} else {

				resetCampi();
				disattivaCampi();
				m_textCtrl1 ->SetValue (_T("AGGIORNATO !!"));
				m_button3->Enable( false );
				m_button4->Enable( false );
				m_button5->Enable( false );
				m_button6->Enable( false );
				m_button7->Enable( false );
				m_button8->Enable( false );
				m_bpButton5->Enable( false );
				m_bpButton6->Enable( false );
				m_bpButton111->Enable( false );
				m_bpButton9->Enable( false );
				m_button9->SetFocus();
				db->Commit();
			}
		}

	}
}

void guiMyFrame::m_button4OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		int domanda = wxMessageBox(_T("Sei sicuro di eliminare il nominativo ?"),
		                           _T("Avviso"), wxYES_NO | wxICON_EXCLAMATION);
		if (domanda == wxYES) {
			m_button7->SetFocus();
			daDatabase();
			aDatabase();
			//db->SetBusyTimeout(2000);
			db->Begin(WXSQLITE_TRANSACTION_DEFAULT);

			if (!db->ExecuteUpdate(wxT("DELETE FROM Nominativi WHERE COGNOME = "+DA1+" AND NOME = "+DA2+" AND ATTIVITA = "+DA3+" AND INDIRIZZO = "+DA4+" AND CAP = "+DA5+" AND CITTA = "+DA6+
			                           " AND TELEFONO = "+DA7+" AND  EMAIL = "+DA8+" AND SOCIO = "+DA9+" AND DATA = "+DA10+" AND INIZIATIVE = "+DA11+";"))) {

				wxMessageBox(_T("ERRORE NELLA ELIMINAZIONE DATI NELLA TABELLA !!"),
				             _T("Avviso"), wxOK | wxICON_EXCLAMATION);

			} else {

				resetCampi();
				disattivaCampi();
				m_textCtrl1 ->SetValue (_T("ELIMINATO !!"));
				m_button3->Enable( false );
				m_button4->Enable( false );
				m_button5->Enable( false );
				m_button6->Enable( false );
				m_button7->Enable( false );
				m_button8->Enable( false );
				m_bpButton5->Enable( false );
				m_bpButton6->Enable( false );
				m_bpButton111->Enable( false );
				m_bpButton9->Enable( false );
				m_button9->SetFocus();
				db->Commit();
			}
		}
	}
}

void guiMyFrame::m_button5OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		OF=1;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		set.NextRow();
		resetCampi();
		leggiNomi();
		set.Finalize();
	}
}

void guiMyFrame::m_button6OnButtonClick( wxCommandEvent& event )
{
	if(!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurari che il server sia acceso o cambiare percorso nelle impostazioni !"), _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	} else {
		OF=2;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		set.NextRow();
		if (!(set.GetAsString(1)=="")) {
			resetCampi();
			leggiNomi();
		}
		set.Finalize();
	}
}
void guiMyFrame::m_button7OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		OF=3;
		ORD="desc";
		sql();
		set = db->ExecuteQuery(wsql);
		set.NextRow();
		if (!(set.GetAsString(1)=="")) {
			resetCampi();
			leggiNomi();
		}
		set.Finalize();
	}
}
void guiMyFrame::m_button8OnButtonClick( wxCommandEvent& event )
{
	if(!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurari che il server sia acceso o cambiare percorso nelle impostazioni !"), _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	} else {
		OF=1;
		ORD="desc";
		sql();
		set = db->ExecuteQuery(wsql);
		set.NextRow();
		resetCampi();
		leggiNomi();
		set.Finalize();
	}
}
void guiMyFrame::Ctrl12( wxKeyEvent& event )
{
	resetCampi();
	disattivaNavigazione();
}
void guiMyFrame::m_button9OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		aDatabase();
		if (CT17 == "''") {
			CT17 ="'ZZZZ'" ;
		}
		if (CT19 == "''") {
			CT19 ="'ZZZZ'" ;
		}
		int A2 = atoi(m_textCtrl17->GetValue());
		int A1 = atoi(m_textCtrl16->GetValue());
		int A4 = atoi(m_textCtrl19->GetValue());
		int A3 = atoi(m_textCtrl18->GetValue());
		int R1 = A2 - A1;
		int R2 = A4 - A3;
		if (((R1 < 0) || (A1 < 1000) || (A2 < 1000)) && ((!((m_textCtrl16->GetValue()) =="")) || (!((m_textCtrl17->GetValue()) ==""))) && (m_checkBox1->GetValue())) {
			wxMessageBox(_T("SOCIO:\n intervallo date non ammesso !!"), _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl16->SetFocus();
		} else if (((R2 < 0) || (A3 < 1000) || (A4 < 1000)) && ((!((m_textCtrl18->GetValue()) =="")) || (!((m_textCtrl19->GetValue()) ==""))) && (m_checkBox2->GetValue())) {
			wxMessageBox(_T("ULTIMO INTERVENTO:\n intervallo date non ammesso !!"), _T("Avviso"), wxOK | wxICON_EXCLAMATION);
			m_textCtrl18->SetFocus();
		} else {
			if (m_radioBtn3->GetValue()) {
				SQL1 = "NOT";
			} else {
				SQL1 = "";
			}
			if (m_radioBtn6->GetValue()) {
				SQL2 = "NOT";
			} else {
				SQL2 = "";
			}
			if (m_checkBox3->GetValue()) {
				CT20 = "'%@%'";
			} else {
				CT20 = "'ZZ'";
			}
			OF=1;
			ORD="asc";
			sql();
			set = db->ExecuteQuery(wsql);
			set.NextRow();
			if (!(set.GetAsString(1)== "")) {
				m_button1->Enable( false );
				m_button2->Enable( true );
				m_button3->Enable( true );
				m_button4->Enable( true );
				m_button5->Enable( true );
				m_button6->Enable( true );
				m_button7->Enable( true );
				m_button8->Enable( true );
				m_bpButton5->Enable( true );
				m_bpButton6->Enable( true );
				m_bpButton111->Enable( true );
				m_bpButton9->Enable( true );
				resetCampi();
				leggiNomi();
				m_textCtrl11->SetFocus();
				m_button6->SetFocus();
			}
		}
		set.Finalize();
	}
}
void guiMyFrame::OnRadio1( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl13->Enable( false );
	m_textCtrl13->SetValue("");
	resetCampi();
}

void guiMyFrame::OnRadio2( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl13->Enable( true );
	m_textCtrl13->SetFocus();
	resetCampi();
}

void guiMyFrame::OnRadio3( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl13->Enable( true );
	m_textCtrl13->SetFocus();
	resetCampi();
}

void guiMyFrame::Ctrl13( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::OnRadio4( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl14->Enable( false );
	m_textCtrl14->SetValue("");
	resetCampi();
}

void guiMyFrame::OnRadio5( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl14->Enable( true );
	m_textCtrl14->SetFocus();
	resetCampi();
}

void guiMyFrame::OnRadio6( wxCommandEvent& event )
{
	disattivaNavigazione();
	m_textCtrl14->Enable( true );
	m_textCtrl14->SetFocus();
	resetCampi();
}

void guiMyFrame::Ctrl14( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::OnCheck1( wxCommandEvent& event )
{
	disattivaNavigazione();
	resetCampi();
	if (m_checkBox1->GetValue()) {
		m_textCtrl15->Enable( true );
		m_textCtrl16->Enable( true );
		m_textCtrl17->Enable( true );
		m_textCtrl15->SetFocus();
	} else {
		m_textCtrl15->Enable( false );
		m_textCtrl16->Enable( false );
		m_textCtrl17->Enable( false );
		m_textCtrl15->SetValue("");
		m_textCtrl16->SetValue("");
		m_textCtrl17->SetValue("");
	}
}

void guiMyFrame::Ctrl15( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Ctrl16( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Ctrl17( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::OnCheck2( wxCommandEvent& event )
{
	disattivaNavigazione();
	resetCampi();
	if (m_checkBox2->GetValue()) {
		m_textCtrl18->Enable( true );
		m_textCtrl19->Enable( true );
		m_textCtrl18->SetFocus();
	} else  {
		m_textCtrl18->Enable( false );
		m_textCtrl19->Enable( false );
		m_textCtrl18->SetValue("");
		m_textCtrl19->SetValue("");
	}
}

void guiMyFrame::Ctrl18( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Ctrl19( wxKeyEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Bt7( wxCommandEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Bt8( wxCommandEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::Cb3( wxCommandEvent& event )
{
	disattivaNavigazione();
	resetCampi();
}

void guiMyFrame::m_bpButton9OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		wxString M("");
		wxString MAIL("");
		int K= 0;
		OF=1;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		while (set.NextRow()) {
			M=set.GetAsString(10);
			int I=M.Find("@");
			if((I>0) && (I<30)) {
				K++;
				MAIL = MAIL+M+";%20";
			}
		}
		if (K > 0) {
			ShellExecuteA (NULL, "open", "mailto:"+MAIL, NULL, NULL, SW_SHOW);
		} else {
			wxMessageBox(_T("Per questa selezione, non ci sono nominativi con E@Mail !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		}
		m_button9->SetFocus();
		set.Finalize();
	}
}

void guiMyFrame::m_bpButton5OnButtonClick( wxCommandEvent& event )
{
	//Anteprima Tabulati

	m_textCtrl23->SetValue("");
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		flagStampa = 1;
		m_textCtrl23->Enable(true);
		OF=1;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		Stm=Stm1="";
		while (set.NextRow()) {
			Stm.Printf(wxT("%-21s%-21s%-11s%-31s%-6s%-21s%-13s%-36s%-2s%-6s%-6s\n"),
			           set.GetAsString(1), set.GetAsString(2), set.GetAsString(3), set.GetAsString(4), set.GetAsString(5), set.GetAsString(6), set.GetAsString(7), set.GetAsString(10), set.GetAsString(8), set.GetAsString(9), set.GetAsString(11));
			Stm1 =Stm1 + Stm;
		}
		set.Finalize();
		round(((float)((float)(Stm1.Len())/175)/NR));
		QuickPrint*  myprint = new QuickPrint(R1, wxT("Archivio"), 30);
		QuickPrint*  myprint1 = new QuickPrint(R1, wxT("Archivio"), 30);

		myprint->performPageSetup(true);
		myprint1->performPageSetup(false);
		wxPrintDialogData data(myprint->getPrintData());
		wxPrintPreview *preview;
		wxPreviewFrame *frame;
		preview=new wxPrintPreview(myprint,  myprint1, &data );
		if (preview->IsOk()) {
			preview->SetZoom(75);
			RFX=dpiz(920);
			RFY=dpiz(745);
			frame = new wxPreviewFrame(preview, this,wxT("Anteprima stampa tabulati"),wxPoint(-1, -1), wxSize(RFX, RFY));
			frame->Centre(wxBOTH);
			frame->Initialize();
			frame->Show();
			
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA TABULATI ESEGUITA CORRETTAMENTE !"));

		} else {
			delete preview;
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA TABULATI NON ESEGUITA,\nSTAMPANTE PREDEFINITA NON CONNESSA O NON CORRETTAMENTE SETTATA !"));
			return;
		}

	}
}
void guiMyFrame::m_bpButton6OnButtonClick( wxCommandEvent& event )
{
	//Anteprima Etichette
	m_textCtrl23->SetValue("");
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		flagStampa = 2;
		m_textCtrl23->Enable(true);
		OF=1;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		Stm=Stm1="";
		while (set.NextRow()) {
			Stm.Printf(wxT("%-21s%-21s%-11s%-31s%-6s%-21s%-13s%-36s%-2s%-6s%-6s\n"),
			           set.GetAsString(1), set.GetAsString(2), set.GetAsString(3), set.GetAsString(4), set.GetAsString(5), set.GetAsString(6), set.GetAsString(7), set.GetAsString(10), set.GetAsString(8), set.GetAsString(9), set.GetAsString(11));
			Stm1 =Stm1 + Stm;
		}
		set.Finalize();
		round(((float)((float)(Stm1.Len())/175)/NE));
		QuickPrint*  myprint = new QuickPrint(R1, wxT("Archivio"), 30);
		QuickPrint*  myprint1 = new QuickPrint(R1, wxT("Archivio"), 30);

		myprint->performPageSetup(true);
		myprint1->performPageSetup(false);
		wxPrintDialogData data(myprint->getPrintData());
		wxPrintPreview *preview;
		wxPreviewFrame *frame;
		preview=new wxPrintPreview(myprint,  myprint1, &data);
		if (preview->IsOk()) {
			preview->SetZoom(55);
			RFX=dpiz(650);
			RFY=dpiz(770);
			frame = new wxPreviewFrame(preview, this,wxT("Anteprima stampa etichette"),wxPoint(-1, -1), wxSize(RFX, RFY));
			frame->Centre(wxBOTH);
			frame->Initialize();
			frame->Show();
			
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA ETICHETTE ESEGUITA CORRETTAMENTE !"));
		} else {
			delete preview;
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA ETICHETTE NON ESEGUITA,\nSTAMPANTE PREDEFINITA NON CONNESSA O NON CORRETTAMENTE SETTATA !"));
			return;
		}

	}
}
void guiMyFrame::m_bpButton111OnButtonClick( wxCommandEvent& event )
{
//Anteprima buste
	m_textCtrl23->SetValue("");

	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		flagStampa = 3;
		m_textCtrl23->Enable(true);
		OF=1;
		ORD="asc";
		sql();
		set = db->ExecuteQuery(wsql);
		Stm=Stm1="";
		while (set.NextRow()) {
			Stm.Printf(wxT("%-21s%-21s%-11s%-31s%-6s%-21s%-13s%-36s%-2s%-6s%-6s\n"),
			           set.GetAsString(1), set.GetAsString(2), set.GetAsString(3), set.GetAsString(4), set.GetAsString(5), set.GetAsString(6), set.GetAsString(7), set.GetAsString(10), set.GetAsString(8), set.GetAsString(9), set.GetAsString(11));
			Stm1 =Stm1 + Stm;
		}
		set.Finalize();
		round(((float)((float)(Stm1.Len())/175)));
		QuickPrint*  myprint = new QuickPrint(R1, wxT("Archivio"), 30);
		QuickPrint*  myprint1 = new QuickPrint(R1, wxT("Archivio"), 30);

		myprint->performPageSetup(true);
		myprint1->performPageSetup(false);
		wxPrintDialogData data(myprint->getPrintData());
		wxPrintPreview *preview;
		wxPreviewFrame *frame;
		preview=new wxPrintPreview(myprint,  myprint1, &data );
		if (preview->IsOk()) {
			preview->SetZoom(90);
			RFX=dpiz(900);
			RFY=dpiz(600);
			frame = new wxPreviewFrame(preview, this,wxT("Anteprima stampa buste"),wxPoint(-1, -1), wxSize(RFX, RFY));
			frame->Centre(wxBOTH);
			frame->Initialize();
			frame->Show();
			
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA BUSTE ESEGUITA CORRETTAMENTE !"));
		} else {
			delete preview;
			m_textCtrl23->SetValue (_T("ANTEPRIMA E/O STAMPA BUSTE NON ESEGUITA,\nSTAMPANTE PREDEFINITA NON CONNESSA O NON CORRETTAMENTE SETTATA !"));
			return;
		}

	}
}
void guiMyFrame::m_button13OnButtonClick( wxCommandEvent& event )
{
	m_textCtrl24->SetValue("6");
	m_textCtrl25->SetValue("15");
	m_textCtrl26->SetValue("50");
	m_textCtrl27->SetValue("5");
	m_textCtrl28->SetValue("15");
	m_textCtrl29->SetValue("12");
	m_textCtrl30->SetValue("48");
	m_radioBtn10->SetValue(true);
	m_textCtrl31->SetValue("1.000");
}

void guiMyFrame::m_bpButton10OnButtonClick( wxCommandEvent& event )
{
	bool Impo = true;
	double value1 = wxAtoi(m_textCtrl24->GetValue());
	double value2 = wxAtoi(m_textCtrl25->GetValue());
	double value3 = wxAtoi(m_textCtrl26->GetValue());
	double value4 = wxAtoi(m_textCtrl27->GetValue());
	double value5 = wxAtoi(m_textCtrl28->GetValue());
	double value6 = wxAtoi(m_textCtrl29->GetValue());
	double value7 = wxAtoi(m_textCtrl30->GetValue());
	float value8 = (float)(wxAtof(m_textCtrl31->GetValue()));
	int div;
	int resto;
	div= value6/2;
	resto = value6-(div*2);
	if ((value8<0.1) || (value8>1.5)) {
		Impo = false;
	}
	if ((value1<2) || (value1>10)) {
		Impo = false;
	}
	if ((value2<2) || (value2>(210-(3.2*value3+10))/2)) {
		Impo = false;
	}
	if (m_radioBtn9->GetValue()) {
		if ((value4>40) || (value5> (135-(value7*(value6-1))/2)) || (value4<2)) {
			Impo = false;
		}
	} else {
		if ((value4>10) || (value5> (135-(value7*(value6-2))/4)) || (value4<2)) {
			Impo = false;
		}
	}
	if (m_radioBtn10->GetValue()) {
		if (!(resto == 0)) {
			Impo = false;
		}
	}
	if (Impo) {
		wxTextFile tfile;
		if(!(tfile.Open ("\\Archivio\\Settings.txt"))) {
			wxMessageBox(_T("Non posso aprire il flle Impostazioni Iniziali !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		} else {
			if (m_radioBtn9->GetValue()) {
				RB = "1";
			} else {
				RB = "2";
			}
			tfile.Clear() ;
			tfile.AddLine(m_textCtrl20->GetValue());
			SET1=m_textCtrl20->GetValue();
			tfile.AddLine(m_textCtrl21->GetValue());
			SET2=m_textCtrl21->GetValue();
			tfile.AddLine(m_textCtrl22->GetValue());
			SET3=m_textCtrl22->GetValue();
			tfile.AddLine(m_textCtrl24->GetValue());
			SET4=m_textCtrl24->GetValue();
			tfile.AddLine(m_textCtrl25->GetValue());
			SET5=m_textCtrl25->GetValue();
			tfile.AddLine(m_textCtrl26->GetValue());
			SET6=m_textCtrl26->GetValue();
			tfile.AddLine(m_textCtrl27->GetValue());
			SET7=m_textCtrl27->GetValue();
			tfile.AddLine(m_textCtrl28->GetValue());
			SET8=m_textCtrl28->GetValue();
			tfile.AddLine(m_textCtrl29->GetValue());
			SET9=m_textCtrl29->GetValue();
			tfile.AddLine(m_textCtrl30->GetValue());
			SET10=m_textCtrl30->GetValue();
			tfile.AddLine(RB);
			SET11=RB;
			tfile.AddLine(m_dirPicker21->GetPath());
			SET12=m_dirPicker21->GetPath();
			tfile.AddLine(m_textCtrl31->GetValue());
			SET13=m_textCtrl31->GetValue();
			x=0;
			y=0;
			xp="";
			yp="";
			this->GetPosition(&x, &y);
			xp <<  x;
			yp <<  y;
			tfile.AddLine(xp);
			tfile.AddLine(yp);
			tfile.Write();
			tfile.Close();
			Intestazione = m_textCtrl20->GetValue();
			Indirizzo = m_textCtrl21->GetValue();
			Citta = m_textCtrl22->GetValue();
			X1 = wxAtoi(m_textCtrl24->GetValue());
			Y1 = wxAtoi(m_textCtrl25->GetValue());
			NR = wxAtoi(m_textCtrl26->GetValue());
			X2 = wxAtoi(m_textCtrl27->GetValue());
			Y2 = wxAtoi(m_textCtrl28->GetValue());
			NE = wxAtoi(m_textCtrl29->GetValue());
			DI = wxAtoi(m_textCtrl30->GetValue());
			SC = (float)(wxAtof(m_textCtrl31->GetValue()));
			DI=DI*3;
			initDB();
			resetCampi();
			disattivaCampi();
			disattivaNavigazione();
			wxMessageBox(_T("Impostazioni salvate !!"),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		}
	} else {
		wxMessageBox(_T("Uno o più valori impostazioni non ammessi !!"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
	}
}
void guiMyFrame::m_button14OnButtonClick( wxCommandEvent& event )
{
	if((!(wxDirExists(m_dirPicker21->GetPath())) && (m_dirPicker21->GetPath() != "")) || !db->IsOpen()) {
		wxMessageBox(_T("NON POSSO LEGGERE IL DATABASE !! Assicurarsi che il server sia acceso e riavviare l'applicazione inserendo prima le credenziali di rete .. \nOppure cambiare o reinserire il percorso nelle impostazioni !"),
		             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		m_dirPicker21->SetPath("");
	} else {
		wxString S(m_filePicker1->GetPath());
		if (wxFileExists(S)) {
			m_filePicker1->SetPath("");
			db->Restore(S);
			initDB();
			wxMessageBox(_T("Ripristino eseguito correttamente !."),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		} else {
			wxMessageBox(_T("Ripristino non eseguito per uno dei seguenti motivi:\n1> Non è stato selezionato un file valido."),
			             _T("Avviso"), wxOK | wxICON_EXCLAMATION);
		}
	}
}
void guiMyFrame::Check4( wxCommandEvent& event )
{
	if (m_checkBox4->GetValue()) {
		m_dirPicker21->SetPath("");
		m_dirPicker21->Enable( false );
	} else {
		m_dirPicker21->Enable( true );
	}
}
void guiMyFrame::Idle( wxIdleEvent& event )
{
	if(loop_on) {
		loop_on=false;
		if (gaug) {
			dialogo->Destroy();
			GY=0;
			gaug=false;
		}
		this->Enable( true );
		this->SetFocus();
		m_bpButton11->Enable( true );
		m_bpButton12->Enable( true );
		m_bpButton13->Enable( true );
		m_bpButton14->Enable( true );
		m_bpButton15->Enable( true );
		m_button2->Enable( true );
		m_button9->Enable( true );
		m_dirPicker2->Enable( true );
		m_bpButton17->Enable( true );
		wxBell();
		m_button9->SetFocus();
		wxIdleEvent(event).RequestMore();

	}

}

bool MyApp::OnInit()
{
	loop_on = false;
	principale = new guiMyFrame(NULL);
	principale->Show();
	//SetTopWindow( new guiMyFrame( NULL ) ); // se guiMyFrame è la classe derivata
	//GetTopWindow()->Show();
	return true;
}
guiMyDialog1::guiMyDialog1( wxWindow* parent ):MyDialog1( parent )
{

}
