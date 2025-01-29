#include <iostream>
#include <fstream>

using namespace std;

constexpr int maxlines=500;


char code_g[maxlines];
char code_g2[maxlines];

char reading_gcode(string x, char code_gen[maxlines])
{
    std::fstream file;
    file.open( x, std::ios::in );
    string s;
    bool good();
    int number_lines=0;

    if( file.good() == true )
    {
       int i=0;
       do
       {
          getline(file,s);
          if (s=="agc" || s=="agt")
          {
              code_gen[i]='S';
              i++;

              code_gen[i]='E';
              i++;

              code_gen[i]='R';
              i++;

              code_gen[i]='-';
              i++;

          }
          else if (s=="aaa" || s=="aag")
          {
              code_gen[i]='L';
              i++;
              code_gen[i]='Y';
              i++;
              code_gen[i]='S';
              i++;
              code_gen[i]='-';
              i++;

          }
          else if (s=="att" || s=="atc" || s=="ata")
          {
              code_gen[i]='I';
              i++;
              code_gen[i]='L';
              i++;
              code_gen[i]='E';
              i++;
              code_gen[i]='-';
              i++;

          }
          else i=+4;
          number_lines++;
       }
       while(s != "");
    }
    else cout << "Dostep do pliku zostal zabroniony!";
    int number_nucl=4*number_lines;

    cout << "\n"<<"That's genetic code: " << endl;
    for (int j=0; j<=number_nucl-6; j++)
    {
        cout<<code_gen[j];
    }

    file.close();
    return *code_gen;
}



bool CG_isEqual(char a[], char b[])
{
    for(int i=0; i<maxlines; i++)
    {
          if(a[i]!=b[i])
          {
              cout<<"\n";
              cout<<"\n";
              cout<<"They're not equal- they are different persons";
              cout<<"\n";
              cout<<"A's element: "<<i+1<<","<<i+2<<","<<i+3<<"-"<<a[i]<<a[i+1]<<a[i+2]<<" isn't like "<<"B's element: "<<b[i]<<b[i+1]<<b[i+2];
              return 0;
          }

          if (a[i]==' ' || b[i]==' ')
          {
                 cout<<"\n";
                 cout<<"Codes are identical";
                 cout<<"\n";
                 return 1;
         }
    }
}


int main()
{

    reading_gcode( "C:/Users/48882/Desktop/biologia.txt", &code_g[maxlines]);
    reading_gcode( "C:/Users/48882/Desktop/biol.txt", &code_g2[maxlines]);
    CG_isEqual(&code_g[maxlines], &code_g2[maxlines]);
    return 0;
}
