#include <iostream>
using namespace std;

int main()
{
    // Declares and stores HEAP array
    int *p = new int[5];
    p[0] = 12;
    p[1] = 23;
    cout << p[1] << endl;

    delete[] p;
    p = nullptr;

    // Benefits of using HEAP:

    // Creates Stack array: the problem is that there isn't a syntax to change the size of this array
    // it is a contant size
    int size;

    cout << "Enter a number of elements";

    cin >> size;

    int A[size];

    // displays size of array in bytes: 4 bytes per element
    cout << sizeof A << endl;

    // Using HEAP storage to modify an exisiting array by using a dynamic array

    int *p = new int[size];

    cout << "Enter new Size: ";
    cin >> size;

    p = new int[size];

    return 0;
}