#include <iostream>
using namespace std;

int main()
{
    // Creates an Int Type Array
    int A[5] = {2, 4, 6, 8, 10};

    // creates an array of undefined size
    int B[] = {23, 420, 69, 911};

    // Prints all values in the A Array
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    // For each type array iterations:
    // Modern C++ 11 iteration methods
    //  The term auto can be used in place of the int value
    for (int x : B)
        cout << x << endl;

    // The use of the for each method can also predefine elements in your array.
    // use this with caution

    char C[] = {'A', 66, 'C', 68};

    // Ironically you will get the ASCII values of the elements in C
    // which could either be a blessing.. or a Curse..
    for (auto x : C)
        cout << x << endl;

    return 0;
}