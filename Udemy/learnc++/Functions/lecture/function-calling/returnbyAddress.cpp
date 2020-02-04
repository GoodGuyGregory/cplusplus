#include <iostream>
using namespace std;

// Call by Address:
// Because the values of the functions are pointer variables
int *fun()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = 5 * i;
    }
    cout << p << endl;
    return p;
}

int main()
{
    // returns the heap memory address of the program
    int *q = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }
}