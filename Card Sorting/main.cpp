

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
#include "bankcard.h"
#include "card.h"
#include "idcard.h"
using namespace std;


bool isBigger(Card* a, Card* b);


int main ()
{
    cout << "*********************"<< endl;
    cout << "*  Wallet Printer!  *" << endl;
    cout << "*********************"<< endl;
    
    cout << "Print Cards by selecting the tyep (0 when done): " << endl << endl;
    cout << "1. Basic Car" << endl;
    cout << "2. ID Card" << endl;
    cout << "3. Bank Card" << endl << endl;
   
    vector <Card*> vect;

    int card_type;
    Card* pCard;
  
    
    do
    {
    cout << "Card Type: ";
   
    cin >> card_type;
    
    cout <<endl;

    
    if (card_type == 1)
    {
        pCard = new Card;
        
    }
    
    else if (card_type == 2)
    {
        pCard = new IDCard;
      
    }
    
    else if (card_type == 3)
    {
        pCard = new BankCard;
       
    }
        
    else if (card_type == 0) break;
        
    else
    {
        cout << "Invalid input, try again." << endl << endl;
        continue;
    }
    
    pCard->read();
       
    vect.push_back(pCard);
    }
        while (card_type != 0);
    
    
    sort (vect.begin(), vect.end(), isBigger);

    for (int i = 0; i < vect.size(); i++)
    {
        vect[i]->print();
    }
    
}


bool isBigger(Card* a, Card* b)
{
    if (a->get_exp_date() == "0")
        return false;
   if (b->get_exp_date() == "0")
       return true;
    if (a->get_exp_date_year() < b->get_exp_date_year())
        return true;
   else if (a->get_exp_date_year() > b->get_exp_date_year())
        return false;
    else if (a->get_exp_date_year() == b->get_exp_date_year())
    {
        if (a->get_exp_date_month() < b->get_exp_date_month())
            return true;
        else if (a->get_exp_date_month() > b->get_exp_date_month())
            return false;
        else if (a->get_exp_date_month() == b->get_exp_date_month())
        {
            if (a->get_exp_date_day() < b->get_exp_date_day())
                return true;
            else if (a->get_exp_date_day() > b->get_exp_date_day())
                return false;
        }
    }
    return false;
}
