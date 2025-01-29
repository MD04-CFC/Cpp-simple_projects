#include <iostream>
#include <fstream>


using namespace std;





int main()
{
    std::fstream biol;
    biol.open( "C:/Users/48882/Desktop/biologia.txt", std::ios::in );
    string s;
    string a;
    bool good();
    int number_lines;


    if( biol.good() == true )
    {
       int i=0;

       do
       {
          getline(biol,a);
          number_lines++;
       }
       while(a != "");


       char* code_gen{new char[number_lines]};

       do
        {
        getline(biol,s);
        cout<<"haha";

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
              cout<<code_gen[i];
              code_gen[i]='E';
              i++;
              code_gen[i]='-';
              i++;



          }
          else i=+4;
          cout<<"abc";
        }
        while (s != "");

    }

    else cout << "Dostep do pliku zostal zabroniony!";



    biol.close();
    int number_nucl=4*number_lines;

    cout << "\n"<<"Oto kod genetyczny: " << endl;

    /*for (int j=0; j<=number_nucl-6; j++)
    {
        cout << code_gen[j];
    }
    */


    //delete[] code_gen;

    //biol.close();
    //delete[] code_gen;
    return 0;
}
