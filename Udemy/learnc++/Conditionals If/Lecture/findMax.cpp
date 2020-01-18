#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter Two Numbers: ";
    cin >> x >> y;

    if (x > y)
    {
        cout << x << " is the Max Number ";
    }
    else
    {
        cout << y << " is the Max Number ";
    }
}