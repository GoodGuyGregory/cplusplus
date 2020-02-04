#include <iostream>

using namespace std;

// Binary Seach Complexity is O(Logn) time
int main()
{
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};

    int low = 0, high = 9, key, mid;

    cout << "Enter a Key:" << endl;
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << "Found Key at " << mid << endl;
            return 0;
        }
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Not Found" << endl;
}