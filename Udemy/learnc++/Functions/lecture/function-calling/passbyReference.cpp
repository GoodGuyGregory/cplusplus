#include <iostream>
using namespace std;

// Call by reference
// values are passed as dereferenced variables of the functions

void swap(int &a, int &b)
{
    cout << "Enter the swap Method" << endl;
    cout << a << " " << b << endl;
    int temp;
    // dereference the pointer varaiables
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Unlike call by value the pass by reference is actually able to maniupulate the
    // values of the functions are acted like call by address
    int x = 10, y = 20;

    // When passing by reference there is no activation record in the stack recorded,
    // The values of x and y are stored as main code.
    // Then Temp is created in the main activivation record

    // Call by reference should be used when:
    // * you want to actually replace values of the variables to be called,
    // make sure your codes do not contain loops
    // pass by reference are often called inline functions, because of this main code aspect

    swap(x, y);
    cout << "After the Method call... " << endl;
    cout << x << " " << y;
    return 0;
}