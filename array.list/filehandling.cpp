#include<iostream>
#include<fstream>
using namespace std;

int main(){
  //Writing filr......
  ofstream fout;
  fout.open("ritik.txt");
  fout<<"Ritik Rajput\n";
  fout<<"Rohit";
   fout.close();

   //reading file.....
   ifstream fin;
   fin.open("ritik.txt");

   string line;
  while( getline(fin, line)){
   cout<<line<<" ";
  }

   fin.close();

   return 0;
}