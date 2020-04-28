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

int hashFunctionB(int key)
{
    return ((key + 31) % 10);
}

int main()
{
    int tableSize = 11;
    int hashlocation;

    cout << "Part A Implementation:" << endl;

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

    hashlocation = multiplication(173, tableSize);
    cout << "Number 173: " << hashlocation << endl;

    hashlocation = multiplication(18, tableSize);
    cout << "Number 18: " << hashlocation << endl;

    hashlocation = multiplication(49, tableSize);
    cout << "Number 49: " << hashlocation << endl;

    hashlocation = multiplication(91, tableSize);
    cout << "Number 91: " << hashlocation << endl;

    hashlocation = multiplication(110, tableSize);
    cout << "Number 110: " << hashlocation << endl;

    hashlocation = multiplication(156, tableSize);
    cout << "Number 156: " << hashlocation << endl;

    hashlocation = multiplication(47, tableSize);
    cout << "Number 47: " << hashlocation << endl;
    cout << "============================" << endl;
    cout << " " << endl;

    cout << "Part B Implementation:" << endl;
    cout << "============================" << endl;
    cout << "Number 19: " << hashFunctionB(19) << endl;

    cout << "Number 26: " << hashFunctionB(26) << endl;

    cout << "Number 13: " << hashFunctionB(13) << endl;

    cout << "Number 48: " << hashFunctionB(48) << endl;

    cout << "Number 17: " << hashFunctionB(17) << endl;

    cout << "Number 23: " << hashFunctionB(23) << endl;

    cout << "Number 79: " << hashFunctionB(79) << endl;

    cout << "Number 38: " << hashFunctionB(38) << endl;

    cout << "Number 58: " << hashFunctionB(58) << endl;

    cout << "Number 55: " << hashFunctionB(55) << endl;
}