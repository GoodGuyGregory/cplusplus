#include <iostream>

using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};

    int n = 7, sum = 0;

    // iterate through each of the sections:
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    // This also adds elements with the foreach loop
    // for (int : A)
    //     sum += x;

    cout << "Sum is: " << sum;
    return 0;
}