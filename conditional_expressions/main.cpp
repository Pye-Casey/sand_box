#include <iostream>
using namespace std;

int main() 
{
    int number = -1;
    // use conditional expression
    (number > 0) ? cout << "The number is positive\n" : cout <<"The number is negative\n"; 
    
    cout << endl;
     cout << "Number value:" << number << endl;
    int newNum = (number > 0) ?  number*10 : number=0;
   
  
    cout << "New Num conditional value: " << newNum << endl;

    return 0;
}