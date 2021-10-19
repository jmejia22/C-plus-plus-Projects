 /*
         PIC 10B 2B, Homework 2
         Purpose: Cards
         Author: Jacob Mejia
         Date: 01/07/2020
*/

#include "idcard.h"

void IDCard::read()
{
    cin.ignore();
        cout << "Institution Name : ";
         string int_name;
    getline(cin,int_name);
    inst_name = int_name;
   
         cout << "Cardholder Name: ";
         string name;
    getline(cin,name);
    person = name;
 
         cout << "Expiration date mmddyyyy (0 if none) : ";
         string exp_date;
         cin >> exp_date;
        expiration_date = exp_date;
    
    cout << "ID number : ";
    string id;
    cin >> id;
    id_number = id;
    
    cout << "DOB mmddyy (0 if not listed) : ";
    string dob;
    cin >> dob;
    date_of_birth = dob;
    cout << endl;
}

void IDCard::print()
{

     cout << " -----------------------------------------" << endl;
    cout << "| ";
    cout << endl;
    cout<< "| " << inst_name << endl;
    cout<< "| " << "    name : " <<person << endl;
    cout<< "| " << "     exp : ";
    if (expiration_date == "0")
        cout<< "N/A." << endl <<"| " << endl;
    else cout << expiration_date.substr(0,2) << "/" << expiration_date.substr(2,2) << "/" << expiration_date.substr(4,4) << endl << "| " << endl;
    cout << "| " << "     ID# : " << id_number << endl;
    cout<< "| " << "     DOB : " ;
    if (date_of_birth == "0")
        cout << "N/A." << endl;
    else cout << date_of_birth.substr(0,2) << "/" << date_of_birth.substr(2,2) << "/" << date_of_birth.substr(4,4) << endl;
    cout << "| " << endl;

}
