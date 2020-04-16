## Depth First Search:

1. Visited
2. Exploring

Defining DFS, Uses a Stack structure for its implementation. Once a Vertex is visited start exploring additional verties. then push one into the stack and start exploring the new vertex added into the queue. This pattern happens until the graph has reached the end of the graph. reaching the Depth of the graph first before continuing the additional verties.

Exploring the Graph at step 3

![Exploring with DFS](../img/DFSSpaningTree,png)

Finished Searches will have arrows pointing and connecting previous entries those are called back edges. The image below shows the back edges of the graph.

![Exploring with Back Edges](../img/BackEdges.png)

Time Complexities depend on the Data structures being used but generally visiting all of the vertices will take time `O(n)`