/// @file output.cpp
/// @author Adam Koehler
/// @date October 8, 2014
/// @brief Example utilized in class on October 8, 2014 to discuss
///         the basics of a program and basic output in C++.

// Libraries are included through a #include statement
// Many libraries exist for our use in C++ which include code written by others
//  for use within our programs. 
// This is the input output stream library.
#include <iostream>

// This line allows us to use defined terms in the standard namespace without
//  continually noting that the terms come from the standard namespace. Without
//  this line, all our cout keywords would need to be std::cout.
using namespace std;

// Every program requires a main function
int main()
{
    // Every statement will end in a semicolon
    // Every output statement will begin with the cout keyword and contain a 
    //  single output operator (<<) per item to output.
    // The operator arrows always point to where you wish to send something.
    // We read this line of code as: "Send the string containing Hi to cout".
    cout << "Hi";
    
    // Output statements can have multiple items, each having an operator (<<)
    // endl is a special keyword, sending an end line to output
    cout << "hi " << " how are you?" << endl;
    
    // An output statement may go across multiple lines of code.
    // The second line of the continued statement is indented one time.
    cout << "Hi"
        << " there" << endl;
    cout << "Welcome to CS 10" << endl;
    
    // The return at the end of the main function allows control to be returned
    // to the invoker, usually the operating system. Returning 0 lets the caller
    // know that everything went okay and the program successfully executed
    // without crashing.
    return 0;
}