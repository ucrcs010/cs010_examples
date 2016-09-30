/// @file subtraction_example.cpp
/// @author Adam Koehler
/// @date September 29, 2016
/// @brief Example utilized in class on 
///         September 29, 2016 to discuss
///         the basics of variables in C++.

#include <iostream>

using namespace std;

// input redirection
// way to acquire inputs through a file versus a keyboard input
// when executing the program, we utilize ./a.out < input.txt
int main()
{
    int x=0, y=0, z=0;
    
    cout << "Enter 3 numbers separated by whitespace: ";
    cin >> x >> y >> z;
    cout << endl;
    
    // we could output the expression with literals
    //  however, this will always be -6 and diminishes the 
    //  usefulness of our program
    cout << 3 - 4 - 5 << endl;
    
    // so we utilize variables that contain the values the user types
    // or if using input redirection values from the file
    cout << x - y - z << endl;
    
    return 0;
}