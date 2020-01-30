#include <iostream>
using namespace std;

// Creates Default Arguments for the value z:
int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int main () 
{
    int c = add(2,5);
    c = add(2,5, 21);

    cout << "Sum " << c << endl;

    return 0;
    
}