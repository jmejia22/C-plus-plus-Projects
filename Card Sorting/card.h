

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
using namespace std;

#ifndef card_h
#define card_h

class Card
{
public:
    Card();
    Card(string i_name, string p_name, string e_date);
    Card(string i_name, string name, string ex_date, string acc_num, string sc);

    string get_name_ints() const;
    string get_name_person() const;
    string get_exp_date() const;
    string get_account_number() const;
    string get_security_code() const;

    virtual void read();
    virtual void print();
    
    int get_exp_date_year() const;
    int get_exp_date_month() const;
    int get_exp_date_day() const;
    bool isBigger(Card* a, Card* b);
    
    
protected:
    string inst_name;
    string person;
    string expiration_date;
    string account_number;
    string security_code;
    string id_number;
    string date_of_birth;
    string month;
    string day;
    string year;
};




#endif /* card_h */
