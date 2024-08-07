#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
   ofstream fout;
   fout.open("Demo.txt");
   fout << "Helllooo";
   fout.close();
   
   ifstream fin;
   fin.open("Demo.txt");
   string ch;
   while (fin >> ch)
   {
       cout << ch << endl;
   }
   fin.close(); 
   return 0;
}
