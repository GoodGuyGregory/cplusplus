#include <iostream>

using namespace std;

int main()
{
    int m1, m2, m3, total;
    float average;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    // by adding the 3.0 we truncate the decimal
    average = total / 3.0;

    if (average >= 60)
        cout << "A" << endl;
    else
    {
        if (average > 35 && average < 60)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }
}