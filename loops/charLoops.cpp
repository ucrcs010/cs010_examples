/// @file charLoops.cpp
/// @author Adam Koehler
/// @date October 25, 2016
/// @brief Code snippets and comments utilized in lecture on 10/25/16 to 
///        discuss loop with chars.

// we an utilize characters similar 
//  to integers
for (char c = 'a'; c <= 'z'; c++)
{
    cout << c << endl;
}

// or we can use integers and use
// character math to calculate an offset
// from a specific character, however
// we need to use static_cast to convert
// back to a character because the 
// character math results an integer
for (int i = 0; i <= 'z'-'a'; i++)
{
    cout << static_cast<char>('a' + i) 
        << endl;
}