#include <iostream>
using namespace std;

int main() 
{
    int age;
    /*cout << "Enter Age: ";
    cin >> age;
    cout << "You entered: " << age << ". How predictable you wanker." << endl;
    */
    char letter;
    cout << "Enter a single letter:";
    //cin >> letter;
    cin.get(letter);
    cin.clear();
    cin.ignore();
    cout << "You entered " << letter << endl;
    
    char name[256];
    cout << "Let's get your full name:" ;
    cin.getline(name, 256);
    cout << "You entered: " << name << endl;
    return 0;
}