//
//  TreeNode.cpp
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/14/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#include "TreeNode.h"
#include "TreeIterator.h"

void TreeNode::insert_node(TreeNode* new_node)
{
if (new_node->data < data)
{
if (left == NULL) left = new_node;
else left->insert_node(new_node);
}
else if (data < new_node->data)
{
if (right == NULL) right = new_node;
else right->insert_node(new_node);
}
}


bool TreeNode::find(int value)const
{
if (value < data)
{
if (left == NULL) return false;
else return left->find(value);
}
else if (data < value)
{
if (right == NULL) return false;
else return right->find(value);
}
else
return true;
}


void TreeNode::print_nodes() const
{
if (left != NULL)
left->print_nodes();
cout << data << "\n";
if (right != NULL)
right->print_nodes();
}


    

