#include "../include/AVL_TREE.h"

struct Node* Newnode()
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->E = createEmployeeObject();
    // #FIXME : 
    // [ ] Not Setted the key value in the node.
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* rightRotate(struct Node* y)
{
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left),height(y->right));

    return x;
}

