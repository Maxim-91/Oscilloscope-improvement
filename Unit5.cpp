//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn2Click(TObject *Sender)
{
Table1->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TForm5::BitBtn3Click(TObject *Sender)
{
Table1->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn4Click(TObject *Sender)
{
int i,k,n,j;
Table1->First();
if(Edit1->Text=="") ShowMessage("¬вед≥ть необх≥дн≥ дан≥ в поле пошук");
k=Table1->RecordCount;
for(i=0;i<k;i++)
{
for(j=0;j<20;j++)
if(Edit1->Text==Table1->Fields->Fields[j]->AsString)
n=i;
if(i<n)
Table1->Next();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn5Click(TObject *Sender)
{
Table1->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn6Click(TObject *Sender)
{
Table1->Last();
}
//---------------------------------------------------------------------------


void __fastcall TForm5::N3Click(TObject *Sender)
{
Table1->Insert();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N4Click(TObject *Sender)
{
Table1->Delete();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N11Click(TObject *Sender)
{
Table1->First();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N5Click(TObject *Sender)
{
Table1->Last();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N6Click(TObject *Sender)
{
int i,k,n,j;
Table1->First();
if(Edit1->Text=="") ShowMessage("¬вед≥ть необх≥дн≥ дан≥ в поле пошук");
k=Table1->RecordCount;
for(i=0;i<k;i++)
{
for(j=0;j<20;j++)
if(Edit1->Text==Table1->Fields->Fields[j]->AsString)
n=i;
if(i<n)
Table1->Next();
}        
}
//---------------------------------------------------------------------------


void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
//QuickRep1->Preview();
}
//---------------------------------------------------------------------------


