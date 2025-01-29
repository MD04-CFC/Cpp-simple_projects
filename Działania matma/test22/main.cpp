#include <iostream>
#include <cmath>
#include <math.h>
#include "naglowek.h"
#include <limits>

using typdanych_t = double;

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    using namespace std;
    typdanych_t a, b;
    cout<<"1-suma\n";
    cout<<"2-roznica\n";
    cout<<"3-iloczyn\n";
    cout<<"4-iloraz\n";
    cout<<"5-delta do rownania kwadratowego i rozwiazania\n";
    cout<<"Wybierz dzialanie: ";

    int c;
    cin>>c;
    ignoreLine();

    switch(c)
    {
       case 1:

           cout<<"Podaj 1 wartosc"<<endl;
           cin>>a;
           ignoreLine();

           cout<<"Podaj 2 wartosc\n";
           cin>>b;
           ignoreLine();

           add(a,b);
           break;
       case 2:
           cout<<"Podaj 1 wartosc"<<endl;
           cin>>a;
           ignoreLine();

           cout<<"Podaj 2 wartosc\n";
           cin>>b;
           ignoreLine();

           subtraction(a,b);
           break;
       case 3:
           cout<<"Podaj 1 wartosc"<<endl;
           cin>>a;
           ignoreLine();

           cout<<"Podaj 2 wartosc\n";
           cin>>b;
           ignoreLine();

           multiply(a,b);
           break;
       case 4:
           while(true)
           {
               cout<<"Podaj 1 wartosc"<<endl;
               cin>>a;
               ignoreLine();
               if (a!=0)
               {
                  cout<<"Podaj 2 wartosc\n";
                  cin>>b;
                  ignoreLine();

                  if (b!=0)
                  {
                     divide(a,b);
                     break;
                  }

               }


           }


           break;
       case 5:

           typdanych_t e,f,k;
           cout<<"Wpisz pierwszy wyraz rownania(a): ";
           cin>>e;
           ignoreLine();

           cout<<"Wpisz drugi wyraz rownania(b): ";
           cin>>f;
           ignoreLine();

           cout<<"Wpisz trzeci wyraz rownania(c): ";
           cin>>k;
           ignoreLine();

           delta(e,f,k);
           break;

        default:
          cout<<"Nie ma takiej opcji\n";
          cout<<"Wpisz jeszcze raz\n";
          cin>>c;
          ignoreLine();

    }
    return 0;
}
