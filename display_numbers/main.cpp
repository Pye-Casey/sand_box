#include <iostream>
using namespace std;

/********************
 * 
 * 
 * ********************/
int main() 
{
    float a = 1.034542;
    double b = 5.3120842;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Float: " << a << endl;
    cout << "Double: " << b << endl;
}