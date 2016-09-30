/// @file basic_in.cpp
/// @author Adam Koehler
/// @date September 27, 2016
/// @brief Example utilized in class on September 27, 2016 
///         to discuss the basics of user input in C++.

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
    cout << "Enter two numbers separated by a space: ";
    cin >> x >> y;
    
    // Output the acquired value
    cout << x << endl;
    
    // Output some literals
    cout << 5 * 4 << endl;
    
    // Output the same using variables
    //  assuming when asked for input the user types: 5 4
    cout << x * y << endl;
    
    return 0;
}