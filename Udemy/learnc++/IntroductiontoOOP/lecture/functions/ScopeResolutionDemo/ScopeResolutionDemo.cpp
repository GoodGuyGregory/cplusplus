#include <iostream>
using namespace std;

// Class Functions:
class Rectangle
{
private:
    int length;
    int width;

public:
    // Main Functions are written outside of the class with scope resolution variables

    // Default
    Rectangle();
    // Parameterized
    Rectangle(int l, int width);
    // Copy Constructor
    Rectangle(Rectangle &r);

    // Mutators:
    void SetLength(int l);
    void SetWidth(int w);

    // Accessors:
    int getLenth();
    int getWidth();

    // Facilitator Functions:
    int Area();
    int Perimeter();

    // Inquiry Functions:
    bool isSquare();

    // Destructor Functions:
    ~Rectangle();
};

Rectangle::Rectangle()
{
    length = 1;
    width = 1;
}

Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    width = r.width;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed";
}
// Scope Resolution Method for the Method Templates

int Rectangle::Area()
{
    return length * width;
}

bool Rectangle::isSquare()
{
    return length == width;
}
int main()
{
    Rectangle r1(10, 10);
    cout << "Area " << r1.Area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;
    return 0;
}