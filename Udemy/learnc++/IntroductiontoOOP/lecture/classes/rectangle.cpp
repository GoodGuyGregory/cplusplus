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
    Rectangle r1, r2;

    r1.length = 10;
    r1.width = 5;

    cout << "Area of Rectangle 1 " << r1.area() << endl;

    r2.length = 15;
    r2.width = 10;

    cout << "Area of Rectangle 2 " << r2.area() << endl;

    return 0;
}