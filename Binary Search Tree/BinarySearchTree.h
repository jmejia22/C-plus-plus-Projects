//
//  BinarySearchTree.h
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/14/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h
#include "TreeNode.h"
#include "TreeIterator.h"
class BinarySearchTree
{
public:
    
BinarySearchTree();
    
void insert(int data);
    
void erase(int data);
    
int count(int data) const;
    
void print() const;
    
TreeIterator begin();
TreeIterator end();
private:

TreeNode* root;
    
};

#endif /* BinarySearchTree_h */
