#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
   string name[30];
   int roll_no;
   float marks;
   ofstream fout("B1.txt");
   	for(int i=0;i<10;i++)
   	{
   	  cout<<"Enter your name:";
   	  cin>>name;
   	  cout<"Enter your Roll No.:";
   	  cin>>roll_no;
   	  cout<"Enter your marks:";
   	  cin>>marks;
   	  fout<<name<<roll_no<<marks<<endl;
	}
	fout.close();
	
	ifstream fin;
	fin.open("B1.txt");
	string n;
	int r;
	float m;
	while(fin>>n>>r>>m)
	{
		fin>>n;
		cout<<m<<r<<m<<endl;
	}
	fin.close();
  return 0;
}
