/// @file wordCounting.cpp
/// @author Adam Koehler
/// @date February 20, 2015
/// @brief Code snippets and comments used to discuss and write functions.

#include <iostream>
#include <string>

using namespace std;

// First:
// Given a character, write a predicate function that returns 
//  whether the provided character is a vowel 
//  (y counts as a vowel)
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || 
        c == 'u' || c == 'y')
    {
        return true;
    }

    return false;

}

// Second: 
// Given a word, write a function that will count & return 
//  the number of vowels that are contained within the 
//  provided word
int countVowels(string word)
{
    int count = 0;
    
    for (int i=0; i < word.size(); i++)
    {
        if (isVowel(word.at(i)))
        {
            count++;
        }
    }
    
    return count;
}

// Third: 
// Given a word, write a function that will count & return 
//  the number of consonants that are contained within the 
//  provided word
int countCons(string word)
{
    int count = 0;
    
    count = word.size() - countVowels(word);
    count--;
    
    return count; 
}

// Fourth: 
// Write a function called testCons that tests the consonant 
//  counting function with several different possible word 
//  scenarios
void testCons()
{
    int result;
    // test "sky" - 1 vowel at end
    // test "confounded" - mix of many
    // test "bcdf" - no vowels
    // test "aeiouy" - no consonants, "y"
    
    result = countCons("sky");
    if (2 != result) 
    {
        cout << "testing \"sky\" found " << result << " wanted 2" << endl;
    }
    
    result = countCons("bcdf");
    if (4 != result) 
    {
        cout << "testing \"bcdf\" found " << result << " wanted 4" << endl;
    }
    
    result = countCons("aeiouy");
    if (0 != result) 
    {
        cout << "testing \"aeiouy\" found " << result << " wanted 0" << endl;
    }
    
    result = countCons("confounded");
    if (6 != result) 
    {
        cout << "testing \"confounded\" found " << result << " wanted 6" << endl;
    }    
    
}

// main used simply to call our testing function
int main()
{
    testCons();
    return 0;
}




// Lastly: 
// Write a main function that iterates over an input file of words and outputs
//  each word and its number of vowels and consonants, such as:
//      The word yellow contains 2 vowels and 3 consonants.
//  Lastly, the main function should keep track of the total vowels, total
//  consonants, and total words within the input file. Once all input words are 
//  processed the main program should output the totals, such as:
//      Across 31 words there are 50 vowels and 79 consonants.