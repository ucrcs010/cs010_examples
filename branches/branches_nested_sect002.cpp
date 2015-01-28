/// @file branches_nested.cpp
/// @author Adam Koehler
/// @date January 28, 2015
/// @brief Code snippets based on tallest person solutions, 
///        used to discuss nested branches

#include <iostream>
using namespace std;

int main()
{
    // three people, personA, personB, and personC
    //  who is the tallest?
    
    if (personA > personB) // Q1
    {
        if(personA > personC) // Q2, only asked when Q1 is true (yes)
        {
            // A is tallest
        }
        else // only enters the else when Q2 is false (no)
        {
            // C is tallest
        }
    }
    else  // only enters the else when Q1 is false (no)
    {
        if(personB > personC) // Q3, only asked when Q1 is false (no)
        {
            // B is tallest
        }
        else // only enters the else when Q3 is false (no)
        {
            // C is tallest
        }
    }    
    
    return 0;
}