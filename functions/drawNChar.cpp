/// @file drawNChar.cpp
/// @author Adam Koehler
/// @date November 15, 2013
/// @brief Example utilized in class on Noverember 15, 2013.
///
///         Example covers void functions and functions with default parameters.

#include <iostream>
using namespace std;

// default parameters
// When we declare a function prototype we can provide default values for
// parameters. Parameters that have defaults must come after all other
// parameters. When we utilize a default parameter it allows us to declare a 
// function that can set a value to a parameter if that argument isn't provided.
void drawNChars(int, char='*');


int main()
{
    // we only supply one argument so the default value for the
    // second parameter will be utilized
    drawNChars(4);   
    cout << endl;
    
    // we supply two arguments so the default value for the second parameter
    // will not be utilized, the value that we supply will be used.
    drawNChars(4, '-');
    cout << endl;

    return 0;
}

// @brief draw out n characters to standard output (cout)
// @param n the number of charcters to draw
// @param c the charcter to draw, if no argument is sent the value '*' is used
void drawNChars(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c << ' ';
    }
}