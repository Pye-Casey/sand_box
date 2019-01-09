#include <iostream>
using namespace std;

void function(int val, int &reference, int * pointer)
{
    cout << "Value:     " << val <<" &val:          " << &val << endl;
    cout << "Reference: " << reference <<" &reference:      " << &reference << endl;
    cout << "*Pointer:  " << *pointer <<" pointer:      " << pointer << endl;
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;
    cout << "Number: " << number
        << "\t&number: " << &number << endl << endl;

    function(number     /*by value*/,
                number  /*by reference*/,
                &number /*by pointer */);

    return 0;
}