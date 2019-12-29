// BUILD PROGRAM:
// ==============
// c++ -c operations.cpp
// c++ operations.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    a = 10;

    b = 5;

    // Additional Operator:
    c = a + b;

    cout << c;

    //  Subtraction Operators:
    c = a - b;

    cout << c;

    // Multiplication Operations:
    c = a * b;

    cout << c;

    // Division with Type Casting:

    c = (float)a / b;

    cout << c;

    // Modulus Operations:
    c = a % b;

    cout << c;
}