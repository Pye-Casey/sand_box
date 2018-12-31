#include <iostream>
using namespace std;

// Definitions
#define NAME "Macey Rye"
#define ADD_TEN(x) (x + 10)
/********************************
 * Testing definitions
 * 
 * ******************************/
int main() 
{
    cout << "Definintion name: " << NAME << endl;
    int input;
    cout << "Input a number: ";
    cin >> input;

    cout << "Input:" << input << endl;

    cout << "Running definition to add 10\n"
        << "Result: "
        << ADD_TEN(input)
        << endl;


    return 0;
}