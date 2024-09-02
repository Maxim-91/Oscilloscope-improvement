//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit5.h"
#include "Unit4.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
if(Edit1->Text=="admin"&&MaskEdit1->Text=="admin") Form5->Visible=true;
else ShowMessage("¬и ввели нев≥рний лог≥н або пароль"); 
Form6->Close();
Edit1->Text="";
MaskEdit1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::MaskEdit1Change(TObject *Sender)
{
//MaskEdit1->EditMask='*'+'*';
}
//---------------------------------------------------------------------------

