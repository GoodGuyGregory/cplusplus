## Data Types in C++

Data is either **Numeric** or **Character/Alphabetic**

## Numeric

$45.00, 25 students, 15.35 etc there are decimal and standard numeric notation
in computers this has to be determined for the binary conversion for the computer to utilize the data with types. **integers**, **floats**, **doubles**

## Characters

Names **Mark, Matthew,** etc are words or **Strings** in C++. These have to be represented in Binary as well there are separate code types for **characters** for binary conversions

## Main Memory

in memory it is stored in 1 byte, or Bytes of 8 bits... these collections of bits are memory in binary form. bytes are 0-255. with minimum being 0->255 bites for these conversions to be made.

these size comparisons are important to keep in mind as you will be storing an manipulating these data types in c++ programs to your advantage.

```c++
int main() 
{
    // Where is this stored?
    int a,b,c;

    a = 10;
    b = 5
    c = a + b;

}
```

conceptually these are stored in the variables. Data Types can be broken down into additional categories such as **Primative**, **Variables**.

## Primative Data Types

Data Type | Size (Bytes)     | Range
--------- | ---------------- | ------------------------ 
**int**   | 2 or 4           | **-32768 to 32767**
float     | 4                | -3.9*10^-38 to 3.9*1^38
double    | 8                | -1.7*10^-308 to 1.7*10^308
**char**  | 1                | **-128 to 127**
bool      | undefined        | true/false

  
**Characters**

Characters are represented in **ASCII** values it is essential that you remember these codes as a programmer. See the inserted chart attached to these notes for helpful insight.

**Modifiers**

unsigned ints or 0-65535, or unsigned Chars 0-255, and Long int - 4 bytes, 8-bytes modifiers, these are used with limitied data types. these will all make more sense in the end of the course module so this will be more informative as the course is continued.
