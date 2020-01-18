#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    if (n >= 0)
    {
        // Then the number is positive:
        cout << n << " is a Positive number";
    }
    else
    {
        cout << n << " is a Negative number";
    }
}