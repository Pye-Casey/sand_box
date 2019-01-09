#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str = "This is my string";
    string str2 = str + "... it is a special string";
    cout << str2 << endl;

    cout << "What is your full name? ";
    string fullName;
    getline(cin,fullName);

    cout << "Welcome, " + fullName << endl;
    return 0;
}