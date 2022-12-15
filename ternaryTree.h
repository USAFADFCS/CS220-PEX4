/** ternaryTree.h
 * ===========================================================
 * Name: last first
 * Section: 
 * Project: PEX4
 * Purpose: Use a ternary tree hold a dictionary for a spell checker
 * ===========================================================
 */
#ifndef TERNARYTREE_H
#define TERNARYTREE_H

// The definition of a node
typedef struct nodeStruct {
    char key;
    struct nodeStruct* left;
    struct nodeStruct* center;
    struct nodeStruct* right;
} TTreeNode;

/** printPreOrderTraversal()
 * @brief  prints to the console a preorder traversal of
 *           the ternary tree given (not required for gate check)
 * @param  root - pointer to root of a ternary tree
 * @pre    a ternary tree exists
 * @post   none
 */
void printPreOrderTraversal(TTreeNode* root);


#endif  // TERNARYTREE_H