#include <iostream>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter a number for Factor Checks: " << endl;
    cin >> n;

    cout << "Factors of" << i << endl;
    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            cout << i << " is a Factor" << endl;
        }
    }
    return 0;
}