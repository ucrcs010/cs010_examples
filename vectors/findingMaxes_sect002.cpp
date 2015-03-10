/// @file findingMaxes.cpp
/// @author Adam Koehler
/// @date March 6, 2015
/// @brief Code snippets and comments utilized in lecture to 
///        discuss vectors.

// Earlier in the quarter we determined the tallest
//  of three people. By asking and answering a series
//  of yes/no questions.


// FIRST
// Now we have vectors, that can store N values of height.
//  Your task is to write an algorithm (no C++ code) to 
//  determine the index that contains the maximum of 
//  all integer heights that are stored within a vector.

create storage for max value's index
initialize to the first index
iterate over vector
    compare each value to stored max 
        when bigger replace stored index



// SECOND
// We have an algorithm, can we translate this to C++


// THIRD
// How can we translate this into a function? What are
//  all the proper choices for the various function 
//  header parts.


int findMaxIndex(const vector<int> &v, int start, int end)
{
    int maxIndex;
    maxIndex = start;
    
    for (int i=start; i <= end; i++)
    {
        if (v.at(i) > v.at(maxIndex))
        {
            maxIndex = i;
        }
    }
    
    return maxIndex;
}