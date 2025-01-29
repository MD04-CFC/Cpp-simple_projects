#include <iostream>
#include <cmath>
#include <math.h>


void zapytaj(float a, float b, float c)
{
  std::cout<<"Wpisz pierwszy wyraz rownania(a): ";
  std::cin>>a;
  //std::cout<<a;

  std::cout<<"Wpisz drugi wyraz rownania(b): ";
  std::cin>>b;
  //std::cout<<b;

  std::cout<<"Wpisz trzeci wyraz rownania(c): ";
  std::cin>>c;
  //std::cout<<c;

  float z {b*b-4*a*c};
  std::cout<<"Oto delta z rownania: "<< z;
  std::cout<<"";

  if(z == 0)
  {
      std::cout<<"Rownanie ma jedno rozwiazanie. Oto ono: "<<(-b/(2*a));
  }

  if(z>0)
  {
      float k{ (-b-sqrt(z))/(a*2)};
      float l{ (-b+sqrt(z))/(a*2)};
      std::cout<<"Rownanie ma dwa rozwiazania. Oto one: " << k <<", "<< l;
  }

  if(z<0)
  {
      std::cout<<"";
      std::cout<<"Rownanie nie ma rozwiazan";
  }

}


int main()
{
    std::cout<<"Witam";
    std::cout<<"";
    float a;
    float b;
    float c;
    /*float z;
    float k;
    float l; */
    zapytaj(a,b,c);
    return 0;
}
