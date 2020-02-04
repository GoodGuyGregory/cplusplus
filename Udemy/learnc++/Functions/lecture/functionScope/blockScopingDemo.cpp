#include <iostream>
using namespace std;

// global scope variable
int x = 10;
int main()
{
    // local scoped variable
    int x = 20;
    {
        // local scope variable
        int x = 30;
        // displays 30
        cout << x << endl;
    }
    // displays 20 local scope variable
    cout << x << endl;

    // to access the global x
    // uses scope resolution variable
    cout << ::x << endl;
    return 0;
}