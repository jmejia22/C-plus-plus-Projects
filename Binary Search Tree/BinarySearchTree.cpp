//
//  BinarySearchTree.cpp
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/14/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
root = NULL;
}


void BinarySearchTree::print() const
{
if (root != NULL)
root->print_nodes();
}


void BinarySearchTree::insert(int data)
{
TreeNode* new_node = new TreeNode;
new_node->data = data;
new_node->left = NULL;
new_node->right = NULL;
if (root == NULL) root = new_node;
else root->insert_node(new_node);
}


int BinarySearchTree::count(int data) const
{
if (root == NULL) return 0;
else if (root->find(data)) return 1;
else return 0;
}


void BinarySearchTree::erase(int data)
{
    
// Find node to be removed
TreeNode* to_be_removed = root;
TreeNode* parent = NULL;
bool found = false;
while (!found && to_be_removed != NULL)
{
if (to_be_removed->data < data)
{
parent = to_be_removed;
to_be_removed = to_be_removed->right;
}
else if (data < to_be_removed->data)
{
parent = to_be_removed;
to_be_removed = to_be_removed->left;
}
    
else found = true;
}
if (!found) return;
    
    // If one of the children is empty, use the other
    if (to_be_removed->left == NULL || to_be_removed->right == NULL)
    {
    TreeNode* new_child;
    if (to_be_removed->left == NULL)
    new_child = to_be_removed->right;
    else
    new_child = to_be_removed->left;
        
    if (parent == NULL) // Found in root
    root = new_child;
    else if (parent->left == to_be_removed)
    parent->left = new_child;
    else
    parent->right = new_child;
    return;
    }
    // Neither subtree is empty
    // Find smallest element of the right subtree
    // case when there are two children
    TreeNode* smallest_parent = to_be_removed;
    TreeNode* smallest = to_be_removed->right;
    while (smallest->left != NULL){
    smallest_parent = smallest;
    smallest = smallest->left;
    }
    // smallest contains smallest child in right subtree
    // Move contents, unlink child
    to_be_removed->data = smallest->data;
    if (smallest_parent == to_be_removed)
    smallest_parent->right = smallest->right;
    else
    smallest_parent->left = smallest->right;
    }

TreeIterator BinarySearchTree::begin()
{
    TreeIterator iter;
    iter.position = root;
    while (iter.position->left != NULL)
    {
        iter.position = iter.position->left;
        
    }
    return iter;
}

TreeIterator BinarySearchTree::end()
{
    TreeIterator iter;
    iter.position = NULL;
    return iter;
}
