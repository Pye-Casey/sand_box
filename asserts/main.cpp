#include <iostream>
#include <cassert>
using namespace std;

/******************************
 * Testing asserts
 * 
 * **************************/
int main() 
{
    cout << "Testing Asserts\n";
    int input;
    cout << "Input a number between 1 and 9: ";
    cin >> input;
    // check input value for testing only
    assert(input > 0 && input < 10);
    cout << "Input: " << input << endl;

}
