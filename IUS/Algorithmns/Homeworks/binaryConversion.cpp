#include <stdio.h>
#include <iostream>

using namespace std;

// Call by value:
int binaryNumber(int n)
{
    // Base case:
    if (n == 0)
        return 0;
    else
        // Recursive Call
        return n % 2 + 10 * (binaryNumber(n / 2));
}

int main()
{
    int x;
    cout << "Enter a Number to Convert to Binary: " << endl;
    cin >> x;

    // Prints the values
    printf("%d", binaryNumber(x));
    return 0;
}