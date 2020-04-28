#include <iostream>
#include <cmath>

#define A 0.6180339887

using namespace std;

int multiplication(int key, int tableSize)
{
    return floor(tableSize * fmod(key * A, 1));
}

int division(int key, int tableSize)
{
    return (key % tableSize);
}
int main()
{
    int tableSize = 11;
    int hashlocation;
    cout << "Division Method:" << endl;
    cout << "============================" << endl;

    hashlocation = division(173, tableSize);
    cout << "Number 173: " << hashlocation << endl;

    hashlocation = division(18, tableSize);
    cout << "Number 18 " << hashlocation << endl;

    hashlocation = division(49, tableSize);
    cout << "Number 49: " << hashlocation << endl;

    hashlocation = division(91, tableSize);
    cout << "Number 91: " << hashlocation << endl;

    hashlocation = division(110, tableSize);
    cout << "Number 110: " << hashlocation << endl;

    hashlocation = division(156, tableSize);
    cout << "Number 156: " << hashlocation << endl;

    hashlocation = division(47, tableSize);
    cout << "Number 47: " << hashlocation << endl;

    cout << "============================" << endl;
    cout << " " << endl;

    cout << "Multiplication Method:" << endl;
    cout << "============================" << endl;
}