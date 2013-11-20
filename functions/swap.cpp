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

int main()
{
    int x = 5, q = 7;
    
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