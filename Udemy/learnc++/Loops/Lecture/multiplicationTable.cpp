#include <iostream>

using namespace std;

int main()
{
    int n, i;

    cout << "Enter a Multiplication Table to see Values: " << endl;
    cin >> n;

    for (i = 1; i < 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}