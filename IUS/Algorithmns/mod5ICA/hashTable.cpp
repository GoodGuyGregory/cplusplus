#include <iostream>
#include <cmath>

using namespace std;

void multiplication(int A[], int n)
{
    const double a = .6180339887;
    for (int i = 0; i < n; i++)
    {
        cout << (11 * ((A[i] * (a * 1))));
        cout << " ";
    }
}
void division(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] % 11;
        cout << " ";
    }
}
int main()
{

    int A[7] = {173, 18, 49, 91, 110, 156, 47};

    cout << "Division Method" << endl;
    division(A, 7);
    cout << endl;

    cout << "Multiplication Method:" << endl;
    multiplication(A, 7);
}