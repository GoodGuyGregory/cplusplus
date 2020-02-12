#include <iostream>
using namespace std;

void displayArray(int heap[], int sizeh)
{
    cout << "Array:" << endl;
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

// Builds a Heao with Supporting Algorithm:
// See notes:

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

    buildHeap(heap, sizeh);

    // Display the Array Prior to Sorting
    displayArray(heap, sizeh);
    for (int i = (sizeh - 1); i >= 2; i--)
    {
        swap(heap[0], heap[i]);

        heapify(heap, i, 0);
    }
}

int main()
{
    // Variables for Heapify
    int heap[] = {9, 21, 23, 64, 8, 42, 52, 26, 72, 36};
    int length = sizeof(heap) / sizeof(heap[0]);

    // Display pre-sorted Array:
    cout << "Array BEFORE sorting" << endl;
    displayArray(heap, length);

    heapSort(heap, length);

    cout << "Array AFTER heapify" << endl;
    displayArray(heap, length);
}