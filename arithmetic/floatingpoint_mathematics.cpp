/// @file floatingpoint_mathematics.cpp
/// @author Adam Koehler
/// @date October 4, 2013
/// @brief Code snippets and comments utilized in lecture on 10/4/13 to 
///        discuss integer mathematics.

#include <iostream>

using namespace std;

int main()
{
    // definition
    int x, y, z;
    double r;
    
    // define & initialize
    int q = 1;
    
    // assignment
    x = 5;
    y = 8;
    r = 2.5;
    
    cout << "r: " << r << endl;
    
    // Math (+, -, *, /)
    // floating point or mixed math
    // int + double => double
    // double + double => double
    
    // Mixing variable types, we must take care in order of operations
    r = x + y / r;
    // y/r => int / double => double.... int + double => double
    // The above can be broken down into two steps
    // 1) double temp = y / r
    // 2) r = x + temp
    
    // We can also use mixed literals, int / double
    r = 3 / 2.0;
    r = 3 / 2.;
    cout << "r: " << r << endl;
    
    return 0;   
}
