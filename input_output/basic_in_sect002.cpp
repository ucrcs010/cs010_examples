/// @file basic_in.cpp
/// @author Adam Koehler
/// @date January 12, 2015
/// @brief Example utilized in class on January 12, 2015 to discuss
///         the basics of user input in C++.

#include <iostream>

using namespace std;


int main()
{
    // Declare a variable, the variable must be
    //  declared prior to assigning a value
    int x;
    int y;

    // we could assign a literal through the assignment
    //  operator
    x = 5;
    
    // we can assign a user typed value through input
    // keyword for input, cin
    // input operator >>
    //      the input operator points to where the data
    //      will be sent
    
    // this basic input statement has one
    // input operation
    cin >> x;
    
    // this input statement has two input operations
    cin >> x >> y;
    
    // Output the acquired value
    cout << x;
    
    return 0;
}