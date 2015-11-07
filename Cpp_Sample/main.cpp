/******************************************************************
 * Title: Tic Tac Toe
 *
 * Purpose: Write a two-player tic-tac-toe game, allowing two humans
 * to play against each other
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
    }
    
}