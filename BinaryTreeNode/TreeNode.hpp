//
//  TreeNode.hpp
//  BinaryTreeNode
//
//  Created by ai on 14/02/2024.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>

class TreeNode
{
    friend class BinaryTree;
private:
    int data;
    TreeNode* left;
    TreeNode* right;
public:
    TreeNode();
    TreeNode(int data);
    ~TreeNode();
};

#endif /* TreeNode_hpp */
