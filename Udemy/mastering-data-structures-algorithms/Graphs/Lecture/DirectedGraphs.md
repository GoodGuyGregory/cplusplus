## Directed Graph Representations

**Adjacency Matrix**

Graph Values are listed for values of the *indegree* of the Vertex values and the list is converted into a matrix.

Time Complexity: `O(n^2)` because the values are N * N

**Adjacency List**

*Out-Degrees* are the only things that can be measured in this interpretation.

The Inverse Adjacency List will show the *indegree* values of the list. This list only shows the list of values coming into the list

Time Complexity: is calculated by |V| + |E| 
n + e or n + n which will result in an `O(n)` 

