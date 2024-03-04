//
//  main.cpp
//  BinaryTreeNode
//
//  Created by ai on 14/02/2024.
//

#include <iostream>
#include "BinaryTree.hpp";
#include "TreeNode.hpp";

int main(int argc, const char * argv[]) {

    BinaryTree tree;

    // Insert nodes
    tree.InsertNode(10);
    tree.InsertNode(6);
    tree.InsertNode(14);
    tree.InsertNode(5);
    tree.InsertNode(8);
    tree.InsertNode(11);
    tree.InsertNode(18);

    // Print tree in PreOrder
    std::cout << "PreOrder traversal: ";
    tree.PreOrder();
    std::cout << std::endl;

    // Print tree in InOrder
    std::cout << "InOrder traversal: ";
    tree.InOrder();
    std::cout << std::endl;

    // Print tree in PostOrder
    std::cout << "PostOrder traversal: ";
    tree.PostOrder();
    std::cout << std::endl;

    // Delete a node
    tree.DeleteNode(14);

    // Print tree in InOrder after deletion
    std::cout << "InOrder traversal after deleting 14: ";
    tree.InOrder();
    std::cout << std::endl;

    return 0;
}
