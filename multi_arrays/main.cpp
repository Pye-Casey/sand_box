#include <iostream>
using namespace std;

void displayTable(const int array[][5])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << array[row][col] << "\t" ;
        }
        cout << endl;
    } 
}

void displayTable2(const int array[][5], int r)
{
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << array[row][col] << "\t" ;
        }
        cout << endl;
    } 
}

int main()
{
    const int r = 4;
    const int c = 5;
    int array[r][c] = 
    {
        { 1, 2, 3, 4, 5}, // row 0
        { 6, 7, 8, 9, 10}, // row 1
        { 11, 12, 13, 14, 15}, // row 2
        { 16, 17, 18, 19, 20} // row 3
    };

    //Display table
    cout << "Displaying table:\n";
    for (int iRow = 0; iRow < 4; iRow++)
    {
        for (int iCol = 0; iCol < 5; iCol++)
        {
            cout << array[iRow][iCol] << "\t" ;
        }
        cout << endl;
    }
    cout << endl;
    // display table using function
    cout << "Displaying table using function:\n";
    displayTable(array);     
    cout << endl;
    
    // display table using second function
    cout << "Displaying table using second function passing row count:\n";
    displayTable2(array, r); 

    cout << endl;
   
    return 0;
}

