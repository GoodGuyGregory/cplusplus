#include <iostream>
using namespace std;

int main() 
{
    int x = 10;
    // Left hand side now x is a reference 
    int &y = x;

    cout << x << endl;
    // increments x as well because y is a derefence to x value
    y++;
    x++;
    cout << x << endl;
    cout << &y << " " << &x;
}
