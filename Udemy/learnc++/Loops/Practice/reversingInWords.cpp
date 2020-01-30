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

        switch (r)
        {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        default:
            cout << "Zero";
        }
    }

    return 0;
}