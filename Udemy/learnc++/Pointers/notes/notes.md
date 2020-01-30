## Pointers

Two types of common variables are available in the C language:

1. data variables: `int x = 10;`

2. address variables: `int *p;` they cannot store data but stores the address of the data, accessing the data where 

Examples of Uses:

try running this program to understand the concept

```cpp
int main() 
{
    int x = 10;
    // declared pointer p
    int *p;

    // p points to the address value of x
    // initialization of pointer
    p = &x; 

    // dereferencing 
    cout << *p << endl;
}
```

**Why Pointers**

Programs cannot access the Heap of code pointers all for Heap access them indirectly. The Main method of a program can only access the stack and main code sections. Java and other languages dont allow access for these heap variables., this allows for OS and device drivers


Example:

How would you indirectly access the location of a file? with the assistance of a pointer.

**Acessing HEAP**

the size of the Heap is decided at Compile Time and not Runtime of the program. all variables in the main method are stored in the stack but if you use the new keyword of a pointer it will create a heap array. moving pointers does not remove the heap storage you must use DELETE and then set the pointers to NULL. if you remove the pointer from dereference and you delete the pointer but do not delete heap storage you will create memory leaks

```c++
int main () {
    int A[5] = {1,2,3,4,5};

    // allows for heap access, but the variable is still created in the stack
    int *p;

    // stores heap based array
    p = new int[5];

    // creates pointer and initializes heap var:
    int *p = new int[5];

    // Delete the pointer vars in HEAP:
    delete []p;
    // sets pointer to NULL
    p = NULL;
}
```

**Pointer Arithmetic**

5 Operations for Pointers:

* p++; moves the reference of the variable by 1 element to the next location, float types are 4 bytes, int 2 bytes, char 1 byte, these are the additions of the data type 

* p--; moves the reference 1 element back based on the data type
* p = p+2: moves the pointer 2 elements
* p = p -2: moves back the designated value
* d = q - p: you can subtract pointers from the address which will yeild the distance between the two pointers. the results allow you to determine location on the heap.

**Pointer Problems**

Pointer problems yield to RUNTIME errors. which are very dangerous.

1. Unitiialized Pointers:
    
    careless programers do not execute heap pointers with exisiting references

    ```c++
    int *p;
    
    //defaults to a unvalidated location
    *p =25;
    ```

    fixing these errors requires two steps:

     ```c++
    int x = 10;
    int *p;
    
    //point to an exisiting variable:
    p =&x;

    // assign memory location 
    p = (int *)0x5638;

    // ALLOCATE POINTER IN HEAP
    p = new int (5);
    ```

2. Memory Leaks: relates to HEAP and pointers, if you do not delocate heap memory then you can either run out of heap memory, or create memory leaks.

    ```c++
    int *p = new int[5];
    
    // Delocate
    p = NULL;
    ```

    to fix these issues you should delete the memory before proceeding to dereference the HEAP memory.
```c++
    int *p = new int[5];
    
    // Safely Delete HEAP
    delete []p;
    // Delocate
    p = NULL;

    p = 0;
    p= nullptr;
```

3. Dangling Pointers: when deletion of the pointer inside another function and then tries to dereference the returned value of the pointer.

```c++
void main() 
{

    int *p = new int[5];
    fun(p);

    // trying to access the value from the function:
    cout << *p;
}
    void fun(int *a)
    {
        -
        -
        -
        // problematically deletes the main memory
        delete []q;
    }
```

**Pointers to Functions**

Follow these three steps in order to complete a funxtion that will utilize heap values.

```c++
void display()
{
    cout << "Hello" << endl;
}
int main() 
{
    // pointers to functions
    // declaration of pointer function
    void (*fp)();
    // iniitalization of the pointer
    fp = display;
    // function call
    (*fp)();
}
```