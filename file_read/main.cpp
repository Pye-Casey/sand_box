#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream fin("test.txt");
    if (fin.fail())
        return -1;
    char data[256];
    while (!fin.eof())
    {
        fin >> data;
        cout << data << endl;

    }
    
    fin.close();
}