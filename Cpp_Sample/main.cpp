/******************************************************************
 * Title: Coin Flip
 *
 * Purpose: Simulate a coin flip
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
    bool coin_state = 0;
    int i = 0;
    
    srand((int)time(NULL));
    
    for(i = 0; i < 10; i++){
        coin_state = randRange(0, 1);
        
        if(coin_state == 0){
            cout << "Heads\n";
        } else{
            cout << "Tails\n";
        }
    }
}