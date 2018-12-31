#include <iostream>
#include <cassert>
using namespace std;

float computePay(float wage, float hours); 

/**************
 * Simple driver for computePay()
 * *****************/
int main()
{
    float wage;
    float hours;
    // display numbers
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Enter wage:";
    cin >> wage;
    cout << "Enter hours:";
    cin >> hours;

    cout << "Computing...\n"
        << "\tWage: "
        << wage
        << endl
        << "\tHours: "
        << hours
        << endl
        << "\tPay: $"
        << computePay(wage, hours)
        << endl;

    return 0;
}
/**************************************
 * Compute Pay
 * Function being tested by driver program
 * ***********************************/
float computePay(float wage,float hours)
{
    float pay;
    assert(wage >= 0);
    assert(hours >= 0);
    pay = wage * hours;

    return pay;
}