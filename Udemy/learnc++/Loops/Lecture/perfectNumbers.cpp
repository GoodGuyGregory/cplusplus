#include <iostream>

using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "If the Sum of the Factors of a Number are equal to 2 times that original number it is said to be perfect" << endl;
    cout << "Enter a number to determine Perfect Numbers: " << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (2 * n == sum)
    {
        cout << n << " is a Perfect Number! ";
    }
    else
    {
        cout << n << " is not a Perfect Number!";
    }
    return 0;
}