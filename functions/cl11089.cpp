/*
    Write the definition of a function named  maxmin 
    that is passed four int arguments. 
    The function returns nothing but stores the larger of the first two arguments
    in the third argument it receives, and the the smaller 
    of the first two arguments in its fourth argument. 
    So, if you invoke  maxmin(3,7,x,y) 
    upon return  x will have the value 7 and  y will have the value 3. 
*/

#include <iostream>
using namespace std;

// declare maxmin
void maxmin( int a, int b, int & c, int & d );

int main()
{
    int x, y;
    
    maxmin(3, 7, x, y);
    
    return 0;
}