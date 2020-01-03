// BUILD PROGRAM:
// ==============
// c++ -c volumeOfCylinder.cpp
// c++ volumeOfCylinder.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Volume of a Cylinder:
    float volume;

    float pi = 3.1425;
    int radius;
    float height;

    cout << "Enter your Height, and Radius:";

    cin >> radius >> height;

    volume = pi * pow(radius, 2) * height;

    cout << "Your Cylinder's Volume is: " << volume;

    return 0;
}
