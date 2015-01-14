/// @file basic_variables.cpp
/// @author Adam Koehler
/// @date January 12, 2015
/// @brief Example utilized in class on January 12, 2015 to discuss
///         the basics of variables in C++.

#include <iostream>

using namespace std;


int main()
{
    
    // numbers
    // integers (int) - whole numbers
    // double - floating point double precision numbers
    // float - we won't use this (single precision)
    // potential literals:
    //      int - 3
    //      float -  3.1415
    //      double - 3.1415, 3.0, 2.
    
    // why int over double??
    // don't have to be as precise
    // conserve memory
    // faster
    
    // Boils down to two reasons we use in CS 010:
    //      1) integers are for counting
    //      2) floating point numbers are for measuring
    
    
    // character based types (or text)
    // strings (string) - sequence of characters
    // characters (char) - a single character
    // potential literals:
    //      string - "Hello World" (double quotes)
    //      char - 'H' (single quote)
    
    
    // Declare a variable of each potential datatype
    int x;
    int y;
    string myString;
    char myChar;
    double myNum;
    
    // input a value into the variable x
    cin >> x;
    
    // Output the acquired value
    cout << x;
    
    return 0;
}