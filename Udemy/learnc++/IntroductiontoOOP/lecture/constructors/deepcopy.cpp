#include <iostream>

using namespace std;

// Creates a Test Class to demonstrate the concept of a copy constructor:
class Test
{
public:
    int a;
    int *p;

    Test(int x)
    {
        a = x;
        p = new int[a];
    }

    Test(Test &t)
    {
        // repoints the references of the other objects:
        //  Dynamic copies could be an issue here
        a = t * a;
        p = new int[a];
    }
};

int main()
{
    Test t(5);

    // Copy Constructor
    Test t2(t);
}