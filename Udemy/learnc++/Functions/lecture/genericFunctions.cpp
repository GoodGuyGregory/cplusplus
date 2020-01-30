#include <iostream>
using namespace std;

// Creates a Generic Function: for any data type:
template<class T>

T max(T x, T y)
{
    if (x > y) 
        return x;
    else 
        return y;
}

int main () 
{
    int c;
    
    
    c = max(10, 5);

    // d = max(10.5f, 6.9f);
    return 0;
    
}