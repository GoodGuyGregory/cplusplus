#include <iostream>

using namespace std;

int main()
{
    int n, i, fact = 1;

    cout << "Enter a Number for a factorial: " << endl;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << "! = " << fact;
}