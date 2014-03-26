/*
    Assume that a function named swapdoubles has been defined 
    and is available for use in this exercise: 
    that function receives two variables of type double
    and exchanges their values. 
    Write the definition of a function named sort3 
    that is passed three double variables. 
    The function returns nothing but modifies the values of these variables
    so they are in sorted order. 
    So, if  a ,  b and  c have (respectively) the values 3.14, 2.71, and 3.04
    and the invocation  sort3(a,b,c) is made, 
    then upon return, the values of  a ,  b and c 
    will be 2.71, 3.04, and 3.14 respectively.
*/

#include <iostream>
using namespace std;

// declare sort3
void sort3( double & x, double & y, double & z );

int main()
{
    double a, b, c;
    
    sort3( a, b, c);
    
    return 0;
}