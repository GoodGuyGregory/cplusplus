#include <iostream>
#include <cmath>

using namespace std;

class Cylinder
{
private:
    float radius;
    int height;

public:
    // Constructors:
    // Default:
    Cylinder(float r = 1.0, int h = 1)
    {
        setRadius(r);
        setHeight(h);
    }

    Cylinder(Cylinder &c)
    {
        radius = c.getRadius();
        height = c.getHeight();
    }
    // Accessors:
    float getRadius()
    {
        return radius;
    }

    float getHeight()
    {
        return height;
    }

    int getVolume()
    {
        // uses the PI constant from cmath
        return M_PI * pow(radius, 2) * height;
    }
    // mutators
    void setRadius(float r)
    {
        if (r > 0)
            radius = r;
        else
            radius = 0;
    }
    void setHeight(int h)
    {
        if (h > 0)
            height = h;
        else
            height = 0;
    }
};

int main()
{
    Cylinder c1(69.0, 420);

    Cylinder c2(c1);

    cout << "Creates a Cylinder Object:" << endl;
    cout << "Display's the Volume " << c1.getVolume();

    cout << "Creates another Deep Copy" << endl;
    cout << "Display's the Properties from C2" << endl;
    cout << "Height: " << c2.getHeight() << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    return 0;
}