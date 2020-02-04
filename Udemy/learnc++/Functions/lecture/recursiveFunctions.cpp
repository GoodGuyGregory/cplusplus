#include <iostream>

using namespace std;

// move the decrementation of the function and enter break points to view it stack trace

void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
    }
}

int main()
{
    int x = 5;
    fun(5);
}