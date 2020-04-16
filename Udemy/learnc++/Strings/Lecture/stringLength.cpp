#include <iostream>

using namespace std;

int main()
{
    char *l;

    cout << "Enter a String and Length will be calculated" << endl;
    cin.getline(l, 100);

    cout << "String Length is: " << strlen(l) << endl;
}