

 /*
         PIC 10B 2B, Homework 2
         Purpose: Cards
         Author: Jacob Mejia
         Date: 01/07/2020
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "card.h"
using namespace std;

#ifndef bankcard_h
#define bankcard_h

class BankCard: public Card
{
public:
 
void read();
void print();

};

#endif /* bankcard_h */
