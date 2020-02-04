#include <iostream>

using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};

    // INT_MIN is used to determing minimum lowest int value possible:

    int n = 7, max = INT_MIN;

    max = A[0];
    for (int i = 0; i < n; i++)
    {

        if (A[i] > max)
        {
            // sets a new Max Value
            max = A[i];
        }
    }

    // Foreach Method
    for (auto x : A)
    {
        if (x > max)
            max = x;
    }
    // return the max value:
    cout << "Max Number is:" << max << endl;
}