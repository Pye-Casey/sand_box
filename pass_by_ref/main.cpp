#include <iostream>
using namespace std;

void doStuff(int &reference); // prototype

int main()
{
    int a;
    
    do{
        cout << "Input an integer:";
        cin >> a;
        if(!cin)
        {
            cout << "Input an integer, you turd." << endl;
            cin.clear();
            cin.ignore();
        }
    } while (!cin);
   
    doStuff(a);
    cout << "\tChanged value: " << a << endl;
    return 0;
}

void doStuff(int &reference)
{
    cout << "\tReference in memory:" << &reference << endl;
    cout << "\tInitial int value:" << reference << endl;
    // change value
    cout << "\tMultiplying your number by 5...\n";
    reference *= 5;
}