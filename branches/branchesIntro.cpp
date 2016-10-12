/// @file branchesIntro.cpp
/// @author Adam Koehler
/// @date October 11, 2016
/// @brief Code snippets and comments used to
///        discuss basic usage of branches

#include <iostream>

using namespace std;

int main()
{
    // Computers can ask simple questions that result in yes/no answers, 
    //      or true/false answers. This allows the programmer to do 
    //      different things based on the answer.
    // To achieve this concept we use if statements
    
    // simple questions yes/no
    // if (question), or else if (question) or else
    
    int ex;
    double base, exponent;
    cout << "Which exercise: ";
    cin >> ex;
    
    // We will often put the literals on the left side when doing a 
    //      comparison with the equality operator (==).
    // A typo (1 = ex) or a misunderstanding of the proper operator to use
    //      will result in a compiler error. However, (ex = 1) will compile
    //      successfully and when your program executes a logic error will 
    //      occur causing your program to not act as expected.
    if (1 == ex)    // equivalent to (ex == 1)
    {
        // perform exercise 1
    }
    else if(2 == ex)
    {
        // perform exercise 2
    }
    else if(3 == ex)
    {
        // perform exercise 3
    }
    else
    {
        // perform this code if all questions were false
    }
    
    
    // we can have multiple if statements alone,
    //  but never an else if or else statement without an if
    if (1 == ex)
    {}
    
    if (2 == ex)
    {}
    
    ex = 3;
    
    // cannot have else if by itself
    else if (3 == ex)
    {}
    
    
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

    
    
    // we can combine nested if statements
    if (a == b)
    {
        if (b == c)
        {
            cout << "all the same" << endl;
        }
    }
    // becomes...
    if (a == b && b == c)
    {
        cout << "all the same" << endl;
    }
    
    
    // we can combine sequential if statements that
    // have all the same code
    if (a > b)
    {
        c = a;
        x++;
    }
    
    if (b > c)
    {
        c = a;
        x++;
    }
    // becomes...
    if (a > b || b > c)
    {
        c = a;
        x++;
    }
    
    return 0;
}