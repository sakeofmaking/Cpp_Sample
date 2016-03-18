/******************************************************************
 * Title: Tic-Tac-Toe
 *
 * Prompt: Write a small tic-tac-toe program that allows two players 
 * to play tic-tac-toe competitively. Your program should check to see 
 * if either player has won, or if the board is filled completely (with 
 * the game ending in a tie). Bonus: can you make your program detect 
 * if the game cannot be won by either side before the entire grid is filled?
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 147). Cprogramming.com. Kindle Edition.
 *
 ******************************************************************/

#include <iostream>

using namespace std;

void print_board(char spot[]){
    cout << " " << spot[0] << " | " << spot[1] << " | " << spot[2] << " \n";
    cout << "-----------\n";
    cout << " " << spot[3] << " | " << spot[4] << " | " << spot[5] << " \n";
    cout << "-----------\n";
    cout << " " << spot[6] << " | " << spot[7] << " | " << spot[8] << " \n";
}

void winner(char spot[]){
    // Check for winner / tie
    if(((spot[0] == spot[1]) && (spot[1] == spot[2])) ||
       ((spot[3] == spot[4]) && (spot[4] == spot[5])) ||
       ((spot[6] == spot[7]) && (spot[7] == spot[8])) ||
       ((spot[0] == spot[3]) && (spot[3] == spot[6])) ||
       ((spot[1] == spot[4]) && (spot[4] == spot[7])) ||
       ((spot[2] == spot[5]) && (spot[5] == spot[8])) ||
       ((spot[0] == spot[4]) && (spot[4] == spot[8])) ||
       ((spot[2] == spot[4]) && (spot[4] == spot[6]))){
        cout << "WINNER!\n";
    } else if((spot[0] != '1') && (spot[1] != '2') && (spot[2] != '3') &&
              (spot[3] != '4') && (spot[4] != '5') && (spot[5] != '6') &&
              (spot[6] != '7') && (spot[7] != '8') && (spot[8] != '9')){
        cout << "TIE!\n";
    }
    
}

int main(){
    char board_position;
    char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    bool turn = 0;
    
    print_board(board);
    
    while(board_position != 'q'){
        turn = !turn;
        
        if(turn){
            cout << "Player X turn: ";
            cin >> board_position;
            if(board_position == 'q'){
                break;
            }
            board[board_position - 49] = 'X';
        } else{
            cout << "Player O turn: ";
            cin >> board_position;
            if(board_position == 'q'){
                break;
            }
            board[board_position - 49] = 'O';
        }
        print_board(board);
        
        // Function to check for winner
        winner(board);
    }
    
}









