//
//  Person.h
//  Tic Tac Toe
//
//  Created by Jacob Mejia on 1/15/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//
// Person class must include a name and a running score
#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person (string n, int s);
   string getName() const;
    int getScore() const;
    void setName(string n);
    void setScore(int new_score);
    
private:
   string name;
    int score;
};

#endif /* Person_h */
