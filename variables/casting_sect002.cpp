/// @file casting.cpp
/// @author Adam Koehler
/// @date January 16, 2015
/// @brief Code snippets and comments utilized in lecture on 1/16/15 to 
///        discuss casting between variable types.

#include <iostream>
using namespace std;

int main()
{
    // Q: How can we go from a double to an integer?
    //      12.5 --> 12

    // A: When we wish to convert to a different datatype then we utilize
    //      static_cast. The general form is:
    //          datatype variable = static_cast <datatype>(value);
    int x = static_cast<int>(12.5); // 12 due truncation
    double y = static_cast<double>(12); // 12 due truncation
    double r = 12;

    
    // 12.0
    // 11.999999999999999999
    // 12.00000000001
    // In C++ any of the above may represent the value 12.0, the computer
    //      will attempt to maintain as much precision as possible. This leads
    //      to an ambiguity when converting to an integer, will we get
    //      11 or will we get 12 after the conversion?
    // To fix the ambiguity we add a small amount that will not change the
    //      expected outcome of the case but removes the ambiguity.
    int q = static_cast<int>(r + .5);


    // We can cast other datatypes too.
    char c = 'c';
    
    // We can convert the character to an integer, since integers are more
    //      precise the compiler does not complain.
    int x = c;
    
    // If we simply want to check the number in output we could 
    //      use static cast to change the character to an integer
    //      prior to being sent to cout
    cout << "Character, " << c << " is ASCII number " << static_cast<int>(c);
    cout << endl;

    return 0;
}