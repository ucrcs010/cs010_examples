/// @file bool_Intro.cpp
/// @author Adam Koehler
/// @date October 11, 2016
/// @brief Code snippets and comments utilized in lecture on 10/11/16 to 
///         discuss boolean variables, relational operators, and the negation
///         operator.

// relational operators are used to compare two values of the same datatype
// >, <, <=, >=, ==, !=

// logic operatorts are used to combine boolean values (true or false)
// !, &&, ||  ---> not, and, or respectively


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 5, c = 10;
    
    // to declare a boolean variable we use the bool datatype
    // it is common practice to initial the value to true or false
    bool x = true; // or x = false;
    
    // naming convention
    //  use names that help with the question the bool asks
    bool gameWon = false;
    // !gameWon

    // assignment of an expression
    x = a > c;

    // negation operator
    x = !(a > c);
    x = !x;

    // opposites of relational operators: 
    //  opposite of (a > c) is (a <= c) not (a < c) because we lose equality
    x = !(a > c); 
    x = a <= c;   // same as above, don't forget to include equality!

    // combining multiple logical expressions
    x = (a > c) && (c == a);
    
    // Truth Table
    x       y       (x && y)   (x || y)
    true    true    true        true
    true    false   false       true
    false   true    false       true    
    false   false   false       false

    return 0;
}