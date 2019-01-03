#include <iostream>
using namespace std;

void displayNames(char names[][256], int count);

int main()
{
    char name[3][256] = 
    {
        "Bob",
        "Sally",
        "Tim"
    };

    displayNames(name, 3);

    return 0;
}

void displayNames(char names[][256], int count)
{
    cout << "Displaying names in string multi-array\n";
    for (int i = 0; i < count; i++)
    {
        cout << "\t" << names[i] << endl;

    }    

}