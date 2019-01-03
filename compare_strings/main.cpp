#include <iostream>
using namespace std;


/***********************************
 * Comparing Strings 
 * with loops
 * *****************************/
int main()
{
    char list1[] = "say something";
    char list2[] = "say something";

    // conver spaces to underscores
    /*for (int i = 0; list1[i] != '\0'; i++)
    {
        if (list1[i] == ' ')
            list1[i] = '_';
        cout << list1[i];
    } */
    
    cout << "Lets compare the two strings:\n";
    cout << "\tString 1:" << list1 << endl
        << "\tString 2:" << list2 << endl;
    // compare size (if not the same size it aint the same!)
    int lh = sizeof(list1) / sizeof(list1[0]);
    int rh = sizeof(list2) / sizeof(list2[0]);
    bool success = true;
    if ( lh == rh)
    {
        cout << "Both sides have the same memory size\n";
        // check for letters
        for (int i = 0; list1[i] != '\0'; i++ )
        {
            if (list1[i] != list2[i])
            {
                success = false;
                break;
            }
        }
        if (success)
            cout << "The strings are the same!\n";
        else    
            cout << "The strings are not the same!\n";
    }
    else
        cout << "They can't be the same, they are two different sizes.\n";

    return 0;
}
