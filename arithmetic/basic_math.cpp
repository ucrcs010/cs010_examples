/// @file basic_math.cpp
/// @author Adam Koehler
/// @date October 4, 2016
/// @brief Code snippets and comments utilized in lecture on 10/4/16 to 
///        discuss basic math expressions with different datatypes.

#include <iostream>

using namespace std;

int main()
{
    // +, -, *, /
    // basic mathematical operators
    
    // int + int -> int
    
    // int + double -> double
    
    // double + double -> double
    
    // int + int - double 
    //    int    - double -> double
    
    // int / int -> integer division
    // 3 / 4 --> 0
    // int / double -> floating point division
    // 3.0 / 4 --> 0.75
    
    // 3 / 4 * 5.0 
    // integer division then multiply
    // 3/4-> 0 * 5.0 -> 0.0
    
    
    // strings?
    // +, -, *, /
    // + Concatenation
    // string s = "hello ";
    // string w = s + s;
    
    // characters (are just integers)
    // +, -, *, /
    // +, -
    // character addition
    // 'c' + 1 ---> 'd'
    // 'c' - 1 ---> 'b'
    // 'c' - 'a' ---> 2 (2 spots from c to a)
    // 99 - 97 ---> 2 (we don't use 99/97 ever)
    
    // bool --- no math
    
    
    // modulo (%)
    // remainder of integer division
    // integers only
    // 6 / 5 remainder is 1 
    // 6 % 5 yields 1
    // 7 / 5 yields 1
    // 7 % 5 yields 2
    
    
    // int % int ---> int 
    // 5 % 3 ---> 2
    // 5 % 0 ---> ERROR
    // 0 % 5 ---> 0
    // 10 % 6 ---> 4
    // 3 % 6 ---> 3
    // z % 6 ---> 0, 1, 2, 3, 4, or 5
    
    
    cout << 3 % 6 << endl;
    
    return 0;
}