#include <iostream>

using namespace std;

int main()
{
    int n, r;

    cout << "Enter a Large Number to Reverse" << endl;
    cin >> n;

    while (n > 0)
    {
        // Removes last digit
        r = n % 10;

        // moves the digit place with truncated int division
        n = n / 10;
        cout << r;
    }
    return 0;
}