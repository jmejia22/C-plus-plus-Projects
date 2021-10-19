//
//  Node.h
//  Linked List
//
//  Created by Jacob Mejia on 3/13/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef Node_h
#define Node_h

class List;
class Iterator;
class Node
{
friend class List;
friend class Iterator;
    
public:
Node(int s);
  int data;
  Node* previous;
  Node* next;
private:
//int data;
//Node* previous;
//Node* next;
friend class List;
friend class Iterator;
};
#endif /* Node_h */
