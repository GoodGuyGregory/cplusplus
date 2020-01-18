// This Program should take input from the user:
// Calculating the area of a Circle

// BUILD and RUN:
//  c++ -c AreaofCircle.cpp
// c++ AreaofCircle.o
// ./a.out

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     float radius, area;
     int height;
     float volume;

     cout << "Please Provide a Radius: "
          << "\n";
     cin >> radius;

     cout << "Now, Enter your height of the Cylinder: "
          << "\n";
     cin >> height;

     volume = 3.1425f * pow(radius, 2) * height;

     cout << "The Volume is: " << volume << " cubic units";
}