#include <iostream>
using namespace std;

int main ()
{
    // variables
    char player1;
    char player2;

    // inputs
    cout << "Enter " << '[' << "R" << ']' << "ock, " << '[' << "P" << ']' << "aper, or " << '[' << "S" << ']' << "cissor" << endl;
    cout << "Player 1: ";
    cin >> player1;
    cout << "Enter " << '[' << "R" << ']' << "ock, " << '[' << "P" << ']' << "aper, or " << '[' << "S" << ']' << "cissor" << endl;
    cout << "Player 2: ";
    cin >> player2;

    // outputs
    // player 1 plays rock
    if ( player1 == 'R' || player1 == 'r' )
    {
        if ( player2 == 'R' || player2 == 'r' )
        {
            cout << "Nobody wins." << endl;
        }
        else if ( player2 == 'P' || player2 == 'p' )
        {
            cout << "Paper covers rock." << endl;
            cout << "Player 2 WINS!" << endl;
        }
        else
        {
            cout << "Rock smashes scissors." << endl;
            cout << "Player 1 WINS!" << endl;
        }
    }
    // player1 plays paper
    else if ( player1 == 'P' || player1 == 'p' )
    {
        if ( player2 == 'P' || player2 == 'p' )
        {
            cout << "Nobody wins." << endl;
        }
        else if ( player2 == 'S' || player2 == 's' )
        {
            cout << "Scissors cuts paper." << endl;
            cout << "Player 2 WINS!" << endl;
        }
        else
        {
            cout << "Paper covers rock." << endl;
            cout << "Player 1 WINS!" << endl;
        }
    }
    // player1 plays scissors
    else
    {
        if ( player2 == 'S' || player2 == 's' )
        {
            cout << "Nobody wins." << endl;
        }
        else if ( player2 == 'R' || player2 == 'r' )
        {
            cout << "Rock smashes scissors." << endl;
            cout << "Player 2 WINS!" << endl;
        }
        else
        {
            cout << "Scissors cuts paper." << endl;
            cout << "Player 1 WINS!" << endl;
        }
    }

    return 0;
}
