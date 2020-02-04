#include <iostream>
using namespace std;

// Call by Address:
// Because the values of the functions are pointer variables
void swap(int *a, int *b)
{
    cout << "Enter the swap Method" << endl;
    cout << a << " " << b << endl;
    int temp;
    // dereference the pointer varaiables
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    swap(&x, &y);
    cout << "After the Method call... " << endl;
    cout << x << " " << y;
    return 0;
}