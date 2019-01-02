#include <iostream>
using namespace std;

void displayName(char name[]);
void getName(char name[]);
void getFullName(char fName[], char lName[]);
void displayFullName(const char fName[], const char lName[]);
/*************************************
 * Passing array strings
 * 
 * *******************************/
int main()
{
    char name[256];
    // get the name pass by reference style
    getName(name);
    displayName(name);

    // try more complex array strings
    char fName[256];
    char lName[256];
    getFullName(fName, lName);
    displayFullName(fName,lName);

    return 0;
}

void getName(char name[])
{
    cout << "Name: ";
    cin >> name;
}

void displayName(char name[])
{
    cout << "You entered: " << name << endl;
    return;
}

void getFullName(char fName[], char lName[])
{
    cout << "Enter a first and last name: ";
    cin >> fName >> lName;

}

void displayFullName(const char fName[], const char lName[])
{
    cout << "You entered: " << fName << " " << lName << endl;
}