//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "setColRowNameFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TsetCollRowNameForm *setCollRowNameForm;
//---------------------------------------------------------------------------
__fastcall TsetCollRowNameForm::TsetCollRowNameForm(TComponent* Owner)
	: TForm(Owner)
{

}

void TsetCollRowNameForm::setResultStr(UnicodeString *res)
{
	result = res;
}
//---------------------------------------------------------------------------
void __fastcall TsetCollRowNameForm::Button1Click(TObject *Sender)
{
	(*result) = Edit1->Text;
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TsetCollRowNameForm::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
