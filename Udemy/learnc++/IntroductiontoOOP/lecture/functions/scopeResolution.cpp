#include <iostream>

// Class Def:
class Rectangle
{
private:
    int length;
    int width;

public:
    // Defined in the class
    int area()
    {
        return length * width;
    }
    // defined in a scope resolution
    // Prototype function listed
    int perimeter();
};

// Scope Resolution Method:
// Scope resolution shows that the function is written for the Rectangle class
// prevents inline functions
// best technique is to write funcitons outside of the class that have complex logic such as nested for-loops
int Rectangle::perimeter()
{
    return 2 * (length + width);
}
int main()
{
    Rectangle r(10, 5);
    cout << r.area();
    cout << r.perimeter();

    return 0;
}