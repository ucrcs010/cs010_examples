/// @file functions_intro.cpp
/// @author Adam Koehler
/// @date November 3, 2016
/// @brief Code snippets and comments utilized in lecture on 11/03/16 to 
///        discuss the basics of functions.

#include <cmath>
#include <cstdlib>  // random numbers
#include <iostream>


using namespace std;

// 3 pieces of info for a function header
// 1) return value/type
// 2) name
// 3) parameters list
//   (1)   (2)    (3)
// double sqrt(double val)
// {
//    (4) function body
// }


// 3 pieces of info for a function header
// 1) return value/type
// 2) name
// 3) parameters list
int randomInt (int low, int high)
{
   int roll = low + rand()%(high-low+1);
   return roll;
}

// calls that could exist in main()
// randomInt(1, 6);
// randomInt(5, 10);

// srand seeds the random number generator
//  creating a sequence of pseudo-random numbers 
//  based on the seed value
// srand(333)
// 234 234556 2342 1213 46456 09808


// randomInt without parameters doesn't make much sense
//      functions should perform a purpose and attempt to be generally useful
//      so a function that simply invokes rand() is not useful
// int randomInt ()
// {
//     int x = rand();
//     return x;
// }


int main()
{
    
    cin >> seedVal;
    srand(seedVal);
    
    //..... a bunch of code ...
    int dieRoll1 = randomInt(low,6);
    cout << randomInt(3,6);
    if (randomInt(3,6) == 3)
    {
        // do something for all 3's
    }
    
    // calls the function but does not use the value that is returned!
    // this is improper because we lose the random number we just created
    randomInt(4, 9);
    
    return 0;
}



// if a function is declared here then it can only be used in code
//  that comes after it, therefore it cannot be invoked in main
int randomIntLH (int low, int high)
{
  int roll = low + rand()%(high-low+1);
  return roll;
}


// 1) parameter variables
//      -- declared in the parameter list of the function
// 2) local variables
//      -- declared inside any function at any point
// 3) global variables
//         -- any variable declared outside of function
//         -- do not use in CS 010