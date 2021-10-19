//
//  Iterator.h
//  Linked List
//
//  Created by Jacob Mejia on 3/13/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef Iterator_h
#define Iterator_h
#include "Iterator.h"
#include "List.h"
#include "Node.h"

class Iterator{
friend class List;
public:

Iterator();
Iterator& operator++(int);
    
int get() const;
void next();
void previous();
    
bool equals(Iterator b) const;
    
    Node* get_node() const;
    
int operator*() const;
bool operator!=(const Iterator& b) const;
bool operator==(const Iterator& b) const;
  Node* position;
private:

List* container;
friend class List;
};
#endif /* Iterator_h */
