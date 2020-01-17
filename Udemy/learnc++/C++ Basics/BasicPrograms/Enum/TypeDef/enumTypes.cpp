#include <iostream>

using namespace std;

enum day
{
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat,
    sun
};

enum dept
{
    cs = 1,
    it,
    ec,
    mech
};

// Type Def makes programs more readable
typedef int badges;

int main()
{
    day d;
    d = fri;
    dept cs;

    badges js, ruby, java;

    ruby = 34;

    cout << fri << endl;
}