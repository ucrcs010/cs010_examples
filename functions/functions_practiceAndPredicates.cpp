/// @file functions_practiceAndPredicates.cpp
/// @author Adam Koehler
/// @date November 15, 2016
/// @brief Code snippets and comments utilized in lecture on 11/15/16 to 
///        discuss functions, write functions, and predicate functions.

// What do we need to do to check whether a 
// function call is valid?

// 1) the name - function header versus call
// 2) parameter types versus argument types
//    x(int a, int b, int c) -- x(1, 2, 3)
// 3) return type matches expected call use
//       sqrt(4); .... double rt = sqrt(4);
// 4) return value: type matches return type

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

// * a function prototype has all the information needed to call a function
// * a prototype may optionally have variable names but they are not required
// * the prototype does not have any of the logic of the function definition
// * prototypes allow the function to be invoked at any point after the 
//      prototype, but the function definition can now exist before or after
//      the function invocation.
bool isVowel(char);

// ICE: Write a function - 
//      count vowels in a word
// ------------------------------
int countVowels(string word)
{
    int n = 0;
    
    // loop over the word one character at a time
    for(int i = 0; i < word.size(); ++i)
    {
        // check whether the character at index i is a vowel
        if (isVowel(word.at(i)))
        {
            // increment the counter because we found a vowel
            n++;
        }
    }
    
    return n;
}


// predicate functions
// --- return true or false
//  If your function only returns true or only returns false, then
//      you should think about the purpose of your function or whether
//      you are missing something.
// --- often named so they can be read similar to a quesiton

// ICE: Write a function that determines whether x, y
// is inside a circle centered at (0,0) given radius r.
bool isInsideCircle(double r, double x, double y)
{
    //return sqrt(x*x + y*y) < r;
    
    // is the distance of the point from the origin
    //  less than the radius of the circle centered
    //  on the origin?
    if (sqrt(x*x + y*y) < r)
    {
        return true;
    }
    
    return false;
}

// determine if a provided character is a vowel
bool isVowel(char c)
{
    if ('a' == c || 
        'e' == c ||
        'i' == c ||
        'o' == c ||
        'u' == c ||
        'y' == c)
    {
        return true;
    }
    
    return false;
}


int main()
{
    int vowels = 0;
    string tester = "hello world";
    
    // Vowel counting!!!!
    // Uses: 
    cout << "The number of vowels in \"" << tester 
        << "\" is " << countVowels(tester) << endl;
    
    // OR
    vowels = countVowels(tester);
    cout << "The number of vowels in \"" << tester 
        << "\" is " << vowels << endl;
    
    
    // Inside a circle?
    double x = 5, y = 3, r = 2;
    cout << "(" << x << ", " << y << ") is ";
    if (isInsideCircle(r, x, y))
    {
        cout << "inside the circle";
    }
    else
    {
        cout << "not inside the circle";
    }
    cout << endl;
    
    
    return 0;
}




