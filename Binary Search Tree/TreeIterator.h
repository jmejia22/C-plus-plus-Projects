//
//  TreeIterator.h
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/16/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef TreeIterator_h
#define TreeIterator_h
#include <iostream>
#include "TreeNode.h"
using namespace std;

class TreeIterator
{
public:
    bool operator==(TreeIterator b) const;
   bool operator!=(TreeIterator b) const;
    TreeIterator operator++(int unused);
    int operator*() const;
  
  
    TreeNode* position;
private:
    //TreeNode* position;
};


#endif /* TreeIterator_h */
