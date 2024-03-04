//
//  BinaryTree.hpp
//  BinaryTreeNode
//
//  Created by ai on 14/02/2024.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp
#include "TreeNode.hpp"

#include <stdio.h>

class BinaryTree{
private:
    TreeNode* root;
    TreeNode* InsertNodePrivate(TreeNode* root, int dataIn);
    void DeleteNodePrivate(TreeNode*& root, int value);

    // Private transversal methods
    void PreOrderPrivate(TreeNode* node);
    void PostOrderPrivate(TreeNode* node);
    void InOrderPrivate(TreeNode* node);
public:
    BinaryTree();
    ~BinaryTree();
    void PreOrder();
    void InOrder();
    void PostOrder();
    void InsertNode();
    void DeleteNode();
    TreeNode* FindMin(TreeNode* node);
};

#endif /* BinaryTree_hpp */
