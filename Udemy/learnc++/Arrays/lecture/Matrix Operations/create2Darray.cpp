#include <iostream>

using namespace std;

int main()
{
    // creates a 2D arrays:
    int A[2][3] = {{2, 5, 9}, {6, 9, 15}};

    // Accessing the Elements requires a 2 layer for loop:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
}