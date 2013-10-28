/// @file for_loop_sequences.cpp
/// @author Adam Koehler
/// @date October 24, 2013
/// @brief Code snippets and comments utilized in lecture on 10/24/13 to 
///        discuss integer mathematics.
///
///        This example emphasizes how we can utilize boolean variables to track
///        the states of logic within a loop or in our program. Such as whether
///        or not we see a certain type of character within a string when 
///        traversing it.

#include <iostream>
using namespace std;

int main()
{
    // We want to print off every tenth number between 1 and 115
    const int BEGIN = 1;
    
    // The first way we could solve this problem iterates through all of our 
    // possible numbers from the beginning to the end, 1 to 115 inclusive.
    // It steps over each number 1 by 1 and then our logic inside of the loop
    // helps determine whether the number is printed out.
    
    // How many times does this loop iterate?
    for(int x = BEGIN; x <= 115; x++)
    {
        if (x%10 == 0)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    
    
    // The second way we could solve this problem updates x to be 10 greater
    // with every iteration, "skipping" a set of numbers each time.
    
    // How many times does this loop iterate?
    for(int x = BEGIN; x <= 115; x = x + 10)
    {
        if (x != BEGIN)
            cout << x-1 << " ";
    }
    cout << endl;
    
    
    // Which is the better way to write the loop for the sequence?
    // What if every iteration of the loop took 5 minutes, does that help you
    // see which implementation is better?
    
    return 0;
}