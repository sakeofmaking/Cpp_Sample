/******************************************************************
 * Title: Slot Machine
 *
 * Purpose: Make a “slot machine” game that randomly displays the results 
 * of a slot machine to a player—have three (or more) possible values for 
 * each wheel of the slot machine. Don’t worry about displaying the text 
 * “spinning” by. Just choose the results and display them and print out 
 * the winnings (choose your own winning combination).
 *
 * Warning: Theoretically, the loop can continue forever.
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 120). Cprogramming.com. Kindle Edition.
 *
 ******************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum SlotChar{
    CHERRY,
    LEMON,
    BAR
};

int randRange(int low, int high){
    return rand() % (high - low + 1) + low;
}


int main(){
    int chosen_char;
    int count;
    
    srand((int)time(NULL));
    
    // Display the results
    do{
        count = 0;
        
        for(int i = 0; i < 3; i++){
            chosen_char = randRange(CHERRY, BAR);

            switch(chosen_char){
                case CHERRY:
                    cout << "[CHERRY]";
                    count++;
                    break;
                case LEMON:
                    cout << "[LEMON]";
                    break;
                case BAR:
                    cout << "[BAR]";
                    break;
                default:;
                    // Should never happen
            }
        }
        cout << "\n";
    
        // Check for winning combination
        if(count == 3){
            cout << "Winner!";
        }
    } while(count != 3);
    
}




