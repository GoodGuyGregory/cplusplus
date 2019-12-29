// BUILD PROGRAM:
// ==============
// c++ -c expressions.cpp
// c++ expressions.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
// include Math Functions:
#include <cmath>
using namespace std;

// This program will represent expressional programing with the conversion
// Of typical generic mathematical expressions into expressions in C++

int main()
{
    // Operators:

    // Area of a Triangle is represented by area = (1/2)b*h
    double area;
    int base, height;

    // Area Calculation

    // perform caluculation

    area = (double)0.5 * (base * height);

    cout << "Area is " << area;

    // Area of a Rectangle is calculated by 2(length + base)

    double rectangleArea;
    int length, baseofRectangle;

    rectangleArea = 2 * (length + baseofRectangle);

    cout << "Area of the Rectangle is " << rectangleArea;

    // Summation of Area or A Sigma Summation is represented as sumation = n(n+1)/2

    double sum;
    int num;

    sum = num * (num + 1) / 2;

    cout << "The Summation of " << num << " is " << sum;

    // Arithmetic Progressional Series can be calculated as:
    // Term = A + (num -1 )d

    // Represented in code as:

    int term;
    int a, n, d;

    term = a + (n - 1) * d;

    // Quandratic Formula:

    double r;
    int a, b, c;

    r = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

    // Speed Calculations:
    double speed;
    double initialSpeed, finalSpeed, acceleration;

    speed = (pow(finalSpeed, 2) - pow(initialSpeed, 2)) / (2 * acceleration);
}
