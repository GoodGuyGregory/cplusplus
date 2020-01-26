#include <iostream>

using namespace std;

// Leap Year Program:

int main()
{
    int year;

    cout << "Checking for leap year..." << endl;
    cout << "What is the year?: " << endl;
    cin >> year;

    // A leap year exists if the year is divisible by 4
    if ((year % 4) == 0 || (year % 400) == 0)
    {
        cout << year << " is a leap year! " << endl;
    }
    else
    {
        cout << year << " is not a leap year!" << endl;
    }
}