/// @file functionsReferenceIntro.cpp
/// @author Adam Koehler
/// @date November 15, 2016
/// @brief Code snippets and comments utilized in lecture on 11/15/16 to 
///        discuss the basics of functions.

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    // assign the value of a into the integer variable t   
    //      a is a reference parameter, it refers back to main's x
    //      so we look at main's x for a value, it has the value 5
    //      thus we are assigning 5 into the variable t
    
    a = b;
    // assign the value of b into a
    //      b is a reference parameter, it refers back to main's y
    //      so we look at main's y for a value, it has the value 7
    //      thus we are assigning 7 into the variable a but a
    //      refers to main's x so we are actually 
    //      assigning 7 into main's x
    
    b = t;
    // assign the value of t into b
    //      t is a local variable with the value of 5
    //      so we are assigning 5 into b, but variable b refers to main's y
    //      so we are actually assigning 5 into main's y
    
    // at this point in the code we have utilized the reference parameters
    //      to swap the values of main's x and main's y since those were
    //      the arguments supplied during the function call.
    
    // this return statement is optional as swap is a void function
    return;
}

int main()
{
    int x, y; 
    
    // assign values to x and y
    x = 5; 
    y = 7;
    
    // If we want to swap the values locally we 
    //  use a temporary variable to store one of
    //  the values and then perform the swap.
    // int t = x;
    // x = y;
    // y = t;
    
    // Since the function uses reference parameters
    //  we cannot use literal values as arguments
    // swap(5, 7);  // BAD
    
    // Proper - first parameter of swap will refer back to x
    //          second parameter of swap will refer back to y
    // swap(x, y);
    
    // Output values before invocation
    cout << "Before swap call ";
    cout << "(x, y) is " << "(" << x << ", " << y << ")" << endl;
    
    // invoke the function to swap values of x and y
    swap(x, y);
    
    // Output values after invocation
    cout << "After swap call ";
    cout << "(x, y) is " << "(" << x << ", " << y << ")" << endl;
    
    return 0;
}