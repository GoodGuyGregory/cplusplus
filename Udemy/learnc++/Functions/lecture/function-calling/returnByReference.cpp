#include <iostream>
using namespace std;

int &fun(int &x)
{
    // returning a reference to the value
    return x;
}

int main()
{
    int a = 10;
    // returns the whole reference of the main value function for a
    fun(a);

    cout << a << endl;
}