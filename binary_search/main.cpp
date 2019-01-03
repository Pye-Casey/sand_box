#include <iostream>
using namespace std;

bool binarySearch(const int numbers[], int size, int search);
int getNumber();
int main()
{
    int data[9] =     {1, 3, 5, 7, 7, 8, 9, 11, 13};
    int search = getNumber();
    if (binarySearch(data, 9, search))
        cout << search << " was found in the data set!\n";
    else
        cout << search << " is not in the data set.\n";

    return 0;
}

int getNumber()
{
    int num = -1;
    while (num < 0)
    {
        cout << "Enter a number between 0 and 20: ";
        cin >> num;
    }
    return num;
}

bool binarySearch(const int numbers[], int size, int search)
{
    int iFirst = 0;
    int iLast = size - 1;

    while (iLast >= iFirst)
    {
        int iMiddle = (iFirst + iLast) / 2;
        if (numbers[iMiddle] == search)
            return true;
        else if (numbers[iMiddle] > search)
            iLast = iMiddle - 1;
        else
            iFirst = iMiddle + 1;
    }
    return false; // if we get here it wasn't found
}