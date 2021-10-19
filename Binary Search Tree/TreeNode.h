//
//  TreeNode.h
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/14/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef TreeNode_h
#define TreeNode_h

#include <iostream>
using namespace std;

class TreeNode{
public:
void insert_node(TreeNode* new_node);
void print_nodes() const;
bool find(int value) const;
        

    int data;
    
private:
//int data;
TreeNode* left;
TreeNode* right;
friend class BinarySearchTree;
};



#endif /* TreeNode_h */
