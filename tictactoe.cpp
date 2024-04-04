//Annze Villena
//Info4190 Individual Exercise
//Tic Tac Toe game.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//fill in spaces to idenfiy what square
char square[10] = { 'o' , '1', '2', '3', '4', '5', '6', '7', '8', '9', };


//all the possible wins - 8 , 3 across 3 down, 2 diagonal
int checkWin()
{

    /* x|x|x
       -|-|-
       -|-|-
    */
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }

    /* -|-|-
       x|x|x
       -|-|-
    */
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }

    /* -|-|-
       -|-|-
       x|x|x
    */
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }

    /* x|-|-
       x|-|-
       x|-|-
    */
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }

    /* -|x|-
       -|x|-
       -|x|-
    */
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }

    /* -|-|x
       -|-|x
       -|-|x
    */
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }

    /* x|-|-
       -|x|-
       -|-|x
    */
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;

    }

    /* -|-|x
       -|x|-
       x|-|-
   */
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;

    }

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }

}


void grid()
{
    system("cls");
    std::cout << "INFO 4190: Integration Project I (S50)\n Individual Git Project\n Annze Villena\n";
    std::cout << "Tic-Tac-Toe\n";
    std::cout << "------------\n";

    cout << "Player 1(X)\n Player 2 (O)" << endl << endl;
    cout << endl;

    //display grid
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  " << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  " << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  " << endl;

    cout << "     |     |     " << endl;
}

//Simple number Randomizer
int randomNum() 
{
    return rand() % 9 + 1; // Generates random number between 1 and 9
}


int main()
{



    int player = 1, i, choice;

    char mark;

    do
    {
        grid();
        player = (player % 2) ? 1 : 2;


        
        if (player == 1) {

            //player 1 input
            cout << "Player " << player << ", enter the number you want to insert your mark in: ";
            cin >> choice;
        }
        else {
            // Player 2 - random number
            choice = randomNum();
        }



        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if (choice == 2 && square[2] == '2')
        {
            square[2] = mark;
        }
        else if (choice == 3 && square[3] == '3')
        {
            square[3] = mark;
        }
        else if (choice == 4 && square[4] == '4')
        {
            square[4] = mark;
        }
        else if (choice == 5 && square[5] == '5')
        {
            square[5] = mark;
        }
        else if (choice == 6 && square[6] == '6')
        {
            square[6] = mark;
        }
        else if (choice == 7 && square[7] == '7')
        {
            square[7] = mark;
        }
        else if (choice == 8 && square[8] == '8')
        {
            square[8] = mark;
        }
        else if (choice == 9 && square[9] == '9')
        {
            square[9] = mark;
        }
        else
        {
            cout << "INVALID MOVE";
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkWin();
        player++;

    } while (i == -1);
    grid();
    if (i == 1)
    {
        cout << "Congratulations! Player " << --player << "WINS!";
    }
    else
    {
        cout << "\a Game Draw!";
    }

    cin.ignore();
    cin.get();
    return 0;



}
