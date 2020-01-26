## C++ Conditionals

**Logical Operators**

* && - Both must be true to execute logic
* || - either one can be true to run 
* ! - Not will negate any value added to the program

**Relational Operators**

These are the same as other programming languages and should be self explainitory

**Dynamic Declaration**

Examine the following code:

```cpp
int main()
{
    int a, b,c;
    if ()
    {
        int m
    }

}
```

this code will allocate memory as needed inside of the main memory stack as the int value m only when the if block is running. this is known as dynamic memory declaration. as code and programs are running through and executed their code will it self be moving throughout the stack allocating/deleting memory as needed for the main function execution. this is a *HUGE* advantage over C programming which used to require you declare varaibles even if you are using them or not.

if you for some reason decide that you do not need a varaible to hog the dynamic memory you can utilize a feature introduced in C++ 17. view the code below to see.

```cpp
int main()
{
    int a, b,c;
    if (int k= exp; k > a)
    {
        
    }
}
```

the life of the k variable is only used to hold the expression value for the conditional. after the if code block is expressed it will no longer exisit in memory.
 this is very similar behavior for FOR loops in Java or other languages.