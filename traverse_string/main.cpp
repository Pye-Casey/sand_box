#include <iostream>
using namespace std;

void displayString(const char str[]);


int main()
{
    const char text[] =
    {
        'B', 'o', 'b', ' ', 'R', 'o', 's', 's', '\0'
    };

    displayString(text);

    char text2[] = "This is my message";    
    displayString(text2);

    char str[] = "This is fun";
    displayString(str);

    // this would give an error without const modifier in function
    displayString("Bob Ross was the best");
    //displayString2("This should break the function because of it is a string literal                 and cant be modified.");
   
    return 0;
}
/**********************************
 * Displaying string in a very complicated
 * manner to demonstrate c-strings
 * Uses const modifier -- best practice!
 * *******************************/
void displayString(const char str[])
{
    for (int i = 0; str[i]; i++)
        cout << str[i];

    cout << endl;
}

