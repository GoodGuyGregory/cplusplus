// BUILD PROGRAM:
// ==============
// c++ -c getName.cpp
// c++ getName.o

// EXECUTE PROGRAM:
// ===============
//  ./a.out

#include <iostream>
using namespace std;

// Program to get Name of the User and return a Message:

int main()
{
    string name;
    cout << "Please, Type your name:";

    // getLine will read all values until you hit ENTER:
    getline(cin, name);

    // cout << "Your name is " << name;

    cout << "Welcome Mr/Ms " << name;

    return 0;
}