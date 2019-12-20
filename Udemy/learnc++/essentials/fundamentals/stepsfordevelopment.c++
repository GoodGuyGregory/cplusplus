#include <iostream>

int max(int x, int y)
{
    if (x > y)
        return x;
    else
    {
        return y;
    }
}

// execution:

int main()
{
    int a = 10, b = 5, c;

    c = max(a, b);

    std::cout << c;
}