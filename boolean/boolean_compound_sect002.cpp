/// @file bool_compound.cpp
/// @author Adam Koehler
/// @date January 28, 2015
/// @brief Code snippets and comments utilized in lecture on 01/28/2015 to 
///        discuss boolean variables and compound boolean operations.

// relational operators are used to compare two values of the same datatype
// >, <, <=, >=, ==, !=

// logic operators are used to combine boolean values (true or false)
// !, &&, ||  ---> read as not, and, or respectively

#include <iostream>
using namespace std;

int main()
{
    // Boolean variables are often named in a way that makes them easy to read
    //      in English. The following would be a good variable to state whether
    //      or not the game has been won.
    bool gameWon = false;

    // The negation follows suit, reading and verbalizing into English easily
    //      !gameWon is not game won or the game has not been won.
 
    // Our other logic operators are utilized to combine boolean values or
    //      expressions to make compound boolean expressions
    //
    //    x       y       x && y      x || y
    //    true    true    true        true
    //    true    false   false       true
    //    false   true    false       true    
    //    false   false   false       false


    // Q: what would compound boolean branch look like to state 
    //      whether a character is a vowel, 'a', 'e', 'i', 'o', 'u', 'y'?
    
    // Answer:
    char c;
    cin >> c;
    
    // Common error:
    // Each logical operator requires either a true or false value
    //      'e' is not true or false, so "false || 'e'" does not make sense
    //      To fix this we must have a complete boolean expression on each
    //      side of the operator.
    //  if(c == 'a' || 'e' || 'i' || 'o' || 'u' || 'y')
    
    // We compare the character c to each of the vowel values
    //   If any of the comparisons are true, then the character is a vowel.
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    {
        cout << "character is a vowel" << endl;
    }
    else
    {
        cout << "character is a consonant" << endl;
    }

    return 0;
}