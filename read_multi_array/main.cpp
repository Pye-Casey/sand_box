#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    int data[3][3];
    const char fileName[] = "data.txt";
    ifstream fin(fileName);

    if (fin.fail())
        cout << "Data could not be read.\n";

    int row = 0;
    while(!fin.eof())
    {
        fin >> data[row][0] >> data[row][1] >> data[row][2];
        row++;
    }
    

    fin.close();

    // display data
    cout << "Displaying data retrieved from " << fileName << ": \n";
    for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << data[r][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}