#include <iostream>

using namespace std;

int main()
{
    //  Methods for Reading in Strings
    // char s[20];

    // cout << "Enter your Name: ";
    // cin >> s;

    // cout << "Welcome " << s << endl;

    // Method Two:
    // Holds Larger value for first and last name
    char s2[50];

    cout << "Enter your Name:";

    cin.getline(s2, 50);

    cout << "Welcome " << s2 << endl;

    return 0;
}