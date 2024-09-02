//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TLabel *Label1;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TPanel *Panel1;
        TEdit *Edit3;
        TEdit *Edit4;
        TGroupBox *GroupBox1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TMainMenu *MainMenu1;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label2;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label15;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TEdit *Edit5;
        TLabel *Label28;
        TEdit *Edit6;
        TLabel *Label29;
        TLabel *Label30;
        TEdit *Edit7;
        TEdit *Edit8;
        TLabel *Label31;
        TLabel *Label32;
        TLabel *Label33;
        TLabel *Label34;
        TLabel *Label35;
        TLabel *Label36;
        TLabel *Label37;
        TLabel *Label38;
        TLabel *Label39;
        TLabel *Label40;
        TLabel *Label41;
        TLabel *Label42;
        TImage *Image3;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TEdit *Edit9;
        TLabel *Label43;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TSpeedButton *SpeedButton8;
        TEdit *Edit10;
        TEdit *Edit11;
        TEdit *Edit12;
        TEdit *Edit13;
        TEdit *Edit14;
        TLabel *Label44;
        TEdit *Edit15;
        TEdit *Edit16;
        TEdit *Edit17;
        TEdit *Edit18;
        TEdit *Edit19;
        TEdit *Edit20;
        TSpeedButton *SpeedButton9;
        TSpeedButton *SpeedButton10;
        TSpeedButton *SpeedButton11;
        TSpeedButton *SpeedButton12;
        TSpeedButton *SpeedButton13;
        TSpeedButton *SpeedButton14;
        TBitBtn *BitBtn1;
        TLabel *Label45;
        TLabel *Label46;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TLabel *Label47;
        TLabel *Label48;
        TDBGrid *DBGrid1;
        TTable *Table1;
        TDataSource *DataSource1;
        TTimer *Timer1;
        TSpeedButton *SpeedButton15;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N12;
        TMenuItem *N22;
        TMenuItem *N7;
        TMenuItem *sd1;
        TSpeedButton *SpeedButton16;
        TLabel *Label49;
        TDataSource *DataSource2;
        TDBGrid *DBGrid2;
        TTable *Table2;
        TPopupMenu *PopupMenu1;
        TMenuItem *N11;
        TMenuItem *N21;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall Edit9Change(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall Edit10Change(TObject *Sender);
        void __fastcall Edit11Change(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall Edit13Change(TObject *Sender);
        void __fastcall Edit12Change(TObject *Sender);
        void __fastcall Edit14Change(TObject *Sender);
        void __fastcall SpeedButton8Click(TObject *Sender);
        void __fastcall SpeedButton9Click(TObject *Sender);
        void __fastcall Edit15Change(TObject *Sender);
        void __fastcall Edit16Change(TObject *Sender);
        void __fastcall SpeedButton10Click(TObject *Sender);
        void __fastcall Edit17Change(TObject *Sender);
        void __fastcall Edit18Change(TObject *Sender);
        void __fastcall Edit19Change(TObject *Sender);
        void __fastcall Edit20Change(TObject *Sender);
        void __fastcall SpeedButton11Click(TObject *Sender);
        void __fastcall SpeedButton12Click(TObject *Sender);
        void __fastcall SpeedButton13Click(TObject *Sender);
        void __fastcall SpeedButton14Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton15Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall N21Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall N22Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall SpeedButton16Click(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit2KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit9KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit3KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit4KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit10KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit11KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit13KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit12KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit14KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit5KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit6KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit7KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit8KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit15KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit16KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit17KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit18KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit19KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit20KeyPress(TObject *Sender, char &Key);
        void __fastcall N1Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
