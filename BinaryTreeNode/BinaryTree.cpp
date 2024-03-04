#include "BinaryTree.hpp"
#include <iostream>

// Constructor
BinaryTree::BinaryTree() {
    root = nullptr;
}



//// Public methods
//void BinaryTree::PreOrder() {
//    PreOrderPrivate(root);
//}
//
//void BinaryTree::InOrder() {
//    InOrderPrivate(root);
//}
//
//void BinaryTree::PostOrder() {
//    PostOrderPrivate(root);
//}
//
//void BinaryTree::InsertNodePrivate(int data) {
//    root = insertNodePrivate(root, data);
//}
//
//void BinaryTree::DeleteNode(int value) {
//    DeleteNodePrivate(root, value);
//}
//
// Private methods




// Public methods
void BinaryTree::PreOrder() {
    PreOrderPrivate(root);
}

void BinaryTree::InOrder() {
    InOrderPrivate(root);
}

void BinaryTree::PostOrder() {
    PostOrderPrivate(root);
}

// Insert a node
void BinaryTree::InsertNode() {
    int value;
    std::cout << "Enter the value to insert: ";
    std::cin >> value;
    root = InsertNodePrivate(root, value);
    std::cout << "Value inserted successfully.\n";
}

// Delete a node
void BinaryTree::DeleteNode() {
    int value;
    std::cout << "Enter the value to delete: ";
    std::cin >> value;
    DeleteNodePrivate(root, value);
    std::cout << "Value deleted successfully.\n";
}


// Insert a node
TreeNode* BinaryTree::InsertNodePrivate(TreeNode* node, int dataIn) {
    if (node == nullptr) {
        return new TreeNode(dataIn);
    }
    if (dataIn < node->data) {
        node->left = InsertNodePrivate(node->left, dataIn);
    } else if (dataIn > node->data) {
        node->right = InsertNodePrivate(node->right, dataIn);
    }
    return node;
}

// Delete a node
void BinaryTree::DeleteNodePrivate(TreeNode*& node, int value) {
    if (node == nullptr) {
        return;
    }
    if (value < node->data) {
        DeleteNodePrivate(node->left, value);
    } else if (value > node->data) {
        DeleteNodePrivate(node->right, value);
    } else {
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            node = nullptr;
        } else if (node->left == nullptr) {
            TreeNode* temp = node;
            node = node->right;
            delete temp;
        } else if (node->right == nullptr) {
            TreeNode* temp = node;
            node = node->left;
            delete temp;
        } else {
            TreeNode* temp = FindMin(node->right);
            node->data = temp->data;
            DeleteNodePrivate(node->right, temp->data);
        }
    }
}

void BinaryTree::PreOrderPrivate(TreeNode* node) {
    if (node == nullptr)
        return;
    
    std::cout << node->data << " ";
    PreOrderPrivate(node->left);
    PreOrderPrivate(node->right);
}

void BinaryTree::PostOrderPrivate(TreeNode* node) {
    if (node == nullptr)
        return;
    
    PostOrderPrivate(node->left);
    PostOrderPrivate(node->right);
    std::cout << node->data << " ";
}

void BinaryTree::InOrderPrivate(TreeNode* node) {
    if (node == nullptr)
        return;
    
    InOrderPrivate(node->left);
    std::cout << node->data << " ";
    InOrderPrivate(node->right);
}

TreeNode* BinaryTree::FindMin(TreeNode* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}


// Destructor
BinaryTree::~BinaryTree() {
 
}
