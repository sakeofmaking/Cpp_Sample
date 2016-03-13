/******************************************************************
 * Title: Detect Sort
 *
 * Prompt: Write a program that detects whether an array is sorted or not, and if it is not sorted, sort it.
 *
 * Source: Allain, Alex (2013-09-16). Jumping into C++ (p. 147). Cprogramming.com. Kindle Edition.
 *
 * Note: findSmallestRemainingElement, swap, sort, displayArray functions from "Jumping into C++"
 *
 ******************************************************************/

#include <cstdlib>
#include <iostream>

using namespace std;

int findSmallestRemainingElement(int array[], int size, int index);
void swap(int array[], int first_index, int second_index);

void sort(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int index = findSmallestRemainingElement(array, size, i);
        swap(array, i, index);
    }
}

int findSmallestRemainingElement(int array[], int size, int index)
{
    int index_of_smallest_value = index;
    for(int i = index + 1; i < size; i++)
    {
        if(array[i] < array[index_of_smallest_value])
        {
            index_of_smallest_value = i;
        }
    }
    return index_of_smallest_value;
}

void swap(int array[], int first_index, int second_index)
{
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
}

// Small helper function to display the before and after arrays
void displayArray(int array[], int size)
{
    cout << "{";
    for(int i = 0; i < size; i++)
    {
        if(i != 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << "}";
}

int detect_sorted(int array[], int size)
{
    int compare = 0;
    int i;
    
    for(i = 0; i < size; i++)
    {
        if(compare > array[i])
        {
            return(1);
        }
        else
        {
            compare = array[i];
        }
    }
    
    return(0);
}

int main()
{
    int size = 10;
    int array[] = {1, 2, 3, 5, 4, 6, 7, 8, 9, 10};
    
    // Print original array
    cout << "Original array: ";
    displayArray(array, size);
    cout << '\n';
    
    // Detect if array is sorted
    if(detect_sorted(array, size) == 1)
    {
        cout << "Original array is NOT sorted\n";
        
        sort(array, size);
        
        // Print sorted array
        cout << "Sorted array: ";
        displayArray(array, size);
        cout << '\n';
    }
    else
    {
        cout << "Original array is sorted\n";
    }
    
}










