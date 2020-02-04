#include <iostream>

using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};

    int n = 7, max = 0;

    max = A[0];
    for (int i = 0; i < n; i++)
    {

        if (A[i] > max)
        {
            // sets a new Max Value
            max = A[i];
        }
    }
    // return the max value:
    cout << "Max Number is:" << max << endl;
}