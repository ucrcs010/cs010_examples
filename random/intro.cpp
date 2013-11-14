/// @file intro.cpp
/// @author Adam Koehler
/// @date November 14, 2013
/// @brief Code snippets and comments utilized in lecture to 
///        discuss pseudo random numbers.
///

#include <cstdlib>  // this is required for srand() and rand()
#include <iostream>
using namespace std;

int main()
{
    // We only call srand a single time
    // We can use time(0) to get the current system time so that runs that 
    //  are at least a second apart will generate different random values.
    srand(time(0));
    
    // General random number equation for random number in a range (inclusive)
    //              ( RANGE Eq.   )
    // min + rand()%(max - min + 1)
    
    // output three random numbers
    cout << rand()%100 << "\t"<< 1+rand()%6 << "\t"<< rand()%2 << "\t" << endl;
    
    return 0;
}