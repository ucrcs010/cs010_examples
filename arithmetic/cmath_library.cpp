/// @file cmath_library.cpp
/// @author Adam Koehler
/// @date October 14, 2013
/// @brief Code snippets and comments utilized in lecture on 10/14/13 to 
///        discuss the cmath library and how to utilize the provided functions.

#include <iostream>

// math libary functions need cmath library
#include <cmath>

using namespace std;

int main()
{
    // cmath library functions
    // square root, power, etc; see Table 2.14.1 in Zyante

    // Many of the functions will utilize numerical arguments.
    // Most will state they want doubles but will accept integers because 
    // we are allowed to freely move to a higher precision datatype 
    // without complaint. So we can go integer to double freely but 
    // if we wish to go double to integer then we need to cast.
    
    // Let's acquire a double to avoid an explicity or implicit casting
    double x; 
    cin >> x;
    
    // When calling a function that returns a result to us we have two options:
    // use it immediately, in output or inside an expression
    // or store it for later so we can use it later in an expression
    
    // output result
    cout << "square root of x is: " << sqrt(x) << endl;
    
    // store result
    double r = sqrt(x);
    
    // output later or utilize in some other expression
    cout << r << endl;
    
    // do both, utilize a new result in an expression immediately and use an old
    // result as part of an expression
    cout << r + sqrt(4.0) << endl;
    
    return 0;
}