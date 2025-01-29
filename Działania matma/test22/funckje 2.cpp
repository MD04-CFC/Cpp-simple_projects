#include <iostream>
#include <cmath>
#include <math.h>

using typdanych_t = double;


void add(typdanych_t x, typdanych_t y)
{
    typdanych_t z=x+y;
    std::cout<<z;

}

void subtraction(typdanych_t x,typdanych_t y)
{
    typdanych_t z=x-y;
    std::cout<<z;
}

void multiply(typdanych_t x, typdanych_t y)
{
    typdanych_t z=x*y;
    std::cout<<z;
}

void divide(typdanych_t x, typdanych_t y)
{
    typdanych_t z=x/y;
    std::cout<<z;
}
void delta(typdanych_t a, typdanych_t b, typdanych_t c)
{

  typdanych_t z {b*b-4*a*c};
  std::cout<<"Oto delta z rownania: "<< z;
  std::cout<<"\n";

  if(z == 0)
  {
      std::cout<<"Rownanie ma jedno rozwiazanie. Oto ono: "<<(-b/(2*a));
  }

  if(z>0)
  {
      typdanych_t k{ (-b-sqrt(z))/(a*2)};
      typdanych_t l{ (-b+sqrt(z))/(a*2)};
      std::cout<<"Rownanie ma dwa rozwiazania. Oto one: " << k <<", "<< l;
  }

  if(z<0)
  {
      std::cout<<"";
      std::cout<<"Rownanie nie ma rozwiazan";
  }

}

