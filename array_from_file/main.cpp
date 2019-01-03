#include <iostream>
#include <fstream>
using namespace std;

int readFile(const char fileName[], int data[], int max);

int main()
{
    const char fileName[] = "data.txt";
    int data[6];
    int numRead = readFile(fileName, data, 6);
    cout << "Records read: " << numRead << endl;

    return 0;
}

int readFile(const char fileName[], int data[], int max)
{
    
    cout << "reading from file " << fileName << endl;
    ifstream fin(fileName);
    if (fin.fail())
    {
        cout << "ERROR: Could not read file.\n";
        return 0;
    }

    int count = 0;  
    while (count < max && fin >> data[count])
        count++;

    fin.close();
    return count;
}