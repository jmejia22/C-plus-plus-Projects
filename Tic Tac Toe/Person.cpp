

#include "Person.h"
using namespace std;

Person::Person(string n, int s): name(n), score(s)
{
    
}

string Person::getName() const
{
    return name;
}

int Person::getScore()const
{
    return score;
}

void Person::setScore(int new_score)
{
    score = new_score;
}

void Person::setName(string n)
{
    name = n;
}

