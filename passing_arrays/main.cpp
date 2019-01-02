#include <iostream>
#include <cassert>
using namespace std;

int getNumber();
void fillList(float listGrades[], const int numGrades);
void displayList(float grades[], const int numGrades);
/*****************************************************
 * Passing arrays
 * ************************************************/
int main()
{
    
    const int num = getNumber();
    //const int num = 5;
    float grades[num];
    fillList(grades, num);
    
    displayList(grades, num);

    return 0;
}



void fillList(float listGrades[], const int numGrades)
{
    cout << "Enter "<< numGrades << " grades:\n";
    for (int i = 0; i < numGrades; i++)
    {
        cout << "\tGrade " << i + 1 << ": ";
        cin >> listGrades[i];
    }
}

void displayList(float grades[], const int numGrades)
{
    cout << "You entered the following "<< numGrades << " grades:\n";
    for (int i = 0; i < numGrades; i++)
    {
        cout << "\tGrade " << i + 1 << ": " <<  grades[i] << endl;
        
    }
}

int getNumber()
{
    cout << "How many grades would you like to input?\n";
    int num = -1;
    while (num < 0)
    {
        cout << "\t# grades: ";
        cin >> num;
    }

    return num;
}