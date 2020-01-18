#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // Single if/else logic do not need flower brackets
    if (age >= 12 && age <= 50)
        cout << "You're young!"
             << "\n";
    else
        cout << "You're not yong, one might consider you old!"
             << "\n";

    cout << "Let's check your eligibility for an offer!"
         << "\n";

    if (age <= 12 || age >= 50)
        cout << "you're eligible for our offer!";
    else
        cout << "you're not eligible for our offer!";

    return 0;
}
