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

**Comparison for Values in Trees**

Height is determined as Logn <= H <= N O(h) = O(logn). Maximum Comparisons are determined by the height of the tree

**Binary Search Function**

```c++
// Tail Recursion Case of the function
Node * Rsearch(Node *t, int key) 
{
    // base case
    if (t == NULL){
    return NULL;
    }
    // if it is found return the value
    if (key == t->data){
    return t;
    }
    else if (key < t->data) {
        return Rsearch(t->leftChild, key);
    }
    else {
        // case is greater look to the right
        return Rsearch(t->rightChild, key);
    }
}

// Iterative Function 
Node * Search(Node * t, int key) {
    while(t != NULL) {
    if(key == t->data) {
        return t;
    } else if (key < t->data) {
        t = t-> leftChild;

    } else  {
        t = t-> rightChild;
    }
    }
    // returns NULL if not in the tree
    return NULL;
}
```

**Insert into a Binary Search Tree**

Algorithmn is to search the tree and if there is a NULL pointer in the Tree return the value for that pointer location and add a new node at that location.

```c++
void Insert(Node *t, int key) 
{
    Node *r = NUll, *p;

    while (t != NULL) 
    {
        r = t;
        if(key == t->data){
            // stop the function value already exists in the tree 
            return;
        } else if (key < t->data) {
            // move the pointer to the left child of the tree Ndde
            t = t->leftChild;
        } else {
            t = t->rightChild;
        }
    }
    p = makeLocation(...); 
    p->data.key;
    p->leftChild = NULL;
    p->rightChild = NULL;
    if(p->data < r->data){
        r->leftChild = p;
    } else {
        r->rightChild = p;
    }
}

// Recursive BinaryTree Insertion:
Node * Rinsert(Node *p, int key) {
    Node *t;
    // creates a NULL pointer and then checks the location
    if(p == NULL) 
    {
        t=makloc(...);
        // set the node data with the value from key
        t->data = key;
        // set the left and right child as NULL
        t->leftChild = t ->rightChild = NULL;
        // returns the root value 
        return t;
    } if(key < p->data) {
        // call external function for insertion into the Tree at the leftside
        p->leftChild = insert(p->leftChild, key);
    }
    else if (key > p->data) {
        // key is greater than the ROOT node and must be inserted into the rightSubtree
        p->rightChild = insert(p->rightChild, key);
        return t;
    }

}

// Implements the Recursive BinaryTree insertion function:
int main() {
    Node *root = NULL;
    Rinsert(root, 30);
}
```

**Create a Binary Search Tree**

Keys: 9,15,5,20,16,8,12,3,6

**Deleting Binary Search Tree**

If Deletion of the Root Occurs you must delete the root and replace the Root Node with the `inorder sucessor/predecessor` the in-order sucessor is the Left most node in the `Right` subtree the in order predecessor is the right most node on the `left subtree`. When choosing which node to use to replace the overall height of the tree it is advised to use the inorder node that corresponds to a tree with the higher subtree height. If the Inorder successor or predecessor is not a leaf node there will need to be a case which will handle this and modify leaves accordingly.

Deletion's Time Complexity is once again dependent on the Height of the tree. so O(logn) is the common complexity and the additional modifications that might be required are factored in to that height complexity. the number of modifications is based also on the tree height and thus the complexity is also O(Logn)

**Inorder and Preorder of BST**

Generating a Preorder traversal Function in C++

```c++
void createPre(int pre[], int n) 
{
    stack stk;
    Node *t;
    int i = 0;

    root = new Node;
    root -> data = pre[i++];
    root -> lchild = root ->rchild = NULL;
    p=root;

    while(i < n) 
    {
        if (pre[i] < p->data) 
        {
            t= newNode;
            t -> data = pre[i++];
            t -> lchild = t ->rchild = NULL;
            p = lchild = t;
            push(&stk, p);
            p=t;
        } else {
            if(pre[i] > p->data && pre[i] < stack) 
            {
                 t= newNode;
            t -> data = pre[i++];
            t -> lchild = t ->rchild = NULL;
            p = lchild = t;
            push(&stk, p);
            p=t;
            }
        }
    }

}
```
