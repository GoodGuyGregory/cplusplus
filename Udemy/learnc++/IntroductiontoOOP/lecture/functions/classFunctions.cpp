#include <iostream>

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
    Reactangle(Rectangle &r);

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
    int isSquare();

    // Destructor Functions:
    ~Rectangle();
};

int main()
{
    return 0;
}