#include <iostream>
using namespace std;

void display () 
{
    //  this is bad code but for the demo it will do
    cout << "hello" << endl;
}

int add(int x, int y) 
{
    int z;
    z = x + y;
    return z;
} 

int maxim(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if (b > c)
        return b;
    else return c;
}

int pow(int a, int b) 
{
    int power = 0;
    for(int i = 1; i <= a; i++) 
    {
        power = (b * b);
    }
    return power;
}


int pow(int m,int n)
{
    int p=1;
    
    for(int i=0;i<n;i++)
    {
        p=p*m;
    }
    return p;
}

int main() 
{
    display();

    int a = 2, b = 15,z=5, c;

    int r;

    add(a,b);

    r = maxim(a,b,z);


    cout << r << endl;

    cout << "sum is:" << c << endl;

      r = pow(1,5);

    cout << "Results from Pow() " << r << endl;
    return 0;
}