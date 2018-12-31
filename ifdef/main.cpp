#include <iostream>
#include <cassert>
using namespace std;


#define DEBUG // During compilation you can run 'g++ -DDEBUG main.cpp'
#ifdef DEBUG
#define Debug(x) x
#else
#define Debug(x)
#endif

void message();

/***********************
 *  Testing ifdef
 * ********************/
int main()
{
    // Simple debug test
    #ifdef DEBUG
        cout << "Debug is defined\n";
    #else
        cout << "Debug is not defined\n";
    #endif // Debug

    message();

    return 0;
}

void message()
{
    Debug(cout << "You are getting this message because Debug is defined\n");
}