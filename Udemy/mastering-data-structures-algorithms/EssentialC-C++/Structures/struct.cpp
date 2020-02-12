#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

// creates a student struct
struct student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

// playing cards:
struct playingCard
{
    int face;
    int shape;
    int color;
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

    // creates a card object
    struct playingCard c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;

    // creates a deck
    struct playingCard deck[52];

    return 0;
}