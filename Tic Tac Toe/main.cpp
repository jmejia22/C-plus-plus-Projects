#include <iostream>
#include <vector>
#include <string>
#include "Game.h"
#include "Person.h"
using namespace std;

int main()
{
    cout << "Number of games: ";
    int number_of_games;
    cin >> number_of_games;
    
    cin.ignore();
    
    cout << "Player 1 Name =  ";
    string name1;
    getline(cin, name1);     
    cout << "Player 2 Name =  ";
    string name2;
    getline(cin,name2);
    
   int score1 = 0;
    int score2 = 0;
    
     Person* a1 = new Person(name1,score1);
    Person* a2 = new Person(name2,score2);

    
    Game b;
    int n = 0;
   int counter = 0;
    
    do
    {
        b.Board(name1, name2);
        ++counter;
        while (1)
        {
            n++;
            b.Input(a1,a2);
        b.Board(name1, name2);
            if (b.Win() == 'X')
            {
               
                a1->setScore(++score1);
                cout << a1->getName() <<" wins this round!" << endl;
                cout << a1->getName() << ": " << a1->getScore()<<endl;
                cout << a2->getName() << ": " << a2->getScore()<<endl;
                b.clearMatrix();
                n = 0;
                   if (counter < number_of_games)
                         {
                             cout <<endl <<"Hit the enter key twice to move on to the next game: ";
                             cin.get();
                             cin.get();
                        }
                         else {};
                        break;
            }
            
            else if (b.Win() == 'O')
            {
                a2->setScore(++score2);
                cout <<  a2->getName() <<" wins this round!" << endl;
                cout << a1->getName() << ": " <<  a1->getScore()<<endl;
                cout <<  a2->getName() << ": " << a2->getScore()<<endl;
                b.clearMatrix();
                n = 0;
             if (counter < number_of_games)
             {
                 cout << endl <<"Hit the enter key twice to move on to the next game: ";
                 cin.get();
                 cin.get();
            }
             else {};
    
            break;
        }
            else if (b.Win() == '/' && n == 9)
            {
                cout << "It's a draw!" << endl;
                cout <<  a1->getName() << ": " << a1->getScore() << endl;
                cout <<  a2->getName() << ": " << a2->getScore() << endl;
                b.clearMatrix();
                n = 0;
                b.TogglePlayer();
             if (counter < number_of_games)
          {
              cout << endl <<"Hit the enter key twice to move on to the next game: ";
              cin.get();
              cin.get();
         }
          else {};
    
         break;
            }
            
       b.TogglePlayer();
       }
            
            
    } while (counter < number_of_games);


    if (a1->getScore() > a2->getScore())
        cout << "Congratulations " << a1->getName() << ". You won!" << endl;
    else if (a1->getScore() < a2->getScore())
        cout << "Congratulations " << a2->getName() << ". You won!" << endl;
    else cout << "It's a draw, play again! " << endl;
        
    delete a1;
    delete a2;
    return 0;
}
