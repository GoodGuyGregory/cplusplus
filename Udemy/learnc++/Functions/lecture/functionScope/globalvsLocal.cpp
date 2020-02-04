#include <iostream>
using namespace std;

// global Scope: accessible in all functions
// as long as the program is running they exist
int g = 0;

void fun()
{
    // local scope of a is 5
    int a = 5;
    g = g + a;
    cout << g;
}

int main()
{
    // local to main function scope,
    // assessible only in this function

    int x = 30;
    // reassigns 15 to global g
    g = 15;
    fun();
    // increases g
    g++;
    // prints g
    cout << g;
}