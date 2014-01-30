/// @file branches_intro.cpp
/// @author Adam Koehler
/// @date October 18, 2013
/// @brief Code snippets and comments utilized in lecture on 10/18/13 to 
///        discuss branches.

#include <iostream>

using namespace std;


// Branches allow us to do different things with each execution of our program.
// They are always framed:
//      if (conditional expression)
//      {
//          // code to execute when conditional is true
//      }
//      else if (conditional expression)
//      {
//          // code to execute when conditional is true
//      }
//      else
//      {
//          // catch all case, code execute when no conditions are true
//      }
//
// An else-if or an else statement cannot exist without an if. So we cannot have
// those pieces first or by themselve. However we can have an if statement alone

// int x = 549;
// bool isRaining = true;  // bool literals
// bool isValid = false;
// bool isSpace;  // "undefined"




int main()
{
    int score;
   
    // Acquire an exam score from input
    cout << "Enter an exam score: ";
    
    /*
    cin >> score;
    cout << endl;
   */
    
    score = 88;
    
    // We need to choose whether we want if-else or if and another if.
    // Is the question we are answering two independent questions? Or does the
    // answer for one provide the answer for the other implicitly?
    
    // Based on the exam score output a message about passing
    // The two questions are tied together, you cannot pass and not pass at the
    // same time, therefore we utilize an if-else structure
    
    // Passing means the exam score is greater than or equal to 60
    if (score >= 75)    // boolean expression or "conditional"
    {
        cout << "satisfactory" << endl;
    }
    else 
    {
        cout << "No Credit" << endl;
    }
    
    // We always output the good luck statement.  It does not reside in any
    // of the if-else code blocks.
    cout << "Good luck on your next exam." << endl;
   
   
    // What if we have multiple "segments" or responses?
    // In this case our if would be followed by an else-if that allows us to
    // ask another question given that the first question was false.
    if (score >= 90)
    {
        cout << "You are awesome, you got an A!" << endl;
    }
    else if (score >= 80)
    {
        cout << "You got a B!" << endl;
    }
    else if (score >= 70)
    {
        cout << "C";
    }
    else if (score >= 60)
    {
        cout << "D";
    }
    else  // "catchall" else
    {
        cout << "You failed." << endl;
    }
    
    cout << "end!" << endl;
    // When do we use a couple of if statements instead of if-else? 
    // The questions must be independent.
    if (score >= 0)
    {
        cout << "A valid score has been entered." << endl;
    }
    
    
    if (score >= 90 && score <= 100)   // && is "AND";  || is "OR"
    {
        cout << "You got an A!" << endl;
    }
    

    
    return 0;
}
