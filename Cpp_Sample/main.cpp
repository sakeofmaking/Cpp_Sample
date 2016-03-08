/******************************************************************
 * Title: Highest Lowest Average
 *
 * Prompt: Write a program that takes in 50 values and prints out the 
 * highest, the lowest, the average and then all 50 input values, one per line.
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 147). Cprogramming.com. Kindle Edition.
 *
 * Warning: For simplification, input array is set between 10 and 99
 ******************************************************************/

#include <iostream>
#include <ctime>        // For random seed
#include <cstdlib>

#define SIZE 50

using namespace std;

// Generates a random number between low and high
int randRange(int low, int high)
{
    return rand() % (high - low + 1) + low;
}

// Prints the highest, lowest, average, entire array
void printHLA(int randArray[SIZE])
{
    int i, j;
    int highest = 0;
    int lowest = 100;
    int sum = 0;
    
    // Print highest value
    for(i = 0; i < SIZE; i++)
    {
        if(randArray[i] > highest)
        {
            highest = randArray[i];
        }
        if(randArray[i] < lowest)
        {
            lowest = randArray[i];
        }
        sum += randArray[i];
    }
    cout << "Highest = " << highest << '\n';
    cout << "Lowest = " << lowest << '\n';
    cout << "Average = " << sum / SIZE << '\n';
    
    // Print entire array
    cout << "Entire array:\n";
    for(j = 0; j < SIZE; j++)
    {
        cout << randArray[j] << '\n';
    }
}


int main()
{
    // Seed srand
    srand((int)time(NULL));
    
    // Create array of 50 random int
    int randArray[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        randArray[i] = randRange(10, 99);
    }
    
    printHLA(randArray);
    
}










