#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //  this program determines if a number is an armstrong number:
    // Armstrong numbers are numbers which sum of digits cubed is the original number:
    int n, r, m, sum = 0;

    cout << "Enter a Number to check if it is an Armstrong number" << endl;
    cin >> n;

    m = n;

    while (n > 0)
    {
        // Removes last digit
        r = n % 10;

        // moves the digit place with truncated int division
        n = n / 10;

        // get the total of the digits cubed
        sum += pow(r, 3);
    }
    if (m == sum)
    {
        cout << m << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << m << " is not an Armstrong Number" << endl;
    }
}