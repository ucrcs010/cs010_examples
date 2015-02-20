/// @file introToFunctions.cpp
/// @author Adam Koehler
/// @date February 18, 2015
/// @brief Code snippets and comments used to discuss and introduce functions.

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;


// 3 pieces of info for a function header
// needed to call
// 1) return type
// 2) parameter list
// 3) function name

// 1 additional piece needed for implementation and full definition
// 4) function body

// function stub
//  a function stub implements all four parts of a function definition
//  however, a function is almost always logically flawed and incorrect, but
//  the stub will compile and allow development of other parts of the program
int calc(int x)
{
   return 0; 
}


// function comments begin with three slashes and have special values denoted 
//  by @ characters and keywords, potential @ keywords include:
//      @brief, @return, @param
// Sometimes certain @ keywords will be missing if the function does not have
//  parameters or a return value

/// @brief draw a right isosceles triangle
/// @param height the height of the triangle
/// @param c the character to use to draw the triangle
void drawTriangle(int height, char c)
{
    
    // *
    // * *
    // * * *
    // * * * *
    for(int i=1; i <= height; ++i)
    {
        drawLine(i, c);  
    }

    // We could define a different function to draw a different triangle
    // * * * * 
    // * * *
    // * *
    // *    
    // for(int i=height; i >= 1; --i)
    // {
    //     drawLine(i, c);  
    // }    
}

/// @brief draw a line a characters each separated by a space
/// @param size the number of characters in the line
/// @param c the character to use to draw the line
void drawLine(int size, char c)
{
    // output the proper number of characters separated by a space
    for (int i=1; i <= size; ++i)
    {
        cout << c << ' ';
    }
     
    // as this is a draw line function, we should end the line   
    cout << endl;
}


int main()
{
    int y = 16;
    int x = 2;
    double q;
    
    // we have previous utilized functions written by others
    //  such as the sqrt function in the math library
    q = sqrt(4.0);
    
    // when calling functions that return a value (such as sqrt)
    //  we have two options:
    //      1) use the value immediately
    //      2) store the returned value for later (and often repeated) use
    
    // Example of using the value immediately
    cout << "The square root of 64 is " << sqrt(64) << endl;
    
    // Another example of using the value immediately
    if (sqrt(y) == x * x)
    {
        cout << "y is x to the 4th" << endl;
    }
    
    // An example of (2) storing the value for later
    y = sqrt(32);
    // .... some number of lines of code ....
    x = y + 5;
    if (y == 4)
    {
        // perform some action    
    }
    
    
    // When calling functions without a return value (void functions), we may 
    //  only invoke the function as it's own statement
    drawLine(5, '*');
    
    // We cannot invoke the function in an expression within a statement
    //  such as:
    //      cout << drawLine(5, '*') << endl;
    //      OR
    //      x = srand(500);
    // Each of these cases will result in a compiler error for improper syntax
    
    
    return 0;
}