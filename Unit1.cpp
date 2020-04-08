//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ASGSQLite3"
#pragma resource "*.dfm"
TForm1 *Form1;

// �n���w�� Aducom SQLite 3 bpk 
// https://github.com/remobjects/ASQLite3
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
  ASQLite3DB1->CharacterEncoding = "UTF8";
  ASQLite3DB1->DefaultExt = ".db3";
  ASQLite3DB1->Database = "test.db3";

  ASQLite3DB1->Connected = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  // ASQLite3Table + DataSource + DBGrid ��ܤ����`
  // TEXT, CHAR, MEMO �榡�� show ���X���
  ASQLite3Table1->Open();

  ASQLite3Query1->SQL->Text = "Select * from MyTable";
  ASQLite3Query1->Open();

  // �J�줤��A���ઽ���ΡA�|�O�ýX
  AnsiString str = ASQLite3Query1->FieldByName("Text")->AsString;
  Memo1->Lines->Add(str);

  // �n�� UTF8 �� Ansi
  UTF8String utf8 = ASQLite3Query1->FieldByName("Text")->AsString;
  Memo1->Lines->Add(Utf8ToAnsi(utf8));
}
//---------------------------------------------------------------------------
