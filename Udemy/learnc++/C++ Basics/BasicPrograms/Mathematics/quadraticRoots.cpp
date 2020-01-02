// BUILD PROGRAM:
// ==============
// c++ -c quadraticRoots.cpp
// c++ quadraticRoots.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

// This program will represent the Quadratic Equation with Roots in C++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // declare variables for the user:
    float a, b, c, root1, root2;

    cout << "Enter your Quadratic Variables: ";
    cin >> a >> b >> c;

    // Calculate the Program:
    root1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

    root2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    // First Root:
    cout << "Roots are: " << root1 << " " << root2;

    return 0;
}
