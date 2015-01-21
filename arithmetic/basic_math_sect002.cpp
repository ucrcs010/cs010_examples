/// @file arithmetic.cpp
/// @author Adam Koehler
/// @date January 14, 2015
/// @brief Code snippets and comments utilized in lecture on 1/14/15 to 
///        discuss arithmetic with variables.

#include <iostream>

using namespace std;

int main()
{
    // int numUsers; //define
    // numUsers = 0; // assign
    

    int nums = 4;
    int x = 5;
     
    // integer math - int & int => int
    x / nums; --> 1
    x % nums; --> 1 
    nums / x; --> 0
    nums % x; --> 4
    
    // floating point - double & double => double
    double y, z;
    y = 5;
    z = 10.0;
    y / z; --> 0.5
    z / y --> 2.0
    
    // 2 is stored separately from the .0
    // 2.0
    // 1.99999999999
    // 2.00000000001
    
    // character math uses + / -
    char c = 'c';
    c = c+1;
    
    c = 'b';
    c = c - 1;
    c = c + 1;
    
    
    bool // don't do math with boolean values
    
   
    // concatenation, always starts with a string variable
    string s = "hello";
    string q = "world";
    s = s + " " + q;
        
    string myS; //default ""
    myS = "hello"
    string myS2 = "world";
    myS = myS + myS2; // "helloworld"
    
    
    
    // mixing types
    // always choose greater precision as answer
    // int & double => double
    3 / 2 + 7 / 10 * 5.0 
    (3 / 2) + (7 / 10 * 5.0)
    1 + 0.0
    1.0
    
    
    // ---> modulo (%)
    int & int only
    
    5 % 3 -> 2
    5 % 0 -> ERROR 
    0 % 5 -> 0
    // long division --> 3rd grade
    

}