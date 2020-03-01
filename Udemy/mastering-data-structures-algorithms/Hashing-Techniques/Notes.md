## Hashing Techniques

Hashing is used for searching, Linear, Binary Searching 

* Linear Search time is Linear O(n) - Keys are not sorted
* Binary Search O(logn)- Keys Must be sorted

Hashing Search complexity is less than O(logn) almost constant time. Keys must be arranged to accomplish the constant time complexity. 

**Drawbacks**

in order to obtain a constant time there must be a large array set to accomodate the keys, there is alot of wasted space. To conserve space there must be a technique to HASH the keys into a space to reduce index values of the array

**Hashing Technique**

There are Four Relational Mappings for Hash Functions

Functions: 

* one - one: Every Key has one and only one mapped value for hash table h(x) = x, This is known as ideal hashing, the drawback is space required for the hash h(100) = 100 means there must be 100 indexies for the array to be hashed ideally.

* many - one: a modulus function would represent a many to one relation with multiple collisions h(x) = x % 10 there for you will have to resolve collisions

**Collision Handling**

There are two major methods for solving collisions

* Open Hashing: extends the space to accomodate additional spaces required
    * Chaining: when the hash function has collisions the duplicates are added to a list structure (Chain Structure) to maintain the structures in ASC order

* Closed Hashing: Utilizes only the original given hash space
    * Open Addressing: if two or more keys are mapped in the same space in hash table, the space it is provided might contradict the original hash function rules
        1. Linear Probing
        2. Quadratic Probing
        3. Double Hashing

**Hash Properties**

*Lambda* is known as the loading factor for the table it is calculated by `n/size` of table. Analysis of the table is always based on the loading factor the loading factor of `100/10` is expected to have 10 elements in the hash table size 10

**Complexity**

Sucessful Searching: Time is expected to be `t = 1 + (lambda/2)` average time.

Unsucessful Search: Time is excpected to be `t = 1 + lambda` for unsucessful time.
