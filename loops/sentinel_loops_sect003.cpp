/// @file sentinel_loops.cpp
/// @author Adam Koehler
/// @date November 10, 2014
/// @brief Code snippets and comments utilized in lecture on 11/10/14 to 
///        sentinel controlled loops.


#include <iostream>

using namespace std;


// Program Idea:
// gather grades and average them

// Thought process breakdown:
// we don't know how many grades - use while()
// SENTINEL value, what is a good value to use? (-1)

const int SENTINEL = -1;

int main()
{
    int grade = 0;
    int total = 0;   // accumulators must have an initial value
    int grades = 0;
    
    
    // A do-while will always iterate once. This is used for
    //  instructional purposes and may not be the best loop
    //  choice.
    
    // Loop until sentinel value is seen
    do
    {
        // grab a grade
        cin >> grade;
        
        // make sure it is a valid grade
        if (grade != SENTINEL)
        {
            // add to total summation of grades
            total = total + grade;
        
            // grade counter to know how many grades we saw
            grades++;
        }
        
    } while (grade != SENTINEL);
    
    // To calculate the floating point average, at least one
    //      of the operands must be a floating point datatype.
    cout << "Average: " << static_cast<double>(total) / grades << endl;
    
    return 0;
}