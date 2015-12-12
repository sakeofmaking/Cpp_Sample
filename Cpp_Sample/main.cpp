/******************************************************************
 * Title: Pick a Number
 *
 * Purpose: Write a program that picks a number between 1 and 100, 
 * and then lets the user guess what the number is. The program should 
 * tell the user if their guess is too high, too low, or just right.
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

int main(){
    int chosen_num = 0;
    int guess = 0;
    
    srand((int)time(NULL));
    
    chosen_num = randRange(1, 100);
    
    while(guess != chosen_num){
        cout << "Enter guess: ";
        cin >> guess;
        
        if(guess > chosen_num){
            cout << guess << " is too high.\n";
        } else if(guess < chosen_num){
            cout << guess << " is too low.\n";
        }
    }
    
    cout << chosen_num << " is correct!";
}