
  /*
         PIC 10B 2B, Homework 5
         Purpose: Linked List
         Author: Jacob Mejia
         Date: 03/13/2020
*/

#include <iostream>
#include <string>
#include <vector>
#include "Iterator.h"
#include "List.h"
#include "Node.h"

using namespace std;
int main()
{
    cout << "Please input a set of nonnegative numbers for a List" << endl << "(Enter -1 when you are finished): ";
    
    int input=0;
    List num;
    while (input != -1)
    {
        cin >> input;
        if (input != -1)
        num.push_front(input);
        else break;
    }
    
   
    
    Iterator pos;
    
    cout << "Your list is" << endl;
    cout << "(";
       for (pos = num.begin(); !pos.equals(num.end()); pos.next())
       {
         cout << pos.get() << ",";
        
       }
    cout << ")" << endl << endl;
    
     int index=0;
    int value=0;
    int test = 0;
   while (index != -1)
   {
    cout << "Select an index for insertion (enter -1 when finished): ";
    cin >> index;
       if (index != -1)
           test = index;
       else break;
    cout << "Select a value for insertion: ";
    cin >> value;
   }
    
    cout << endl;
    
    Iterator p = num.begin();
    
    int dummy = 0;
    while (dummy !=test)
    {
        p.next();
        dummy++;
    }
    num.insert(p, value);
    
    cout << "The augmented list is: " << endl;
    cout << "( ";
    for (p = num.begin(); !p.equals(num.end()); p.next())
         {
            cout << p.get() << ",";
         }
    cout << ")" << endl << endl;
    
    p = num.begin();
    
//    Node* first = p.position;
//    num.sort(first);
//    num.MergeSort(&prac);
        cout << "When we sort the previous list we obtain" << endl;
    cout << "(";
    for (p = num.begin(); !p.equals(num.end()); p.next())
            {
                cout << p.get() << ",";
            }
    cout << ")";
    
    cout << endl << endl;
    
    
  Node* s =  num.first_n(num.begin());
    Node* e = num.last_n(num.end());
    
    cout << s->data << endl;
    cout << e->data << endl;
    
    num.reverse_order(s, e);


    cout << "And this sorted list in reverse order is " << endl;
//    num.reverse();
    cout << "(";
    for (p = num.begin(); !p.equals(num.end()); p.next())
            {
                cout << p.get() << ",";
            }
    cout << ")";

    cout << endl << endl;
//
//    List b;
//    b.push_front(2);
//    b.push_front(3);
//    b.push_front(5);
//    b.push_front(7);
//    b.push_front(11);
//
//    num.merge(b);
//    cout << "If we merge this list with the list (2,3,5,7,11) we obtain" << endl;
//    cout << "(";
//    for (p = num.begin(); !p.equals(num.end()); p.next())
//    {
//        cout << p.get() << ",";
//    }
//    cout << ")";
//    cout << endl;
    
    
}
