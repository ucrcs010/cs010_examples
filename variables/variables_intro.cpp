/// @file variables_intro.cpp
/// @author Adam Koehler
/// @date October 4, 2013
/// @brief Code snippets and comments utilized in lecture on 10/4/13 to 
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

using namespace std;

int main()
{
    // definition
    int x, y, z;
    double r;
    
    // define & initialize
    int q = 1;
    
    // assignment
    x = 5;
    y = 8;
    r = 2.5;
    
    cout << "r: " << r << endl;

    return 0;   
}
