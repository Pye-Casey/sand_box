#include <iostream>
using namespace std;


/******************
 * Exploring arrays
 * ***************/
int main()
{
    char grades[5] = 
    {
        'A', 'C', 'A', 'B', 'D'
    };

    cout << "View Grades...\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\tGrade #"
            << i + 1
            << ": "
            << grades[i]
            << endl;
    }

    char name[][256] = 
    {
        "Bob Ross",
        "Michael Jackson",
        "Michael Buble",
        "Alexander Hamilton"
    };
    cout << "View Names...\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\t"
            << name[i]
            << endl;
    }

    int i = 0;
    /*do{
        cout << "\t"
            << name[i]
            << endl;
        i++;
    } while (!name[i].empty());
    */

}