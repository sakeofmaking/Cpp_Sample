/******************************************************************
 * Title: English Text For Numbers
 *
 * Purpose: Implement the source code that turns numbers into English 
 * text for numbers between -999,999 and 999,999. (Hint: You might also 
 * be able to take advantage of the fact that the integer data type will 
 * truncate decimal points. Also, remember that your algorithm doesn’t 
 * have to work for all numbers—only numbers with six digits or less. )
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 120). Cprogramming.com. Kindle Edition.
 *
 ******************************************************************/

#include <iostream>

using namespace std;

int main(){
    int number = 0;
    int thousands_chunk = 0;
    int hundreds_chunk = 0;
    string under_twenty[19] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
                        "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string twenty_above[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    // Store input as number
    cout << "Enter number from -999999 to 999999: ";
    cin >> number;
    
    // If negative, display "negative" and convert to positive
    if(number < 0){
        cout << "negative ";
        number = -number;
    }
    
    // Break number into chunks of three digits
    thousands_chunk = number / 1000;
    hundreds_chunk = number - (thousands_chunk * 1000);

    // Compute text of thousands chunk
    if(thousands_chunk != 0){
        if((thousands_chunk / 100) != 0){
            cout << under_twenty[(thousands_chunk / 100) - 1] << " hundred ";
        }
        if((thousands_chunk - (thousands_chunk / 100 * 100) < 20) && (thousands_chunk - (thousands_chunk / 100 * 100) > 0)){
            cout << under_twenty[thousands_chunk - (thousands_chunk / 100 * 100) - 1];
        } else{
            cout << twenty_above[((thousands_chunk - (thousands_chunk / 100 * 100)) / 10) - 2];
            if(thousands_chunk - (thousands_chunk / 10 * 10) != 0){
                cout << ' ' << under_twenty[thousands_chunk - (thousands_chunk / 10 * 10) - 1];
            }
        }
        if(thousands_chunk != 0){
            cout << " thousand ";
        }
    }
    
    // Compute text of hundreds chunk
    if(hundreds_chunk != 0){
        if((hundreds_chunk / 100) != 0){
            cout << under_twenty[(hundreds_chunk / 100) - 1] << " hundred ";
        }
        if((hundreds_chunk - (hundreds_chunk / 100 * 100) < 20) && (hundreds_chunk - (hundreds_chunk / 100 * 100) > 0)){
            cout << under_twenty[hundreds_chunk - (hundreds_chunk / 100 * 100) - 1];
        } else{
            cout << twenty_above[((hundreds_chunk - (hundreds_chunk / 100 * 100)) / 10) - 2];
            if(hundreds_chunk - (hundreds_chunk / 10 * 10) != 0){
                cout << ' ' << under_twenty[hundreds_chunk - (hundreds_chunk / 10 * 10) - 1];
            }
        }
    }

}




