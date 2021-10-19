//
//  TreeIterator.cpp
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/16/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#include <stdio.h>
#include "TreeIterator.h"

bool TreeIterator:: operator==(TreeIterator b) const
{
    return position == b.position;
}

bool TreeIterator:: operator!=(TreeIterator b) const
{
    return position != b.position;
}

// TreeIterator TreeIterator:: operator++(int unused)
//{
//
//}

int TreeIterator::operator*() const
{
    assert(position != nullptr);
    return position->data;
        
    
}
