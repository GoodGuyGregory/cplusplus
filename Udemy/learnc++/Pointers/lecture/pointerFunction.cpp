#include <iostream>
using namespace std;

// Functions:
int max(int x, int y)
{
    return x > y ? x : y;
}

int min(int x, int y)
{
    return x < y ? x : y;
}


int main() 
{
    // establishs function call with pointers:
    // declaration
    int (*fp)(int,int);

// this allows for Runtime polymorphism
    fp = max;
    // calls max for the pointer
    (*fp)(10,5);

    // calls min for the pointer
    fp = min;
    (*fp)(10,5);

}