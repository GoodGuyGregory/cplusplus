// BUILD PROGRAM:
// ==============
// c++ -c areaOfCicle.cpp
// c++ areaOfCircle.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius, area;

    // Get the radius from the user:
    cout << "Enter the Radius: ";
    cin >> radius;

    area = 3.1425f * pow(radius, 2);
    cout << "Area: " << area << endl;
    return 0;
}