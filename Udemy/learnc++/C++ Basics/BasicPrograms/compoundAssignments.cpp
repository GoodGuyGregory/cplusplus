// BUILD PROGRAM:
// ==============
// c++ -c distanceFormula.cpp
// c++ distanceFormula.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    int c = 15;
    int sum = 5;

    // Basic Implementation:
    sum = sum + a;

    // Compound Assignment:
    sum += a;
    sum += b;
    sum += c;

    cout << "Sum is: " << sum;

    int product;

    // These can also be done with additional variables as follows:
    product *= a * b * c;

    cout << "Product is: " << product;
}