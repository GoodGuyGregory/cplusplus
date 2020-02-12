#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

struct student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};
int main()
{
    // declaration
    struct Rectangle r;
    // initialization
    struct Rectangle r
    {
        10, 5
    };

    // Accessing variable of the struct
    r.length = 15;
    r.breadth = 10;

    printf("Area of Rectangle is %d", r.length * r.breadth);
    return 0;
}