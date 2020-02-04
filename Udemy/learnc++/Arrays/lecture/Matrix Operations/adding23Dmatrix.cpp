#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {{2, 5, 9}, {7, 3, 6}};
    int B[2][3] = {{6, 3, 4}, {9, 5, 2}};

    int C[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Adds all of the elements with the loop on each of the matries
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displays C values with for each loop:
    // this can also be used to intilialize the array with cin
    for (auto &x : C)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}