/// @file swap.cpp
/// @author Adam Koehler
/// @date November 20, 2013
/// @brief Example utilized in class on Noverember 20, 2013.
///
///         Example covered write a proper swap function, why we utilize
///         reference parameters and notes that the variable names do not need
///         to be the same.

#include <iostream>
using namespace std;

// function to swap two values ...
void swap(int& a, int& b) // a, b are LOCAL VARIABLES!
{
    int temp = a;
    a = b;
    b = temp;
} 
// The SCOPE of a local variable is just the function in which it is declared
// More precisely:
// The SCOPE of any variable is the region of code starting from 
// the variables declaration going to the end of the code block ( '}' )
// in which it is declared.

int main()
{
    int large = 5, small = 35;
    // large: 5; small: 35
    
    if (small > large)
    {
        swap(small, large);
    }
    // large: 35; small: 5
    
    
    
    
    cout << "Before swaps:\t";
    cout << "x: " << x << "\t" << "q: " << q << endl;
    swap(x, q);
    
    cout << "After 1 swap:\t";
    cout << "x: " << x << "\t" << "q: " << q << endl;
    swap(q, x);
    // Good Question: Would anything change if we invoked swap(x, q) instead?
    // Answer: If swap is implemented properly all it does is swap the numbers
    //         therefore no logical change should exist and once the function
    //         completely executes the values of the variables will be the same.
    
    cout << "After 2 swaps:\t";
    cout << "x: " << x << "\t" << "q: " << q << endl;
    
    return 0;
}

















// @brief swaps the values of two integers which are provided by reference
// @param x reference to the first integer variable to swap values with
// @param y reference to the second integer variable to swap values with
void swap(int &x, int &y)
{
    // Question:    What happens if we forget to utilize a placehold integer
    //              to store x's value?
    int t = x;
    x = y;
    
    // Question:    What happens if we assign x's value into y, instead of the
    //              value of the placeholder integer.
    y = t;
}