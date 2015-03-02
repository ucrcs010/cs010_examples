/// @file introToReferences.cpp
/// @author Adam Koehler
/// @date February 23, 2015
/// @brief Code snippets and comments used to discuss 
///         and introduce reference paramaters.

// Two types of parameters

// pass by value
//  a copy of the value provided is placed in the memory
//      space for the parameter variable
//  argument can be literal, expression result, 
//      or a variable.

// pass by reference
//  the reference parameter points back to the variable
//      sent as the argument in the function invocation
//  argument can only be a variable as a variable is a 
//      named space in memory and the reference 
//      parameter points back to that location


#include <iostream>
using namespace std;

/// @brief calculate the x, y instersection of two lines
/// @param x reference to the double to store x value of intersection
/// @param y reference to the double to store y value of intersection
/// @param m1 slope of the first line
/// @param m2 slope of the second line
/// @param b1 y-intersection of the first line
/// @param b1 y-intersection of the second line
int findPt(double &x, double &y, double m1, double m2, double b1, double b2)
{
    if (m1 - m2 == 0)
    {
        return DIV_ZERO;
    }
    
    x = (b2 - b1) / (m1 - m2);
    y = m1 * x + b1;
    
    return OK;
}

int main()
{
    double a=8, c=7;
    double slope1, slope2, yint1, yint2;
    slope1 = 3;
    slope2 = 2.3;
    yint1 = -3;
    yint2 = 4;
    findPt(a, c, slope1, slope2, yint1, yint2);
    cout << "Lines will intersect at: (" << a
        << ", " << c << ")" << endl;
    return 0;
}