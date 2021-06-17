#ifndef BST_H
#define BST_H

typedef enum BSTOrder { PREORDER, INORDER, POSTORDER } BSTOrder;

typedef struct BSTNode
{
    int value;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;

BSTNode* insert(BSTNode*, BSTNode*);
BSTNode* create(int);
BSTNode* find(BSTNode*, int);
BSTNode* removeNode(BSTNode*, int);
BSTNode* deleteBST(BSTNode*);
void traverseBST(BSTNode*, BSTOrder);
#endif
