// BUILD PROGRAM:
// ==============
// c++ -c addTwoNums.cpp
// c++ addTwoNums.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>

using namespace std;
// Program to add two numbers given:

int main()
{
    cout << "Enter Two Numbers:";
    int a, b, c;
    cin >> a >> b;
    // store result in c
    c = a + b;
    cout << "Resulting Total is " << c;
    return 0;
}