#include <iostream>
#include <fstream>
using namespace std;

int main()
 {
    ofstream obj("Today.txt");
    cout << obj.tellp() << endl;
    obj << "Hello World";
    cout << obj.tellp() << endl;
    obj.seekp(-5, ios::end);
    cout << obj.tellp() << endl;
    obj << "Bips";
    obj.seekp(-5, ios::beg);
    cout << obj.tellp() << endl;
    obj << "HELLO";
    obj.close();
    
    
    
    fstream r("Today.txt", ios::in);
    char ch;
    while (r.get(ch)) 
	{
        cout << ch;
    }
    
    r.close();

    return 0;
}
