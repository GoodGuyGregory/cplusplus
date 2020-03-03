## Tree Notes

**Binary Trees**

Trees of Degress Two. Degree two means that each node can have two children. Every Node can have 0-2 children.

Determining Height of Trees Based on Either Height or Nodes Given:

If Nodes are Given:
* Max Height= `height = nodecount - 1`
* Min Height= `height = logbase2(n+1) - 1`

If Height is Given:
* Max Nodes: `Nodes = 2^(h+1) - 1`
* Min Nodes: `Nodes = h + 1`

**Height of Binary Trees**

Ranges from

`log(n+1) -1 <= h <= n - 1`
O(Logn) -> O(n)

**Number of Nodes in a Binary Tree**

Ranges from
`h+1 <= n <= 2^h+1-1`

