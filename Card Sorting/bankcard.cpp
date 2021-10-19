
 /*
         PIC 10B 2B, Homework 2
         Purpose: Cards
         Author: Jacob Mejia
         Date: 01/07/2020
*/

#include "bankcard.h"



void BankCard::read()
{
    cin.ignore();
    
    cout << "Institution name: ";
    string i_name;
    getline(cin, i_name);
    inst_name = i_name;
    
    cout << "Card holder name: ";
    string name;
    getline(cin,name);
    person = name;
   
    cout << "Expiration date mmddyyyy (0 if none): ";
    string exp_date;
    cin >> exp_date;
    expiration_date = exp_date;
   
    cout << "Account number: ";
    string acc_number;
    cin >> acc_number;
    account_number = acc_number;
    
    cout << "Card Security Code: ";
    string sc;
    cin >> sc;
    security_code = sc;
    cout << endl;
}

void BankCard::print()
{
    cout << " -----------------------------------------" << endl;
    cout << "| ";
    cout << endl;
    cout<< "| " << inst_name << endl;
    cout << "| " << "    name : " << person << endl;
    cout<< "| " << "     exp : ";
    if (expiration_date == "0")
        cout << "N/A." << endl<< "| " << endl;
   else cout << expiration_date.substr(0,2) << "/" << expiration_date.substr(2,2) << "/" << expiration_date.substr(4,4) << endl << "| " << endl;
    cout<< "| " <<"Account# : " << account_number << endl;
    cout << "| "  << "     CSC : " <<security_code << endl;
    cout << "| " << endl;
}
