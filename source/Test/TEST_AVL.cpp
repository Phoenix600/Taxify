#include <iostream>

struct Node
{
    int key;
    int height;
    struct Node* left;
    struct Node* right;
};

// Utility function to return the max element between two numbers 
int max(int a, int b)
 {
    return a>b?a:b;
 }


// Function return the height of the node in tree
int getHeight(struct Node* n)
{
    if(n==NULL)
        return 0;
    return n->height;
}

// @createNode() returns the struct Node* node pointer by settings its left,right pointrt, key and height of the node.
struct Node* createNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->key = key;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int getBalanceFactor(struct Node* n)
{
    if(n == NULL) // Height of left subtree - right subtree for single node is 0
        return 0;
    return getHeight(n->left) - getHeight(n->right);    
}

struct Node* rightNode(struct Node* y)
{
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left),getHeight(y->right)) + 1;
    x->height = max(getHeight(y->left),getHeight(y->right)) + 1;

    return x;
}

struct Node* leftRotation(struct Node* x)
{
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    // x->

    return y;
}


using std::cin;
using std::cout;

int main()
{
    return 0;
}