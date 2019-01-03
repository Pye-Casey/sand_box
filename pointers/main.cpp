#include <iostream>
using namespace std;

int main()
{
    int speed = 45;
    int * pSpeed; // * denotes pointer
    pSpeed = &speed; // & - address operator
    cout << "Speed memory location: " << pSpeed << endl;
    cout << "Dereferenced speed: " << *pSpeed << endl; // * - Dereference operator

    {
        // normal data variable    
        int valueInteger = 5;
        cout << "Address of valueInteger:" << &valueInteger << endl;
        // pointer variable
        int * pInteger;
        cout << "Address of pointer before assignment:" << pInteger << endl;
        // assignmnents
        pInteger = &valueInteger;   // both sides of = are pointers to integers
        cout << "Address of pointer after assignment:" << pInteger << endl;
        cout << "Dereferences value from pointer address:" << *pInteger << endl;
        // math with pointer
        *pInteger += 10;
        cout << "Dereferences value from pointer address after adding ten:  " << *pInteger << endl;
    }

    {
        int speed = 65; // the location in memory we will be pointing to
        int * pSpeed; // currently uninitialized. Don’t dereference it!
        //cout << "Dereferencing an uninitialized pointer: " << *pSpeed << endl;
        pSpeed = &speed; // now it is initialized to the address of speed
        cout << *pSpeed << endl; // need to use the * to get the data
    }

    return 0;
}