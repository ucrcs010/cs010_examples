/// @file vowels_counter.cpp
/// @author Adam Koehler
/// @date October 30, 2013
/// @brief Code and comments utilized in lecture on 11/01/13 to 
///        discuss nested loops and counting.

#include <iostream>
using namespace std;


// As we move into nested blocks, if's inside loops which is all in a loop
// or some combination of nesting you will notice that indetantion and style
// becomes VERY important. It will make your bugs easier to track down and your
// code more easily deciphered by yourself and by others (such as instructors).

// One major point of emphasis as our programs become larger is the ability to 
// transition from a specification to actual code. It is not in your best 
// interest to do all of that in one step. You shouldn't just read the spec and
// sit down and start coding. Breaking the spec into steps (sometimes we give 
// them to you directly) will allow you to more efficiently solve the problems
// we give to you. Do some pre-work on paper, transition English into statements
// in comments thus breaking the algorithm into comments, 
// lastly go from comments to actual code.


int main()
{
    // When counting, we always utilize integers
    int total, current;
    
    // We need to get a group of characters, a word, from the user; no spaces
    string word;
    string sentence;
    
    // We need a variable to store the character, then we can determine if
    // this character is a vowel.
    char c;
    
    // Counters always start at 0, so the count is correct if we never see 
    // what we are counting
    total = 0;
    current = 0;
    
    
    // AFTER WRITING FOR A SINGLE WORD:
    // Q:   How can we adapt the above input to be for a series of words
    //      terminated by the word aeiouy?
    
    // Q:   We need to utilize a loop, what kind of loop should we use?
    
    //      Note how to indent an entire block, highlight then press tab. Or, 
    //      to move an entire highlighted block back we can use shift+tab.
    
    // We need an identifier to know when to stop. This is called a sentinel
    // value. The best sentinel value is something that is an option or not
    // a possible entry value. For example, if entering grades, -1 would be a 
    // good sentinel value. Here we are inputting words, so an impossible word
    // would be a good sentinel value; let's use the string "aeiouy".
    
    // We could hard code our sentinel value comparison where ever it is needed
    //  but that would make changing our code more difficult once we 
    //  use that value more than a few times. So we should define a 
    //  constant for it.
    const string SENTINEL = "aeiouy";
    
    
    
    // Aquire a word through input
    cout << "Please enter a word (or " << SENTINEL << " to quit): ";
    cin >> word;
    cout << endl;
    
    
    //while(word != "aeiouy")
    while (word != SENTINEL)
    {
        // Notice that our vowel count that we print out is incorrect after 
        // the first word. 
        
        // Q:   What is the value of the counter on the second iteration
        //      where the first word was "hello"?
        
        // Q:   Where do we initialize our counter for the current
        //      word's vowels? 
        // Q:   Should every iteration start at the previous iteration's count?
        //      Or what value should we start at?
        current = 0;
        
        // We need to go over the entire word that was provided,
        // character by character determining whether the character we are
        // looking at in each iteration is a vowel.
        
        // When traversing a string:
        //  Q:  What is the first possible index?
        //  Q:  What is the last possible index? 
        //  Q:  What is the update / step size?
        for(int i=0; i < word.size(); i++)
        {
            // First we need to acquire a character. We can't determine if 
            //  something is a vowel or not without having a character to check. 
            //  We cannot check the entire word all at once, just a single
            //  character at a time.
            
            // Q:   What string member function allows us to get an 
            //      individual char?
            // Q:   What variable represents the index of the string that 
            //      changes from the first possible index to the last 
            //      possible index?
            c = word.at(i);
            
            
            // Q:   How can we utilize our character and determine if it 
            //      is a vowel?
            // Q:   Can we simply do if (c == a)?
            // Q:   Do we want    if/if/if/if/if/if   OR
            //                    if/else-if/else-if/else-if/else-if/else-if  OR
            //                    if/else-if/else-if/else-if/else-if/else
            // if (c == 'a')
            // {
            //     current++;
            // }
            // else if (c == 'e')
            // {
            //     current++;
            // }
            // else if (c == 'i')
            // {
            //     current++;
            // }
            // else if (c == 'o')
            // {
            //     current++;
            // }
            // else if (c == 'u')
            // {
            //     current++;
            // }
            // else if (c == 'y')
            // {
            //     current++;
            // }
            
            // Q:   Can we combine these into a single conditional check?
            //          Notice that all the branches have the same statement
            //          inside the block when true.
            // Q: If we combine the conditions, should we use && or ||?
            
            // Notice how we indent the continuation line but the curly braces 
            //  still belong on the same column as the 'i' in the if statement
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
                c == 'y')
            {
                current++;
            }
            
            // Q: If we want to output the vowel count when the word is 
            //      finished, can we output the vowel count for the 
            //      current word here?
        }
        
        // Output the vowel count for the word we are currently looking at.
        // Utilize correct grammar when only 1 vowel exists.
        if (current != 1)
        {
            cout << "There are " << current << " vowels in the word: " << word 
                << "." << endl;
        }
        else
        {
            cout << "There is " << current << " vowel in the word: " << word 
                << "." << endl;        
        }
        
        
        // Q:   How can we keep track of the total number of vowels?
        
        // We want to utilize a running total, which means we have a value
        //  and we want to add another value to it. We have seen this already
        //  with i++, we have a value in the variable i and we want to add 1 
        //  to it. i++ actually means i = i + 1, notice how the variable i is 
        //  utilized on both sides of the assignment operator. The right side
        //  acquires the current value and uses it in addition then the new
        //  value is assigned into i.
        total = total + current;
        
        // Q:   How can we make a string that contains all the words that 
        //      the user enters? (remember the concatenation operator)
        if (sentence.size() > 0)
            sentence = sentence + " " + word;
        else
            sentence = sentence + word;
        
        // Q:   Before the next iteration of the loop, what is checked?
        // Q:   Has the value of the variable changed?
        // Q:   How can we change it, how did we initially change it?
        
        // Aquire a word through input
        cout << "Please enter a word (or " << SENTINEL << " to quit): ";
        cin >> word;
        cout << endl;
        
        // If we were calculating a running total, we should probably output it.
        // Q:   Where should we output it?
    }
    
    // Let's output the total of all the vowels counted.
    cout << "The sentence: \"" << sentence << "\" contains "
        << total << " vowels across all the words." << endl;
        
    return 0;
}
