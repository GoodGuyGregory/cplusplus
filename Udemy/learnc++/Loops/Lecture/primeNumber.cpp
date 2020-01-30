#include <iostream>

using namespace std;

int main()
{
    int i = 1, n, count = 0;

    cout << "Enter a Number to Check if it is a Prime Number" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        // Check to determine if index and n are factors
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << n << " is not a Prime Number" << endl;
    }
    else
    {
        cout << n << " is a Prime Number" << endl;
    }
}