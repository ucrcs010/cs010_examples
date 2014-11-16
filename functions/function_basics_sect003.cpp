/// @file function_basics.cpp
/// @author Adam Koehler
/// @date November 12, 2014
/// @brief Code snippets and comments utilized in lecture on 11/12/14 to 
///        discuss the basics of functions when using nested loops.

#include <cmath>
#include <iostream>

// To include a local file, we utilize "" instead of <>
// Additionally, locally created files often have the header file extension, .h
// #include "assn.h"


using namespace std;

// 3 pieces of info for a function
// 1) return value
// 2) name
// 3) parameters list

// for example: sqrt(4) ===> 2.0
//      When calling the function we send a single argument, 4, to fill the 
//      required single parameter that has a type double. We expect a return 
//      value of type double that is the square root of the number we provided.
//      We invoke the function by using its name and surrounding all the 
//      arguments (if there are any) by parentheses.

// Somewhere in the cmath library there is a definition of the square root 
//      function that has all the outlined pieces, such as:
// double sqrt(double x)
// {
//     double myRoot;
//    
//     // code to compute the square root and store into myRoot variable
//    
//     return myRoot;
// }


/// @brief draw a right triangle of a specified size and character
/// @param size the size of one of the sides of the isosceles right triangle
/// @param myC the character to use when drawing the triangle
void drawTriangle(int size, char myC)
{
    //  triangle 1 to N
    for (int row=1; row <= size; row++)
    {
        for (int col=1; col <= row; col++)
        {
            cout << myC << ' ';
        }
        cout << endl;
    }     
}


int main()
{
    int sideSize;
    
    // take in size of side
    cin >> sideSize;
    
    // We cannot invoke a function with return type 'void' inside an output
    //      statement because it does not return anything to send 
    //      to the output stream.
    //cout << drawTriangle(sideSize, '*');
    
    // We can put a function invocation that returns something in an output 
    //      statement, because the return value will be sent to 
    //      the output stream
    cout << sqrt(4.0);
    
    
    //  triangle 1 to N
    drawTriangle(6, '-');
    cout << endl << endl;
    drawTriangle(sideSize, '+');
    
    return 0;
}