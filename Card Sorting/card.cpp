

 /*
         PIC 10B 2B, Homework 2
         Purpose: Cards
         Author: Jacob Mejia
         Date: 01/07/2020
*/


#include "card.h"
Card::Card(): inst_name(" "), person(" "), expiration_date(" ")
{
    
}

Card::Card(string i_name, string p_name, string e_date): inst_name(i_name), person(p_name), expiration_date(e_date)
{
    
}

  Card::Card(string i_name, string name, string ex_date, string acc_num, string sc):inst_name(i_name), person(name), expiration_date(ex_date), account_number(acc_num), security_code(sc)
{
    
}


   string Card:: get_name_ints() const
{
    return inst_name;
}


   string Card:: get_name_person() const
{
    return person;
}


   string Card:: get_exp_date() const
{
    return expiration_date;

}

 void Card::read()
{
    
    cin.ignore();
    
    cout << "Institution Name : ";
     string int_name;
    getline(cin, int_name);
    inst_name = int_name;
   
    
    
     cout << "Cardholder Name: ";
     string name;
    getline(cin,name);
    person = name;

     cout << "Expiration Date (0 if none) : ";
     string exp_date;

     cin >> exp_date;
    if (exp_date == "0")
    {
        month = "0";
        day = "0";
        year = "0";
        
    }
    else
    {  month = exp_date.substr(0,2);
    day = exp_date.substr(2,2);
    year = exp_date.substr(4,4);
    }
    expiration_date = exp_date;
    cout << endl;
}


void Card::print()
{
    cout << " -----------------------------------------" << endl;
    cout << "| " << endl;
    cout<< "| " << inst_name << endl;
    cout << "| "<< "    name : " << person << endl;
    cout << "| " << "     exp : ";
    if (expiration_date == "0")
        cout<< "N/A" << endl;
    else cout << expiration_date.substr(0,2) << "/" << expiration_date.substr(2,2) << "/" << expiration_date.substr(4,4) << endl << "| " << endl;
    cout << "| ";
    cout << endl;

}


string Card::get_account_number() const
{
    return account_number;
}

string Card::get_security_code() const
{
    return security_code;
}

 int Card:: get_exp_date_year() const
{
    return stoi(get_exp_date().substr(4,4));
}

int Card:: get_exp_date_month() const
{
    return stoi(get_exp_date().substr(0,2));
}

int Card:: get_exp_date_day() const
{
    return stoi(get_exp_date().substr(2,2));
}






