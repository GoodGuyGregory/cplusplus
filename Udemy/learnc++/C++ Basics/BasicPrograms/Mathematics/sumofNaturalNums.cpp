// BUILD PROGRAM:
// ==============
// c++ -c sumofNatrualNums.cpp
// c++ sumofNaturalNums.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
using namespace std;

int main()
{
    // declare variable from the user:
    int n, sum;

    cout << "Enter Number: ";

    cin >> n;

    // Now Calculate the Natural Sum of N from the equation:
    // sum = (n * (n + 1))/2;
    sum = (n * (n + 1)) / 2;

    cout << "The Natural Sum of N is: " << sum;

    // End the Program
    return 0;
}