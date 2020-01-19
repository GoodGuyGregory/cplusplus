#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three numbers of type int: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the greatest of these numbers" << endl;
    }
    else if (b > c)
    {
        cout << b << " is the greatest of these numbers" << endl;
    }
    else
    {
        cout << c << " is the greatest number" << endl;
    }
}
