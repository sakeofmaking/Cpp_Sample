/******************************************************************
 * Title: Poker
 *
 * Purpose: Write a program to play poker! You can provide 5 cards to 
 * the player, let that player choose new cards, and then determine how 
 * good the hand is. Think about whether this is easy to do. What problems 
 * might you have in terms of keeping track of cards that have been drawn 
 * already? Was this easier or harder than the slot machine?
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 120). Cprogramming.com. Kindle Edition.
 *
 ******************************************************************/

#include <iostream>
#include <ctime> // For random number seed
#include <cstdlib> // For random number generation

using namespace std;

enum Suit{ CLUBS, SPADES, DIMONDS, HEARTS };
char card_num[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'} ;

// Generate a random number within a given range
int randRange(int low, int high){
    return rand() % (high - low + 1) + low;
}

int main(){
    int chosen_suit = 0;
    int chosen_num = 0;
    int i, j, k;
    
    // Store the cards in an array
    string deck_of_card[4][13];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            deck_of_card[i][j] = card_num[j];
            switch(i){
                case CLUBS:
                    deck_of_card[i][j] += " of clubs";
                    break;
                case SPADES:
                    deck_of_card[i][j] += " of spades";
                    break;
                case DIMONDS:
                    deck_of_card[i][j] += " of dimonds";
                    break;
                case HEARTS:
                    deck_of_card[i][j] += " of hearts";
                    break;
                default:;
                    // Should never happen
            }
        }
    }
    
    srand((int)time(NULL));
    
    // Display hand
    for(k = 0; k < 5; k++){
        chosen_suit = randRange(0, 3);
        chosen_num = randRange(0, 12);
        
        // Prevent duplicates
        if(deck_of_card[chosen_suit][chosen_num] != "pie"){
            cout << deck_of_card[chosen_suit][chosen_num] << "\n";
            deck_of_card[chosen_suit][chosen_num] = "pie";
        } else{
            k--;
        }
    }
    
}




