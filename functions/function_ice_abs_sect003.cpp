/// @file function_ice_abs.cpp
/// @author Adam Koehler
/// @date November 17, 2014
/// @brief An in class exercise about implementing absolute value. Utilized to
///         discuss how functions can have multiple implementation styles and
///         can have multiple functions of the same name (overloading).

#include <iostream>

using namespace std;


// TODO: Write a function that properly calculates and returns the absolute value
// of the provided number.

/// @brief calculates the absolute value of the provided integer number
/// @param userNum the number to calculate the absolute value of
/// @return the absolute value of the provided number
int absCalc(int userNum)
{
    // Can use an initial value that is an oddity to try and track errors down
    //  when invoking the function. So if calling absCalc(33) results in -99, 
    //  then you know that the value was not updated or some how it created
    //  an improper result of -99 (as all absolute values are positive)
    int absNum = -99; 
    
    if (userNum >= 0)
    {
        // Three valid ways of implementing this one branch.
        //  We try to avoid adding unnecessary mathematics.
        // absNum = userNum;  // 1 * userNum
        // return userNum;
        absNum = userNum;
    }
    else
    {
        // Three valid ways of implementing this one branch.
        //  We try to avoid adding unnecessary mathematics.        
        // return -userNum;
        // absNum = -1 * userNum;
        absNum = -userNum;
    }
    
    return absNum;
}

// Function overloading allows definition with the same name but differnt 
//      return type and parameter type

/// @brief calculates the absolute value of the provided floating point number
/// @param userNum the number to calculate the absolute value of
/// @return the absolute value of the provided number
double absCalc(double userNum)
{
    if (userNum < 0)
    {
        return -userNum;
    }
    
    return userNum;
}

int main()
{
    
    return 0;
}