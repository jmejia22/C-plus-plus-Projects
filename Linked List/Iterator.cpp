//
//  Iterator.cpp
//  Linked List
//
//  Created by Jacob Mejia on 3/13/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#include "Iterator.h"
#include "List.h"
#include "Node.h"

Iterator::Iterator(){
position = NULL;
container = NULL;
}

Iterator& Iterator::operator++(int)
{
assert(position != nullptr);
position = position->next;
return *this;
}

int Iterator::get() const{
assert(position != NULL);
return position->data;
}


void Iterator::next(){
assert(position != NULL);
position = position->next;
}

void Iterator::previous()
{
assert(position != container->first);
if (position == NULL)
position = container->last;
else
position = position->previous;
}

bool Iterator::equals(Iterator b) const
{
return position == b.position;
}

int Iterator::operator*() const

{assert(position != nullptr);
return position->data;}

bool Iterator::operator!=(const Iterator& b)
const
{
    return position != b.position;
    
}

bool Iterator::operator==(const Iterator& b)
const
{
    return position == b.position;
    
}

Node* Iterator::get_node() const
{
    return position;
}
