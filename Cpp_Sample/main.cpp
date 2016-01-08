/******************************************************************
 * Title: Sum of Prime Factor is Prime
 *
 * Purpose: Design a program that finds all numbers from 1 to 1000 
 * whose prime factors, when added together, sum up to a prime number 
 * (for example, 12 has prime factors of 2, 2, and 3, which sum to 7, 
 * which is prime). Implement the code for that algorithm.
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 120). Cprogramming.com. Kindle Edition.
 * Link: http://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
 *
 ******************************************************************/

#include <iostream>
#include <math.h>       // For determining the prime factor
#include <stdbool.h>    // For prime number function

using namespace std;

bool prime_number(int num){
    int i;
    int modular = 0;
    
    if(num <= 1){
        return(0);
    } else {
        for(i = 2; i < num; i++){
            modular = num % i;
            if(modular == 0){
                return(0);
            }
        }
        return(1);
    }
    
}

int main(){
    int i, j, k, m, n;
    int prime_factor[20];       // Stores the prime factors
    int index;                  // Indexes prime_factor
    int sum;                    // Stores the sum of prime factors
    
    for(i = 1; i <= 1000; i++){
        // Initialize prime_factor to 0
        for(k = 0; k < 20; k++){
            prime_factor[k] = 0;
        }
        index = 0;
        sum = 0;
        
        /******* Determine prime factors of i ******/
        n = i;
        // Store the number of 2s that divide n
        while(n%2 == 0){
            prime_factor[index] = 2;
            index++;
            n = n/2;
        }
        // n is now odd, so we skip one element
        for(j = 3; j <= sqrt(n); j = j+2){
            // While j divides n, print j and divide n
            while(n%j == 0){
                prime_factor[index] = j;
                index++;
                n = n/j;
            }
        }
        // This handles the case when n is a prime number greater than 2
        if(n > 2){
            prime_factor[index] = n;
        }
        
        /****** Sum the prime factors ******/
        for(m = 0; m < 20; m++){
            sum += prime_factor[m];
        }
        
        /****** Display i if sum is a prime number ******/
        if(prime_number(sum) == 1){
            cout << i << '\n';
        }
        
    }
   
}




