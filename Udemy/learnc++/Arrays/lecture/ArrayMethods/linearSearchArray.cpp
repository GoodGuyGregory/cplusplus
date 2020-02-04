#include <iostream>

using namespace std;

// Binary Seach Complexity is O(n) time
int main()
{
    int A[10];

    int n = 10, key = 0;

    cout << "Enter Numbers (separate by spaces):" << endl;

    // Allows users to enter elements in the array:

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter Key Element to Find:" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << "Key Found at Position " << i << endl;
            return 0;
        }
        else
        {

            cout << "Key is not Found inside the Array:" << endl;
        }
    }
}