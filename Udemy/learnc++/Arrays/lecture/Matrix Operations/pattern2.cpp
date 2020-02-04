#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i > j)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}