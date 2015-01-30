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

    // three types of questions:
    //  dependent (true for initial) - compound using &&
    //  dependent (false for initial) - else if statement
    //  independent multiple sequential ifs - compound using ||


    // independent questions - if (a > c || a > b)
    if (a > c)
    {
        cout << " a is bigger "; 
        
    }
    if (a > b)
    {
        cout << " a is bigger ";
        cout << "this too";
        
    }
    // becomes
    if (a>c || a>b)
    {
        cout << "a is bigger ";
    }
    if (a > b)
    {
        cout << "this too";
    }
    }

    
    // don't write blank blocks, dependent with initial false answer
    if (a > c)
    {
        // do nothing        
    }
    else if (a > b) // avoid blank block using if (!(a > c) && a > b)
    {
        // do something
    }
    
    
    // dependent questions (truth) if (personA > persronB && personA > personC)
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