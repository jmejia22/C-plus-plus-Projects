
#ifndef Game_h
#define Game_h

#include <iostream>
#include "Person.h"
using namespace std;

class Game
{
public:
    Game();
    Game(Person* a1, Person* a2);
    void Board (string& n1, string& n2);
    void Input(Person* b1, Person* b2);
    void TogglePlayer();
    char Win();
    void clearMatrix();
    
    
private:
    Person* pers1;
    Person* pers2;
    char square1[9]; //= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player;
};


#endif /* Game_h */
