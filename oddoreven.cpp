//question no. 3
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int a[] = {1, 2, 3, 4, 5, 6}; 
    
    ofstream foutEven("Even.txt"); 
    ofstream foutOdd("Odd.txt");   
    
    for (int i = 0; i < 6; i++) 
	{
        if (a[i] % 2 == 0) 
		{
            foutEven << a[i]  ;
        } 
		else
		{
            foutOdd << a[i]  ;
        }
    }
    
    foutEven.close();
    foutOdd.close();
    
    ifstream finEven("Even.txt");
    ifstream finOdd("Odd.txt");  
    
    int num;
    cout << "Even numbers: ";
    while (finEven >> num) 
	  {
        cout << num ;
    }

    cout << "Odd numbers: ";
    while (finOdd >> num) 
	{
        cout << num ;
    }
   
    
    finEven.close();
    finOdd.close();
    
    return 0;
}
