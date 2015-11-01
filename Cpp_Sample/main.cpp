/******************************************************************
 * Title: Tic Tac Toe
 *
 * Purpose: Write a two-player tic-tac-toe game, allowing two humans
 * to play against each other; use enums when possible to represent the values of the board.
 *
 ******************************************************************/

#include <iostream>

using namespace std;

//Note TTTS_BLANK = 0, TTTS_O = 1, TTTS_X = 2
enum TitTacToeSquare {TTTS_BLANK, TTTS_O, TTTS_X};

int main(){
    int board_position = 0;
    
    cout << "Player 1 turn: ";
    cin >> board_position;
    
    if(board_position == TTTS_O){
        cout << TTTS_O << "\n";
    }
}