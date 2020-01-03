// BUILD PROGRAM:
// ==============
// c++ -c distanceFormula.cpp
// c++ distanceFormula.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2;
    int y1, y2;

    float distance;

    cout << "Enter your points for x1, y1 and x2, y2: ";

    cin >> x1 >> y1 >> x2 >> y2;

    // Calculation:
    int val;
    int val2;

    val = y2 - y1;

    val2 = x2 - x1;

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "Your distance for these points is:" << distance;

    return 0;
}