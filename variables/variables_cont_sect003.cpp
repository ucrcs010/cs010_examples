/// @file variables_cont.cpp
/// @author Adam Koehler
/// @date October 13, 2014
/// @brief Code snippets and comments utilized in lecture on 10/13/14 to 
///        discuss variables.

// variables: named space in memory
// declaring a variabe, NEED: type and name

// types: int, double, string (week 1)
// int - used for counting
// double - used for measuring
// string - sequence of characters - double quotes

// (week 2+)
// char - one character, single quote
// bool - true/false

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declaration
    int x, y;    // built-in datatype that defaults to garbage
    double r;       // built-in datatype that defaults to garbage
    char myChar;         // built-in datatype that defaults to garbage
    string myString;   // defaults to the empty string: ""

    // assignment
    x = 5;
    y = 8;
    r = 2.5;
    myString = "hello world";
    myChar = 'q';
    
    // sometimes we need a comment to clarify a block of code
    // the comment for a block should precede the block of code

    // assign the origin coordinates to x, y
    x = 0;
    y = 0;
    
    // we can also combine to declare & initialize (define)
    int q = 1;
    
    // at times we want a constant value, signaling to code readers and the
    //      compiler that the value of the variable cannot change
    //      after initialization. In C++ the const keyword enforces this.
    const int SECONDS_PER_MINUTE = 60;
    
    // output the value in r to the user
    cout << "r: " << r << endl;

    return 0;   
}