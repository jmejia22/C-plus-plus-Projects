
#include "Game.h"
#include "Person.h"
using namespace std;

Game::Game():player('X')
{
    for (int i = 0; i < 9; i++)
    {
        square1[i] = ' ';
    }
}


 Game::Game (Person* a1, Person* a2): pers1(a1), pers2(a2), player ('X')
{

    for (int i = 0; i < 9; i++)
    {
        square1[i] = ' ';
    }
    
}

void Game::Board(string& n1, string& n2)
{
        cout << "\n\n\tTic Tac Toe\n\n";

        cout << n1 <<" (X)" << " - " << n2 <<" (O)" << endl << endl;
        cout << endl;
 cout << "      1     2     3" << endl;
        cout << "         |     |     " << endl;
  cout << " 1";
 cout << "    " << square1[0] << "  |  " << square1[1] << "  |  " << square1[2] << endl;
 //cout << "  1";
        cout << "    _____|_____|_____" << endl;
        cout << "         |     |     " << endl;

 cout << " 2";
        cout << "    " << square1[3] << "  |  " << square1[4] << "  |  " << square1[5] << endl;

        cout << "    _____|_____|_____" << endl;
        cout << "         |     |     " << endl;
 
 cout << " 3";

        cout << "    " << square1[6] << "  |  " << square1[7] << "  |  " << square1[8] << endl;

        cout << "         |     |     " << endl << endl;
}


void Game::Input(Person* b1, Person* b2)
{
    string a;
if (player == 'X')
    cout << b1->getName() << " (" << player << ")" << " Mark Location: ";
    
else cout << b2->getName() << " (" << player << ")" << " Mark Location: ";
    getline(cin,a);

    
    if (a == "1 1")
    {
        if (square1[0] == ' ')
            square1[0] = player;
            
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
   else if (a == "1 2")
    {
        if (square1[1] == ' ')
            square1[1] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "1 3")
    {
        if (square1[2] == ' ')
            square1[2] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "2 1")
    {
        if (square1[3] == ' ')
            square1[3] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "2 2")
    {
        if (square1[4] == ' ')
            square1[4] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "2 3")
    {
        if (square1[5] == ' ')
            square1[5] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "3 1")
    {
        if (square1[6] == ' ')
            square1[6] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "3 2")
    {
        if (square1[7] == ' ')
            square1[7] = player;
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else if (a == "3 3")
    {
        if (square1[8] == ' ')
            square1[8] = player;
        
        else
        {
            cout << "Space is already taken, try again." << endl << endl;
            Input(b1,b2);
        }
    }
    else
    {
        cout << "Not a valid input, try again!" << endl << endl;
        Input(b1,b2);
    }
}

void Game::TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}


char Game::Win()
{
    //first player checks each row to see if the player won
    if (square1[0] == 'X' && square1[1] == 'X' && square1[2] == 'X')
        return 'X';
    if (square1[3] == 'X' && square1[4] == 'X' && square1[5] == 'X')
        return 'X';
    if (square1[6] == 'X' && square1[7] == 'X' && square1[8] == 'X')
        return 'X';

    //first player checks each column to see if the player won
    if (square1[0] == 'X' && square1[3] == 'X' && square1[6] == 'X')
        return 'X';
    if (square1[1] == 'X' && square1[4] == 'X' && square1[7] == 'X')
        return 'X';
    if (square1[2] == 'X' && square1[5] == 'X' && square1[8] == 'X')
        return 'X';

    //first player checks each diagnoal to see if the player won
    if (square1[0] == 'X' && square1[4] == 'X' && square1[8] == 'X')
        return 'X';
    if (square1[2] == 'X' && square1[4] == 'X' && square1[6] == 'X')
        return 'X';
    
    //second player checks each row to see if they won
    if (square1[0] == 'O' && square1[1] == 'O' && square1[2] == 'O')
        return 'O';
    if (square1[3] == 'O' && square1[4] == 'O' && square1[5] == 'O')
        return 'O';
    if (square1[6] == 'O' && square1[7] == 'O' && square1[8] == 'O')
        return 'O';

    // second player checks each column to see if player 2 wins
    if (square1[0] == 'O' && square1[3] == 'O' && square1[6] == 'O')
        return 'O';
    if (square1[1] == 'O' && square1[4] == 'O' && square1[7] == 'O')
        return 'O';
    if (square1[2] == 'O' && square1[5] == 'O' && square1[8] == 'O')
        return 'O';

    // second player checks each diagonal to see if player 2 wins
    if (square1[0] == 'O' && square1[4] == 'O' && square1[8] == 'O')
        return 'O';
    if (square1[2] == 'O' && square1[4] == 'O' && square1[6] == 'O')
        return 'O';

    return '/';
}

void Game::clearMatrix()
{
        for (int i = 0; i<9; i++)
            square1[i] = ' ';
}

