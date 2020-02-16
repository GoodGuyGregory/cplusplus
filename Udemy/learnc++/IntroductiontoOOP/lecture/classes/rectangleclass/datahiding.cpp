#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length;
    int width;

public:
    // Mutators Setters
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
            length = 1;
    }

    void setWidth(int w)
    {
        if (w >= 0)
            width = w;
        else
            width = 1;
    }

    //  Accessors Getters:
    int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{

    // Creates a Rectangle class:
    Rectangle r;

    r.setLength(10);
    r.setWidth(5);

    cout << r.area() << endl;
}
