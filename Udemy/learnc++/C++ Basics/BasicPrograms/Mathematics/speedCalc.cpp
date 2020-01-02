// BUILD PROGRAM:
// ==============
// c++ -c speedCalc.cpp
// c++ speedCalc.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int initialVel, velocity, acceleration;
    float speed;

    cout << "Enter initial Velocity, Current Velocity and Acceleration: ";
    cin >> initialVel >> velocity >> acceleration;

    // Calculations:
    speed = (pow(velocity, 2) - pow(initialVel, 2)) / (2 * acceleration);

    cout << "Your Speed is: " << speed << endl;

    return 0;
}