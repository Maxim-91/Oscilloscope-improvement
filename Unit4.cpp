//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
if(Edit1->Text==""||Edit2->Text==""||Edit3->Text=="") ShowMessage("�������� �� ���� ��� �����������");
if(Edit1->Text==""||Edit2->Text==""||Edit3->Text=="") Form4->Visible=true;
if(Edit1->Text==""||Edit2->Text==""||Edit3->Text=="") Form1->Visible=false;
else Form1->Visible=true;
//Form4->Visible=false;
//Form1->Visible=true;

Form1->Label48->Caption=Form4->Edit1->Text+" "+Form4->Edit2->Text+" "+Form4->Edit3->Text+"�����";

Form1->Table1->Insert();
Form1->Table1->Fields->Fields[0]->AsString=Edit1->Text;
Form1->Table1->Fields->Fields[1]->AsString=Edit2->Text;
Form1->Table1->Fields->Fields[2]->AsString=Edit3->Text;
Form1->Table1->Fields->Fields[3]->AsString=Label3->Caption;


 }
//---------------------------------------------------------------------------


void __fastcall TForm4::FormMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Label3->Caption=DateTimeToStr(Now());

}
//---------------------------------------------------------------------------






void __fastcall TForm4::Edit3KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // ����� � 'Key == '-'' - �� ������ ������ ��� ������������� �����, �� ���������� ����� ������.
  else if (Key == ',') // �������
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // ���� ������� ��� ����
                Key = 0;
        else // ���� ��� ��� �������
                Key = DecimalSeparator;
        }

  else if (Key == '.') // �������
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // ���� ������� ��� ����
                Key = 0;
        else // ���� ��� ��� �������
                Key = DecimalSeparator;
        }

  else Key = 0; // �� �����
 if (Key==0) ShowMessage("�� ����� �� ����� ������. ����� ������� ���� ����� �� 0 �� 9");
 }        
}
//---------------------------------------------------------------------------

