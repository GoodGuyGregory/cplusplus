#include <iostream>

using namespace std;

int main()
{
    int n, i, sum;

    cout << "Enter an N number" << endl;

    cin >> n;

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of N numbers is: " << sum;
}