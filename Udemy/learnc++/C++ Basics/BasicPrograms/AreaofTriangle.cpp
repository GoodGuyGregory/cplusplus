// BUILD PROGRAM:
// ==============
// c++ -c AreaofTriangle.cpp
// c++ AreaofTrigangle.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
#include <cmath>
using namespace std;

// This program is used for calculating the area of a triangle from user input
int main()
{
    // Equation:
    // Area = (base * height) / 2

    double Area;
    int base, height;

    // Prompt User for Data:
    cout << "Enter Base and Height of Triangle: ";

    // Get the variables of the triangle
    cin >> base >> height;

    Area = (float)(base * height) / 2;

    cout << "The Calculated Area is " << Area;

    // Displays the Area of the Triangle
}
