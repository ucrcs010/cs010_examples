#include <iostream>
using namespace std;

int main()
{
    
    // EXERCISE:
    // When is a given year a leap year?
    // a) if year is divisble by 4;
    // b) EXCEPT if year is divisible by 100
    // c) EXCEPT if it is also divisible by 400
    // SEE http://en.wikipedia.org/wiki/Leap_year
    //
    // So 2016, 2400 ARE leap years
    // and 2015, 2100 are NOT leap years
    // use all 4 values to test your code!
    // (i.e. make sure your tests cover ALL possibilities, positive & negative)
    
    int year;
    cout << "What year? ";
    cin >> year;
    
    bool isLeap = false; // establish "default" value
    
    // one possible solution:
    if ( ( (year % 4 == 0) && (year % 100 != 0) ) 
        || ( (year % 4 == 0) && (year % 400 == 0) ) )
    {
        isLeap = true;
    }
    
    // another solution:
    if ( (year % 400 == 0) 
        || ( (year % 4 == 0) && (year % 100 != 0) ) )
    {
        isLeap = true;
    }
    
    // another solution:
    if (year % 4 == 0)   // if (a && b && c)
    {      
        if (year % 100 == 0)      
        {         
            if (year % 400 == 0)         
            {            
                isLeap = true;         
            }
        }      
        else      
        {      
            isLeap = true;      
        }   
    } 
    // NOTE that nested ifs translate to &&
     
    // PROBLEM:
    // all three proposed solutions include redundant evaluations
    // - e.g. if (year % 400) is 0, 
    // then of course (year % 100) and (year % 4) are also 0!
    
    // a better solution:
    // explore alternative ways of expressing the algorithm;
    // note that if we deal with the most restrictive case first,
    // it makes the more common cases simpler to express
    if (year % 400 == 0)
    {
        isLeap = true;
    }
    else if ( (year % 4 == 0) && (year % 100 != 0) )
    {
        isLeap = true;
    }
    // note that we DON'T need an "else assign false",
    // because isLeap was set to false by default.
    
    // REMEMBER that "if - else if" translates to ||, so we get:
    if ( (year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0) )
    {
        isLeap = true;
    }
    
    // However, this solution is still ugly - we are saying:
    // evaluate a bool expression; 
    // then, if the result is true,
    // assign the bool literal "true" to the bool variable!
    // that's horrible!!
    
    // BEST solution:
    isLeap = (year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0) );
    
// Then we can use the stored result (isLeap) elsewhere in the program:
    cout << year << " is";
    if (!isLeap)
    {
        cout << " NOT";
    }
    cout << " a leap year!" << endl;
    
    // EXERCISE:
    // Use de Morgan's law to use the above to come up with an expression for
    bool isNotLeap;
    
    /* 
    de Morgan's law
    Take two bool expressions a, b, e.g.
        a: isRaining
        b: isCold
    
    We can make a compound boolean expression like this:
        ( a && b ) - it is both raining and cold
    
    or like this:
        ( a || b ) - it is either raining or it is cold (or perhaps both)
    
    In both cases, the possible values of a, b are:
        false, false
        false, true
        true, false
        true, true
    (a && b) is true only when BOTH a and b are true
    (a || b) is true if EITHER a OR b is true (or both)
    
    What does it mean to "negate" such an expression?
    i.e. what is the meaning of "the opposite of (a && b)",
    or "the opposite of (a || b)?
    
    This is de Morgan's law:
    !( a && b ) => ( !a || !b )
    !( a || b ) => ( !a && !b )
    
    */
    
    return 0;
}