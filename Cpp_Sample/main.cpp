/******************************************************************
 * Title: Pick a Number Solution
 *
 * Purpose: Write a program that picks a number between 1 and 100, 
 * and then lets the user guess what the number is. The program should 
 * tell the user if their guess is too high, too low, or just right.
 * 
 * Write a program that solves the guessing game from problem 2. How many guesses does your program need?
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 120). Cprogramming.com. Kindle Edition.
 *
 ******************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int randRange(int low, int high){
    return rand() % ((high - low + 1) + low);
}

int middle(int low, int high){
    return (((high - low) / 2) + low);
}

int main(){
    int chosen_num = 0;
    int guess = 0;
    int low = 1;
    int high = 100;
    int count = 0;
    
    srand((int)time(NULL));
    
    chosen_num = randRange(1, 100);
    
    while(guess != chosen_num){
        guess = middle(low, high);
        count++;
        
        if(guess > chosen_num){
            high = guess - 1;
        } else if(guess < chosen_num){
            low = guess + 1;
        }
    }
    cout << chosen_num << " is correct!\n";
    cout << "Program guessed " << count << " times.\n";
}




