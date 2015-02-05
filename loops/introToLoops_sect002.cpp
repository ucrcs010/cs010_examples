/// @file introToLoops.cpp
/// @author Adam Koehler
/// @date February 4, 2015
/// @brief Code snippets and comments used to discuss and introduce loops.

#include <iostream>
using namespace std;

int main()
{
    // while, for, do-while
        
    // while
    // for 
    // do-while
    
    // while -- 
    // when we don't know or can't figure out how many iterations
    
    // for -- 
    // when we know or can figure out how many iterations
    
    // do-while -- 
    // when we know at least one iteration occurs in a while loop    
    
    // all loops written as
    // perform some action over and over while a condition is true
    // depending on the loop, the condition may be checked before the loop
    // body or after the loop body.
        
        
    // basic while loop
    int i = 0;  // init
    while (i < 10)  // condition
    {
        // do this -- loop body
        cout << i << endl;
        
        ++i;    // increment operator -- update step 
    }
    
    // go here when done or when condition is false
    
    // basic for loop 
    //      performs same task as the while loop above
    // for (initialization; condition; update)
    for (int i=0; j < 10; i=i+1) 
    {
        cout << i << endl; // loop body
        // notice that we increased the indent level because we are inside
        // an additional block
    }
    
    
    // basic for loop with strings
    string s = "hello";
    
    // bad for loop header examples
    // for(int index = 0;  i <= s.size(); i++) --> bad
    // for(int index = 0;  i <= s.size() - 1 ; i++) --> bad
    
    // good for loop to iterate over a string
    for(int index = 0;  i < s.size(); i++)
    {
        // go over every character and print
        cout << s.at(i);
    }
    
    return 0;
}