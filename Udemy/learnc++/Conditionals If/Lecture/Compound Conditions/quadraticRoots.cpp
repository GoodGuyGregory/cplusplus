#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Basic Qudaratic equations:
    // ax^2 + bx +c = 0

    // Roots:
    // roots = (-b -+ sqrt(b^2-4ac))/2a
    // if the values under the radical are zero then the value under the radical doesnt matter:
    // the value under the radical is also refered to as the discriminat

    // Therefore d = sqrt(b^2 -4ac): has many conditions that are related to it

    float a, b, c, d, r1, r2;

    cout << "Enter a,b and c";
    cin >> a >> b >> c;

    // calculate the discriminant:
    d = pow(b, 2) - 4 * a * c;

    // check the conditions of d
    if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << (-b / (2 * a));
    }
    else if (d > 0)
    {
        cout << "roots are real and unequal" << endl;
        cout << (-b + sqrt(d)) / (2 * a) << endl;
        cout << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else
    {
        cout << "the roots don't exist they are imaginary";
    }
}
