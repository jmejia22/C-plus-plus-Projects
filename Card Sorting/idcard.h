
 /*
         PIC 10B 2B, Homework 2
         Purpose: Cards
         Author: Jacob Mejia
         Date: 01/07/2020
*/

#include <iostream>
#include <string>
#include <algorithm>
#include "card.h"
using namespace std;

#ifndef idcard_h
#define idcard_h

class IDCard: public Card
{
public:
    void read();
    void print();
};


#endif /* idcard_h */
