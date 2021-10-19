//
//  List.cpp
//  Linked List
//
//  Created by Jacob Mejia on 3/13/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//

#include "Iterator.h"
#include "List.h"
#include "Node.h"

List::List()
{
first = NULL;
last = NULL;
}

void List::push_front(int data)
{
Node* new_node = new Node(data);
if (last == NULL) // List is empty
{
first = new_node;
last = new_node;
}
else
{
new_node->previous = last;
last->next = new_node;
last = new_node;
}
    
    // PUSH_FRONT FUNCTION
    
//    Node* new_node = new Node(data);
//    if (last == NULL) // List is empty
//    {
//    first = new_node;
//    last = new_node;
//    }
//    else
//    {
//    new_node->next = first;
//    first->previous = new_node;
//    first = new_node;
//    }
}

void List::insert(Iterator iter, int s)
{
if (iter.position == NULL)
{
push_front(s);
return;
}
    
Node* after = iter.position;
Node* before = after->previous;
Node* new_node = new Node(s);
new_node->previous = before;
new_node->next = after;
after->previous = new_node;
if (before == NULL) // Insert at beginning
first = new_node;
else
before->next = new_node;
}


Iterator List::erase(Iterator iter)
{
assert(iter.position != NULL);
Node* remove = iter.position;
Node* before = remove->previous;
Node* after = remove->next;
    
if (remove == first)
first = after;
else
before->next = after;
    
if (remove == last)
last = before;
    
else
after->previous = before;
delete remove;
Iterator r;
r.position = after;
r.container = this;
return r;
}

Iterator List::begin(){
Iterator iter;
iter.position = first;
iter.container = this;
return iter;
}

Iterator List::end(){
Iterator iter;
iter.position = NULL;
iter.container = this;
return iter;

}

void List::sort(Node* ex)
{
    Node* temp = ex;

    while (temp) {
        Node* min = temp;
        Node* trial = temp->next;

       
        while (trial)
        {
            if (min->data > trial->data)
                min = trial;

            trial = trial->next;
        }

       
        int x = temp->data;
        temp->data = min->data;
        min->data = x;
        temp = temp->next;
    }
}

        void List::reverse()
        {
            Node* p = first;
            while (p!=nullptr)
            {
                Node* p_next = p->next;
                Node* tmp = p->next;
                p->next = p->previous;
                p->previous = tmp;

                p = p->previous;
            }
            Node* tmp = first;
            first = last;
            last = tmp;
            
        }

void List::merge(List b)
 {
     Iterator pos = begin(); // begin iterator of a

     // this for loop will alternate the list and input them
     for (Iterator i = b.begin(); i != b.end(); i++)
     {
         if (pos != end());
         pos++;
         insert(pos,*i);
     }
     
 }





// Merging two sorted lists.
Node* MergeSortedList(Node* lst1, Node* lst2)
{
    Node* result = NULL;

    // Base Cases
    if (lst1 == NULL)
        return (lst2);
    else if (lst2 == NULL)
        return (lst1);

    // recursively merging two lists
    if (lst1->data <= lst2->data) {
        result = lst1;
        result->next = MergeSortedList(lst1->next, lst2);
    }
    else {
        result = lst2;
        result->next = MergeSortedList(lst1, lst2->next);
    }
    return result;
}

// Splitting two into halves.
// If the size of the list is odd, then extra element goes in the first list.
void SplitList(Node* source, Node** front, Node** back)
{
    Node* ptr1;
    Node* ptr2;
    ptr2 = source;
    ptr1 = source->next;

    // ptr1 is incrmented twice and ptr2 is icremented once.
    while (ptr1 != NULL) {
        ptr1 = ptr1->next;
        if (ptr1 != NULL) {
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
    }

    // ptr2 is at the midpoint.
    *front = source;
    *back = ptr2->next;
    ptr2->next = NULL;
}


// Merge Sort
void MergeSort(Node** thead)
{
    Node* head = *thead;
    Node* ptr1;
    Node* ptr2;

  // Base Case
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }

    // Splitting list
    SplitList(head, &ptr1, &ptr2);

    // Recursively sorting two lists.
    MergeSort(&ptr1);
    MergeSort(&ptr2);

    // Sorted List.
    *thead = MergeSortedList(ptr1, ptr2);
}


void List::reverse_order (Node* start, Node* end)
{
    if (start == NULL)
        return;
    else
    start = first;
    end = last;
    
    Node* temp;
    
    temp = start;
    start = end;
    end = temp;
    
    reverse_order(start->previous, end->next);
}


Node* List::first_n(Iterator i)
{
    Iterator temp = i.container->begin();
    return temp.get_node();
}

Node* List::last_n(Iterator i)
{
    Iterator temp = i.container->real_end();
    return temp.get_node();
}


  Iterator List:: real_end()
{
    Iterator iter;
    iter.position = last->previous;
    iter.container = this;
    return iter;

}
