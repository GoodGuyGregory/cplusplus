#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by Zero!";
    }
    else
    {
        c = a / b;
        cout << "The Result is: " << c;
    }
    return 0;
}