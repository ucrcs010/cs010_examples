/// @file characters.cpp
/// @author Adam Koehler
/// @date October 14, 2013
/// @brief Code snippets and comments utilized in lecture on 10/14/13 to 
///        discuss the character datatype and character mathematics

#include <iostream>

using namespace std;

int main ()
{
    int offset;
    
    // declare a variable with the type character
    char x;
    
    // characters are a native type so initially the value is garbage
    // so we must assign a value before utilizing the declared variable
    // either through initialization during declaration
    char q = '5';
    
    // or through assignment after the variable has been declared
    x = 'n';
    
    // or we can acquire the initial value through input
    cout << "First letter (a or A): ";
    cin >> x;
    cout << endl;
    
    
    // Acquire the desired offset into the alphabet
    cout << "Offset into alphabet (a or A is 0): ";
    cin >> offset;
    cout << endl;
    
    // integer math operations: +, -, *, / and %
    // cut down to only ones that "make sense" for characters: + and -
    //   although they will all syntacticall work, they will not make sense
    
    // output the letter in the alphabet that is at the offset
    // doesn't work: integer result and we don't want to output an ASCII number
    cout << "Character at offset " << offset << ": " << x + offset << endl;
    
    // we must utilize static_cast to change the datatype of the expression
    cout << "Character at offset " << offset << ": ";
    cout << static_cast<char>(x + offset) << endl;
    
    return 0;
}