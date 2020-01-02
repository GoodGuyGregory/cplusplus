// BUILD PROGRAM:
// ==============
// c++ -c speedCalc.cpp
// c++ speedCalc.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>

using namespace std;

int main()
{
    // Declare the values for the user to enter:
    int Principle, time, rateOfInterest;
    float SimpleInterest;

    // Equation for simple interest:
    // Simple Interest = Principle(1 + (rateOfInterest*time))

    cout << "Enter your Principle Loan Amount, Time of Loan, and rate Of Interest:";

    cin >> Principle >> time >> rateOfInterest;

    SimpleInterest = Principle * time * rateOfInterest / 100.0;

    cout << "Your Simple Interest: " << SimpleInterest << endl;
}