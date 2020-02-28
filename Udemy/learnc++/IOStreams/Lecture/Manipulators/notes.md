**Manipulators for IO**

Manipulators assist in the formatting of IO streams 

`cout << endl;` same as `cout << "\n";`

**Converting Output**

integer
* hex
* oct
* dec

`cout << hex << 163;` should return A3

Floating Point

* fixed `cout << fixed << 125.731;`
* scientific 

**Layout Manipulations**

* set() left, right
* ws 

`cout << set(10) << "Hello";` `cout << 10 << ws << 20;`