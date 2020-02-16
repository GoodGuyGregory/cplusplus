#include <iostream>
using namespace std;

class Rectangle
{
    // Makes all class attributes Publicly accessible
public:
    // variables of size int are 2 bytes
    int length;
    int width;

    int area()
    {
        return length * width;
    }

    int perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Creates Two Classes in the Main Stack:
    Rectangle r1, r2;

    // creates a pointer variable of class rectangle
    // Rectangle *ptr;

    //creates a heap reference to the pointer
    Rectangle *ptr = new Rectangle;

    r1.length = 10;
    r1.width = 5;

    cout << "Area of Rectangle 1 " << r1.area() << endl;

    r2.length = 15;
    r2.width = 10;

    cout << "Area of Rectangle 2 " << r2.area() << endl;

    ptr = &r1;
    ptr->length = 10;
    ptr->width = 23;
    cout << "=============================" << endl;
    cout << "Area and Paremeter of Pointer Rectangle" << endl;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
    return 0;
}