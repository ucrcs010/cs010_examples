/// @file input.cpp
/// @author Adam Koehler
/// @date October 10, 2014
/// @brief Example utilized in class on October 10, 2014 to discuss
///         the basics of variables and input streams in C++.

#include <iostream>

using namespace std;

int main()
{
    // We currently have four potential variable types. 
    //      int, double, char and string
    // The types native to C++ are: int, double, and char
    // The additional datatype, string, is a series of characters.
    
    // Q:   What can be stored in an integer variable and when do we use it?
    // A:   The integer datatype stores whole numbers and is generally utilized
    //          when counting.
    int x;
    
    // Q:   What can be stored in a double variable and when do we use it?
    // A:   The double datatype stores double precision floating point numbers.
    //          For example, 3.1415 is a floating point number. We utilize 
    //          floating point numbers and the double datatype when measuring.
    double y;
    
    // Q:   What can be stored in a char?
    // A:   The character datatype, char, can hold a single character. The char
    //          literal value is denoted by single quotes, 'j'
    char b;
    
    // Q:   What can be stored in a string?
    // A:   The string datatype stores a sequence of characters, the string
    //          literals are denoted by double quotes, "hello"
    string myString;
    
    
    // Acquire the user's favorite number
    cout << "Hello, what number is your favorite? ";
    cin >> x;
    
    // When using input redirection (run a.out < input.txt) there is not an
    //  'Enter' press on the keyboard to get echo'ed to the screen forcing the 
    //  text down a line. Without the echo'ed character, we must force the
    //  output to a newline ourselves by sending an endline to cout.
    cout << endl;
    
    // Acquire a string from the input stream. If nothing exists in the input
    //  stream, then the program will pause at this point and wait for something
    //  to be inserted into the input stream.
    cin >> myString;
    
    
    // Make a statement about the user's favorite number.
    cout << x << " is a lovely number." << endl;
    
    return 0;
}