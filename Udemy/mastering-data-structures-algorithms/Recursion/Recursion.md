**Recursion Notes**

Important notes on recursion.

There are two main portions to Recurision, a calling time and a returning time whicha are placed before or after a recursion functional call.

for example examine the function below:

```c#
void generalfunc() 
{
    if(n > 0) {
        // 1. Calling function procedure
        // Ascending will occur each time before recurison is stack is popped
        generalfunc(n-1)
        // 2. returning functional procedure
        // Descending: will happen after the stack of recurion call has popped
    }
}
```

Each Activation record of a recursive function is *n+1* calls. or O(N) or N number of calls for Recursion calls.

**Recursion vs Loops**

Both do iterations however loops do not have two additional phases of procedures.

**Analyzing Time Complexity**

Each Element or Statement in a Function is notated as 1 unit of Time

Examine the case below:

```cpp
void fun1(int n)
{
    // if n is 3.. it takes 3, if 5, it takes 5 therefore N number of Times
    if (n > 0)
    {
// Takes 1 unit of time.
        printf("%d", n);
        fun1(n - 1);
    }
}
```

**Recurance Relations**

*Code Based Analysis*

T(n) = { T(n-1) + 2 *When n > 0*, 1 *when n = 0*}

T(n-1) because of the cases inside of the recurance relations

+2 Because of each additional statement listed on the other code statements in the function


```cpp
void fun1(int n)
{
    // Takes 1 unit of time
    if (n > 0)
    {
// Takes 1 unit of time.
        printf("%d", n);
        // Takes N Unit of time:
        // T(n-1) Time 
        fun1(n - 1);
    }
}
```

*Solving with Induction or Substitution*

This is the other method for computing the algorithm's recurrance relation.