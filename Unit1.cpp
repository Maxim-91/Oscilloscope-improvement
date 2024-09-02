//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Edit9->Enabled=false;
//if(Edit1->Text=="") ShowMessage("Введіть L");
//if(Edit2->Text=="") ShowMessage("Введіть S");
//if(RadioButton1->Checked==false&&RadioButton2->Checked==false&&RadioButton3->Checked==false) ShowMessage("Оберіть матеріал");
//if(Edit1->Text==""||Edit2->Text==""||RadioButton1->Checked==false&&RadioButton2->Checked==
//false&&RadioButton3->Checked==false);
float a,m;
if(RadioButton1->Checked==true) a=0.000000028;
else if(RadioButton2->Checked==true) a=0.000000017;
else if(RadioButton3->Checked==true) a=0.000000012;
m=StrToFloat(a)*(StrToFloat(Edit1->Text)/StrToFloat(Edit2->Text));
Label7->Caption=m;

//--------------
 Table1->Fields->Fields[4]->AsFloat=StrToFloat(Edit1->Text);
 Table1->Fields->Fields[5]->AsFloat=StrToFloat(Edit2->Text);
 Table1->Fields->Fields[6]->AsFloat=StrToFloat(Edit9->Text);
 Table1->Fields->Fields[7]->AsFloat=StrToFloat(Label7->Caption);
}
//---------------------------------------------------------------------------










