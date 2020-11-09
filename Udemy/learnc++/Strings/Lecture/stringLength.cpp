#include <iostream>

using namespace std;

int main()
{
    char *l;

    cout << "Enter a String and Length will be calculated" << endl;

    // getline will allow you to hit the enter key. to allow programs to receive multiple gets
    // you must use cin.ignore() to allow the removal of the enter key hit between requests
    cin.getline(l, 100);

    cout << "String Length is: " << strlen(l) << endl;
}
