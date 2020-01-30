#include <iostream>
using namespace std;

int main()
{
    int n, r, m = 0, rev = 0;
    cout << "Enter a Number to check if it is a Reverse of a number" << endl;
    cin >> n;
    m = n;
    while (n > 0)
    {
        // Removes last digit
        r = n % 10;

        // moves the digit place with truncated int division
        n = n / 10;

        // adds the reverse to a new number
        rev = rev * 10 + r;
    }
    cout << "Reverse Number is: " << rev << endl;
    if (rev == m)
    {
        cout << m << " is also a Palindrome";
    }

    return 0;
}