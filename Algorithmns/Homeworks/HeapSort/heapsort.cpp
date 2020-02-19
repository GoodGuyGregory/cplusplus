#include <iostream>
using namespace std;

void displayArray(int heap[], int sizeh)
{

    for (int i = 0; i < sizeh; i++)
        cout << heap[i] << " ";
    cout << "\n";
}

void heapify(int heap[], int sizeh, int i)
{
    // Variables for Examining Child Nodes
    int largestNode = i;

    int leftChild = 2 * i + 1;

    int rightChild = 2 * i + 2;

    // Check Conditions of the LeftNode
    if (leftChild < sizeh && heap[leftChild] > heap[largestNode])
    {
        largestNode = leftChild;
    }
    // Checks Child Condition for the RightNode
    if (rightChild < sizeh && heap[rightChild] > heap[largestNode])
    {
        largestNode = rightChild;
    }

    if (largestNode != i)
    {
        swap(heap[i], heap[largestNode]);
        heapify(heap, sizeh, largestNode);
    }
    
}

void buildHeap(int heap[], int sizeh)
{
    for (int i = int((sizeh / 2) - 1); i >= 0; i--)
    {

        heapify(heap, sizeh, i);
    }
}

// Sorts With Recursive Heapify call
void heapSort(int heap[], int sizeh)
{

    cout << "Calling Build Heap" << endl;
    buildHeap(heap, sizeh);

    // Display the Array Prior to Sorting
    displayArray(heap, sizeh);

    for (int i = (sizeh - 1); i >= 2; i--)
    {

        swap(heap[0], heap[i]);
        cout << "calling Heapify for Array:" << endl;
        displayArray(heap, sizeh);
        heapify(heap, i, 0);
    }
}

int main()
{
    // Variables for Heapify
    int A1[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int firstLength = sizeof(A1) / sizeof(A1[0]);

    int A2[] = {13, 2, 91, 102, 12, 87, 45, 39, 27, 55, 42, 11, 3, 18, 64, 75, 51};
    int secondLength = sizeof(A2) / sizeof(A2[0]);

    cout << "A1 BEFORE sorting" << endl;
    displayArray(A1, firstLength);

    heapSort(A1, firstLength);

    cout << "A1 AFTER heapify" << endl;
    displayArray(A1, firstLength);

    cout << "A2 BEFORE sorting" << endl;
    displayArray(A2, secondLength);

    heapSort(A2, secondLength);

    cout << "A2 AFTER heapify" << endl;
    displayArray(A2, secondLength);
}