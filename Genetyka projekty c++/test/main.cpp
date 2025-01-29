#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::fstream file;
    char code_gen[90];
    file.open("C:\\Users\\48882\\Desktop\\biologia.txt", std::ios::in);
    string s;
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
          cout<<code_gen;
          //number_lines++;

       }
       while(s != "");
       file.close();
       cout<<code_gen;
    return 0;
}
