/// @file branches_intro.cpp
/// @author Adam Koehler
/// @date October 18, 2013
/// @brief Code snippets and comments utilized in lecture on 10/18/13 to 
///        discuss branches.

#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    
    // We utilize "literal == variable" to avoid assignment on accident 
    // when we mistype our equality check with a single equal sign "score = 0"
    if (0 == score)
    {
        cout << "A zero, what!?" << endl;
    }
    else
    {
        cout << "At least you didn't get a zero." << endl;
    }
 
    return 0;   
}