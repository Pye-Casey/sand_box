#include <iostream>
using namespace std;

void displayWithPointers(char text[], const int SIZE)
{
    cout << "Displaying using pointers:\n\t";
    for(int i =0; i < SIZE; i++)
    {
        char * pointer = text + i;
        cout << *pointer;
    }
    cout << endl;
}

int main()
{
    char text[] = "CS"; // some buffer in memory
    char * pC = text; // text refers to the first item, so pC does as well
    char * pS = text + 1;   // the next location in memory is one item beyond the first

    cout << "Original Text:" << text << endl;
    cout << "\tPoint to first char:" << *pC << endl;
    cout << "\tPoint to second char:" << *pS << endl;

    displayWithPointers(text, 2);

    char msg[] = "Isn't this cool or what?";
    displayWithPointers(msg, 24);
    return 0;
}