void __fastcall TForm1::Edit9Change(TObject *Sender)
{
if(Edit9->Text=="") BitBtn1->Enabled=false;
else BitBtn1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Form1->Visible=false;
BitBtn1->Enabled=false;
SpeedButton4->Enabled=false;
SpeedButton5->Enabled=false;
SpeedButton6->Enabled=false;
SpeedButton7->Enabled=false;
SpeedButton8->Enabled=false;
SpeedButton9->Enabled=false;
SpeedButton10->Enabled=false;
SpeedButton11->Enabled=false;
SpeedButton12->Enabled=false;
SpeedButton13->Enabled=false;
SpeedButton14->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
Edit10->Enabled=false;

float I;
I=StrToFloat(Edit3->Text)/(2*StrToFloat(Label7->Caption)+StrToFloat(Edit4->Text));
Label12->Caption=I;

Table1->Fields->Fields[8]->AsFloat=StrToFloat(Edit3->Text);
Table1->Fields->Fields[9]->AsFloat=StrToFloat(Edit4->Text);
Table1->Fields->Fields[10]->AsFloat=StrToFloat(Edit10->Text);
Table1->Fields->Fields[11]->AsFloat=StrToFloat(Label12->Caption);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit10Change(TObject *Sender)
{
if(Edit10->Text=="") SpeedButton4->Enabled=false;
else SpeedButton4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit11Change(TObject *Sender)
{
if(Edit11->Text=="") SpeedButton5->Enabled=false;
else SpeedButton5->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
Edit11->Enabled=false;

float Pcp,U2,I;
I=StrToFloat(Edit3->Text)/(2*StrToFloat(Label7->Caption)+StrToFloat(Edit4->Text));
U2=StrToFloat(Edit3->Text)-(2*I*StrToFloat(Label7->Caption));
Pcp=U2*I;
Label13->Caption=Pcp;

Table1->Fields->Fields[12]->AsFloat=StrToFloat(Edit11->Text);
Table1->Fields->Fields[16]->AsFloat=StrToFloat(Label13->Caption);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
Edit12->Enabled=false;
float Pdz,U2,I,Ppr,Pcp;
U2=StrToFloat(Edit3->Text)-(2*I*StrToFloat(Label7->Caption));
I=StrToFloat(Edit3->Text)/(2*StrToFloat(Label7->Caption)+StrToFloat(Edit4->Text));
//Ppr=2*pow(I,2)*StrToFloat(Label7->Caption);
Pcp=U2*I;


Pdz=Pcp+StrToFloat(Label18->Caption);

//Pdz=Pcp+StrToFloat(Label18->Caption);
Label14->Caption=Pdz;

Table1->Fields->Fields[14]->AsFloat=StrToFloat(Edit12->Text);
Table1->Fields->Fields[18]->AsFloat=StrToFloat(Label14->Caption);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
Edit13->Enabled=false;

float Ppr,I;
I=StrToFloat(Edit3->Text)/(2*StrToFloat(Label7->Caption)+StrToFloat(Edit4->Text));
Ppr=2*pow(I,2)*StrToFloat(Label7->Caption);
Label18->Caption=Ppr;

Table1->Fields->Fields[13]->AsFloat=StrToFloat(Edit13->Text);
Table1->Fields->Fields[17]->AsFloat=StrToFloat(Label18->Caption);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Edit13Change(TObject *Sender)
{
if(Edit13->Text=="") SpeedButton7->Enabled=false;
else SpeedButton7->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit12Change(TObject *Sender)
{
if(Edit12->Text=="") SpeedButton6->Enabled=false;
else SpeedButton6->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit14Change(TObject *Sender)
{
if(Edit14->Text=="") SpeedButton8->Enabled=false;
else SpeedButton8->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
Edit14->Enabled=false;

float U2,I;
I=StrToFloat(Edit3->Text)/(2*StrToFloat(Label7->Caption)+StrToFloat(Edit4->Text));
U2=StrToFloat(Edit3->Text)-(2*I*StrToFloat(Label7->Caption));
Label23->Caption=U2;

Table1->Fields->Fields[15]->AsFloat=StrToFloat(Edit14->Text);
Table1->Fields->Fields[19]->AsFloat=StrToFloat(Label23->Caption);
Table1->Next();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
Edit15->Enabled=false;

float U22;
//U2
U22=StrToFloat(Edit5->Text)/StrToFloat(Edit6->Text);
Label32->Caption=U22;

Table2->Insert();
Table2->Fields->Fields[0]->AsFloat=StrToFloat(Form4->Edit1->Text);
Table2->Fields->Fields[1]->AsFloat=StrToFloat(Form4->Edit2->Text);
Table2->Fields->Fields[2]->AsFloat=StrToFloat(Form4->Edit3->Text);

Table2->Fields->Fields[4]->AsFloat=StrToFloat(Edit5->Text);
Table2->Fields->Fields[5]->AsFloat=StrToFloat(Edit6->Text);
Table2->Fields->Fields[6]->AsFloat=StrToFloat(Edit7->Text);
Table2->Fields->Fields[7]->AsFloat=StrToFloat(Edit8->Text);
Table2->Fields->Fields[8]->AsFloat=StrToFloat(Edit15->Text);
Table2->Fields->Fields[9]->AsFloat=StrToFloat(Label32->Caption);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit15Change(TObject *Sender)
{
if(Edit15->Text=="") SpeedButton9->Enabled=false;
else SpeedButton9->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit16Change(TObject *Sender)
{
if(Edit16->Text=="") SpeedButton10->Enabled=false;
else SpeedButton10->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
Edit16->Enabled=false;
//I2
float I2,U22;
U22=StrToFloat(Edit5->Text)/StrToFloat(Edit6->Text);
I2=U22/StrToFloat(Edit7->Text);
Label34->Caption=I2;

Table2->Fields->Fields[10]->AsFloat=StrToFloat(Edit16->Text);
Table2->Fields->Fields[11]->AsFloat=StrToFloat(Label34->Caption);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit17Change(TObject *Sender)
{
if(Edit17->Text=="") SpeedButton11->Enabled=false;
else SpeedButton11->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit18Change(TObject *Sender)
{
if(Edit18->Text=="") SpeedButton12->Enabled=false;
else SpeedButton12->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit19Change(TObject *Sender)
{
if(Edit19->Text=="") SpeedButton13->Enabled=false;
else SpeedButton13->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit20Change(TObject *Sender)
{
if(Edit20->Text=="") SpeedButton14->Enabled=false;
else SpeedButton14->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
Edit17->Enabled=false;
//I1
float I1,I2,U22;
//U22=StrToFloat(Edit5->Text)/StrToFloat(Edit6->Text);
//I2=U22/StrToFloat(Edit7->Text);
I1=StrToFloat(Label34->Caption)/StrToFloat(Edit6->Text);
Label36->Caption=I1;

Table2->Fields->Fields[12]->AsFloat=StrToFloat(Edit17->Text);
Table2->Fields->Fields[13]->AsFloat=StrToFloat(Label36->Caption);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
Edit18->Enabled=false;
//P1
float P1,I1,I2,U22;
U22=StrToFloat(Edit5->Text)/StrToFloat(Edit6->Text);
I2=U22/StrToFloat(Edit7->Text);
I1=I2/StrToFloat(Edit6->Text);
P1=StrToFloat(Edit5->Text)*I1;
Label38->Caption=P1;

Table2->Fields->Fields[14]->AsFloat=StrToFloat(Edit18->Text);
Table2->Fields->Fields[15]->AsFloat=StrToFloat(Label38->Caption);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
Edit19->Enabled=false;
//P2
float P2,U22,I2;
U22=StrToFloat(Edit5->Text)/StrToFloat(Edit6->Text);
I2=U22/StrToFloat(Edit7->Text);
P2=U22*I2;
Label40->Caption=P2;
Table2->Fields->Fields[16]->AsFloat=StrToFloat(Edit19->Text);
Table2->Fields->Fields[17]->AsFloat=StrToFloat(Label40->Caption);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
Edit20->Enabled=false;
//N2
float N2;
N2=StrToFloat(Edit8->Text)/StrToFloat(Edit6->Text);
Label42->Caption=N2;

Table2->Fields->Fields[18]->AsFloat=StrToFloat(Edit20->Text);
Table2->Fields->Fields[19]->AsFloat=StrToFloat(Label42->Caption);
Table2->Next();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
Form2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
Form3->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
Form2->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
Form3->Visible=true;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Form1->Visible=false;
Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
 Table1->Fields->Fields[20]->AsString="M";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
 Table1->Fields->Fields[20]->AsString="C";         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
 Table1->Fields->Fields[20]->AsString="A";
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
Form6->Visible=true;
//Form5->QuickRep1->Preview();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
Form6->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N11Click(TObject *Sender)
{
Form2->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N21Click(TObject *Sender)
{
Form3->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form6->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N5Click(TObject *Sender)
{
Form6->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
Form2->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N22Click(TObject *Sender)
{
Form3->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
AboutBox->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
 if ((Key >= '0') && (Key <= '9')) {}  // цифры
else if (Key == 8) {}  // <-
else if ((Key == '.') || (Key == ',')) // запятая
       {
       if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
               Key = 0;
       else // если ещё нет
               Key = DecimalSeparator;
       }
else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }

//---------------------------------------------------------------------------


void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit9KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit10KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit11KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit13KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit12KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit14KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit6KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit7KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit8KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit15KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit16KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit17KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit18KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit19KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit20KeyPress(TObject *Sender, char &Key)
{
{
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
 if (Key==0) ShowMessage("Ви ввели не вірний символ. Можна вводити лише цифри від 0 до 9");
 }
}
//---------------------------------------------------------------------------





void __fastcall TForm1::N1Click(TObject *Sender)
{
Form6->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
AboutBox->Visible=true;        
}
//---------------------------------------------------------------------------

