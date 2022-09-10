#ifndef AVL_TREE_H
#define AVL_TREE_H
#include<iostream>
#include<stdlib.h>

#include "../include/Employee.h"
// #include "../include/"

/// @brief structure to store the employee object in the form AVL_TREE nodes
/// @param struct Employee* E;
/// @param struct Node* left    : Left pointer of type struct* node which points to the left-subtree
/// @param struct Node* right   : Right pointer of type struct* node which points to the left-subtree
/// @param int Height :  to store the height of each node.
struct Node
{
    struct Employee* E;
    struct Node* left;
    struct Node* right;
    int height;
};


/// @brief @max() as utility function to calculate the maximum number between two integres
/// @param int a 
/// @param int b 
int max(int a, int b)
{
    return a>b?a:b;
}

/// @brief @height() returns the height of the AVL tree node
/// @param node 
/// @return int height; 
int height(struct Node* node);

/// @brief newNode() function creates the new node in the heap and then creates the object of the struct Employee*
/// @param void 
/// @return struct Node* 
struct Node* Newnode();

/// @brief rightRotate() rotate the node in the right direction if the right-inbalance is created 
/// @paragraph struct Node* y
/// @return struct Node* x
struct Node* rightRotate(struct Node* y);

#endif 