#include <iostream>
using namespace std;

// Call by value: 
void swap(int a, int b)
{
    cout << "Enter the swap Method" << endl;
    cout << a << " " <<  b << endl;
    int temp;
    temp = a ;
    a = b;
    b = temp;
    cout << "Executes the Swap" << endl;
    cout << a << " " << b << endl;
}

int main () 
{
    int x = 10, y = 20;

    swap(x,y);
    cout << "After the Method call... " << endl;
    cout << x << " " << y;
    return 0;
    
}