#include <iostream>

using namespace std;

int main()
{
    int amount;
    float disAmount;

    cout << "Enter the total amount: " << endl;
    cin >> amount;

    if (amount >= 500)
    {
        disAmount = amount - (amount * 20 / 100.0);
        cout << "Your total amount: " << amount << endl;
        cout << "Your Discount is: " << disAmount << endl;
    }
    else
    {
        if (amount >= 100 && amount < 500)
        {
            disAmount = amount - (amount * 10 / 100.0);
            cout << "Your total amount: " << amount << endl;
            cout << "Your Discount is: " << disAmount << endl;
        }
        else
        {
            disAmount = 0.0f;
            cout << "Your total amount: " << amount << endl;
            cout << "Your Discount is: " << disAmount << endl;
        }
    }
}