/// @file tracking.cpp
/// @author Adam Koehler
/// @date October 28, 2013
/// @brief Code snippets and comments utilized in lecture on 10/28/13 to 
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
    string s;
    char c;
    
    // We can initialize are boolean variables that we use as trackers to false
    // because we have have not seen the character type each represents yet.
    bool up=false, low=false, dig=false;
    
    
    // Prompt the user for a string of characters
    cout << "Please input a string: ";
    cin >> s;
    cout << endl;
    
    // We must check every character in the string, this means we need a loop
    // The loop will start at the first index of a string and end at the last 
    // index for strings. 
    // What is the first index?  When can we stop? What is our update?
    for (int i=0; i < s.size(); i=i+1)
    {
        // We must acquire the character that we are currently "looking at"
        // within our string.  We can either store it or use it immediately,
        // similar to all other values returned by function calls
        c = s.at(i);
        
        // Here we could acquire the character with at() or use the value 
        // we have previously stored.
        // Do we want if/else if/else, if/if/if or if/else if/else if? Why?
        // Is 'A' <= c <= 'Z' valid syntax?  Is it logically correct C++?
        // When do we want to use || and when do we use &&?
        if('A' <= s.at(i) && c <= 'Z')
        {
            // When are curly braces necessary?  Do we need them in the 
            // else-if statements below?
            
            // We found a character that is in our range, we need to update
            // the boolean variable we are using to track whether we saw this 
            // type of character.
            up = true;
        }
        else if('a' <= c && c <= 'z')
            low = true;
        else if('0' <= c && c <= '9')
            dig = true;
    }
    
    
    // Now we need to output the statements that tell the user the types of
    // characters that we recognized within the string that he or she typed.
    
    // We only want to output this statement once per character grouping, 
    // therefore it should not go inside the loop.  If it was in the loop we 
    // would have to build additional special logic to handle the fact we only
    // want it output a single time.
    
    // Are these questions dependent on eachother?  Is the best choice:
    // if/if/if, if/else-if/else, if/else-if/else-if?  Why?
    if(up)
    {
        cout << "Your string contains an uppercase character!!" << endl;
    }
    
    if(low)
    {
        cout << "Your string contains a lowercase character." << endl;
    }
    
    if(dig)
    {
        cout << "Your string contains a digit." << endl;
    }
    
    
    return 0;
}