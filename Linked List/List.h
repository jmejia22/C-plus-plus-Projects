//
//  List.h
//  Linked List
//
//  Created by Jacob Mejia on 3/13/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#ifndef List_h
#define List_h
#include "Iterator.h"
#include "List.h"
#include "Node.h"
#include <cassert>

class List{
friend class Iterator;
public:

List();

    Node* first_n(Iterator iter);
    Node* last_n(Iterator iter);
    
void push_front(int data);

void insert(Iterator iter, int s);
    void sort(Node* h);
    void reverse();
    void merge(List b);
    
    void merge_sort();

Iterator erase(Iterator iter);
Iterator begin();
Iterator end();

    Iterator real_end();
    
    Node* MergeSortedList(Node* lst1, Node* lst2);
    void SplitList(Node* source, Node** front, Node** back);
    void MergeSort(Node** thead);
    void reverse_order (Node* start, Node* end);
 
private:
Node* first;
Node* last;
friend class Iterator;
    
};
#endif /* List_h */
