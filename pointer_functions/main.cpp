#include <iostream>
using namespace std;

void setTwenty(int * pNumber)
{
    *pNumber = 20;
}

int main()
{
    int num = 10;
    int * pNum = &num;
    cout << "Initial Num value: " << num << endl;
    setTwenty(pNum);

    cout << "Num value: " << num << endl;
    return 0;
}
