//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

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

//---------------------------------------------------------------------------



/*void _fastcall TForm1::Shape1Context(TObject *Sender, TEnterState Enter,
       int X, int Y)
{


}
//---------------------------------------------------------------------------

/void __fastcall TForm1::Shape1ContextPopup(TObject *Sender,
      TPoint &MousePos, bool &Handled)
{

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Shape1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Shape1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      
}
//---------------------------------------------------------------------------
*/


/*void ruch(bot)
{
    for (int i=0; i<20; i++)
    {
     bot->Top += 10;
     Sleep(10);
    }
}
*/

//---------------------------------------------------------------------------



void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

   if (Key == VK_LEFT)
   {
   Shape3->Left=520;
   Shape2->Top=280;
   Shape1->Left -= 10;
   }

   if (Key == VK_RIGHT)
   {
   Shape3->Left=520;
   Shape2->Top=280;
   Shape1->Left += 10;
   }


   if (Key == VK_UP)
   {
   Shape3->Left=520;
   Shape2->Top=280;
   Shape1->Top -= 10;
   }


   if (Key == VK_DOWN)
   {
   Shape3->Left=520;
   Shape2->Top=280;
   Shape1->Top += 10;
   }



   if (Key == VK_RETURN)
   {

       Label1->Caption="Strzelaj";
       Shape3->Left+=50;
       Sleep(1000);
       Shape2->Top=280;

           if (Shape3->Left>=1032)
           {
           Sleep(500);
           Label1->Caption="Goooool";
           Sleep(2500);
           Shape3->Left=520;
           Label1->Caption="Strzelaj";
           }
   }
}










//---------------------------------------------------------------------------





/*void sekwencja(bot, zawodnik, pilka)
{





}
*/















