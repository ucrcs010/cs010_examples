/// @file bool_intro.cpp
/// @author Adam Koehler
/// @date January 28, 2015
/// @brief Code snippets and comments utilized in lecture on 01/28/15 to 
///         discuss boolean variables, relational operators, and the negation
///         operator.

// relational operators are used to compare two values of the same datatype
// >, <, <=, >=, ==, !=

// logic operatorts are used to combine boolean values (true or false)
// !, &&, ||  ---> read as not, and, or respectively

#include <iostream>
using namespace std;

int main()
{
    int a = 5, c = 10;
    
    // to declare a boolean variable we use the bool datatype
    // it is common practice to initial the value to true or false
    bool x = true; // or x = false;

    // we can also assign a boolean value the result of an expression
    //      when that expression evaluates to true or false
    x = a < c;  // x is assigned the result of the expression, a < c
                // x will be assigned the value true


    // The negation operator can be utilized to flip a value from true to false
    //      or from false to true
    x = !x;     // x will be assigned the negated value of x, not true => false

    // We could avoid using the negation operator by reversing the initial 
    //      expression to mean the opposite of what we had
    x = a >= c;


    // We should never have a empty block, we should change our relational
    // expression to elimate the blank block
    if(A > C)
    {
    
    }
    else
    {
        cout << "hello" << endl;
    }
    
    // the above becomes
    if (A <= C)
    {
        cout << "hello" << endl;
    }

    return 0;
}