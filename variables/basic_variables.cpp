/// @file basic_variables.cpp
/// @author Adam Koehler
/// @date September 29, 2016
/// @brief Example utilized in class on 
///         September 29, 2016 to discuss
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
    // cin >> x;
    
    // input value: 4.5
    // input stops at the . so x gets 4 and y doesn't 
    //  get a value because it doesn't skip over 
    //  the . and so when >> y occurs .5 is in the 
    //  input buffer and it gets stuck on the . again
    // cin >> x >> y;
    
    // When we output, y does not have a value. 
    //  Remember, built in types such as integers 
    //  do not have default values.
    // cout << y << endl;
    
    // Output the acquired value of 4
    // cout << x << endl;
    
    
    // fixed by also inputting a character which gets the .
    // input 3 values (4.5)
    cin >> x >> myChar>> y;
    
    cout << y << endl;          // 5
    cout << x << endl;          // 4
    cout << myChar << endl;     // .
    

    // bool - 
    // literals: true false
    //  built in datatype, so it does not have a default value
    // bool x = true;
    
    
    return 0;
}