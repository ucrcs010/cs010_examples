/// @file branches_intro.cpp
/// @author Adam Koehler
/// @date January 26, 2015
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
    
    return 0;
}