/// @file integer_mathematics.cpp
/// @author Adam Koehler
/// @date October 4, 2013
/// @brief Code snippets and comments utilized in lecture on 10/4/13 to 
///        discuss integer mathematics.

#include <iostream>

using namespace std;

int main()
{
    int x;
    x = x + 1;  // NOT a "statement of equality"
    x += 1; // means above
    
    double y;
    y /= 2.0; "divide value of y by 2.0, assign result back to y"

    // operators: +=   -=   *=   /=   %=
    
    y *= 7.368;
    
    int n;
    
    n += 1;
    n -= 1;
    
    ++n;  pre-increment
    n++;  post-increment
    
    --n;  decrement
    n--;
    
    
    // declaration
    int x, y, z;
    double r;
    
    // declaration & initialize
    int q = 1;
    
    // assignment
    x = 5;
    y = 8;
    r = 2.5;
    
    cout << "r: " << r << endl;
    
    // Math (+, -, *, /, %)
    // integer math & floating point math
    // integer mathematics - always integers
    // int + int => int 
    // we can use integer literals 
    z = 3 + 4;
    // or we can use integer variables
    z = x + y;
    cout << "z: " << z << endl;
    
    // Integer division, how many times does divisor go into dividend
    // no remainders or partial results
    z = 3/2;    // z is assigned the value 1
    
    
    // modulo - %
    // gives the remainder of a integer division statement
    z = 3 % 2; // z is assigned the value 1
    z = x % 2;
    cout << "z: " << z << endl;
    
    int n;
    int sum; // sum of n numbers supplied by user
    
    double average = static_cast<double>(sum) / n;  // average cars per minute ..
    
    
    return 0;   
}
