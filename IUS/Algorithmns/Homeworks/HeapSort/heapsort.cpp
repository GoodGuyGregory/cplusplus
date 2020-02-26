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


// Output of Program:

// A1 BEFORE sorting
// 4 1 3 2 16 9 10 14 8 7 
// Calling Build Heap
// 16 14 10 8 7 9 3 2 4 1 
// calling Heapify for Array:
// 1 14 10 8 7 9 3 2 4 16 
// calling Heapify for Array:
// 1 8 10 4 7 9 3 2 14 16 
// calling Heapify for Array:
// 2 8 9 4 7 1 3 10 14 16 
// calling Heapify for Array:
// 2 8 3 4 7 1 9 10 14 16 
// calling Heapify for Array:
// 1 7 3 4 2 8 9 10 14 16 
// calling Heapify for Array:
// 2 4 3 1 7 8 9 10 14 16 
// calling Heapify for Array:
// 1 2 3 4 7 8 9 10 14 16 
// calling Heapify for Array:
// 1 2 3 4 7 8 9 10 14 16 
// A1 AFTER heapify
// 2 1 3 4 7 8 9 10 14 16 
// A2 BEFORE sorting
// 13 2 91 102 12 87 45 39 27 55 42 11 3 18 64 75 51 
// Calling Build Heap
// 102 75 91 51 55 87 64 39 27 12 42 11 3 18 45 13 2 
// calling Heapify for Array:
// 2 75 91 51 55 87 64 39 27 12 42 11 3 18 45 13 102 
// calling Heapify for Array:
// 13 75 87 51 55 11 64 39 27 12 42 2 3 18 45 91 102 
// calling Heapify for Array:
// 13 75 64 51 55 11 45 39 27 12 42 2 3 18 87 91 102 
// calling Heapify for Array:
// 18 55 64 51 42 11 45 39 27 12 13 2 3 75 87 91 102 
// calling Heapify for Array:
// 3 55 45 51 42 11 18 39 27 12 13 2 64 75 87 91 102 
// calling Heapify for Array:
// 2 51 45 39 42 11 18 3 27 12 13 55 64 75 87 91 102 
// calling Heapify for Array:
// 2 42 45 39 13 11 18 3 27 12 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 12 42 18 39 13 11 2 3 27 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 12 39 18 27 13 11 2 3 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 3 27 18 12 13 11 2 39 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 2 13 18 12 3 11 27 39 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 2 13 11 12 3 18 27 39 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 3 12 11 2 13 18 27 39 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 2 3 11 12 13 18 27 39 42 45 51 55 64 75 87 91 102 
// calling Heapify for Array:
// 2 3 11 12 13 18 27 39 42 45 51 55 64 75 87 91 102 
// A2 AFTER heapify
// 3 2 11 12 13 18 27 39 42 45 51 55 64 75 87 91 102