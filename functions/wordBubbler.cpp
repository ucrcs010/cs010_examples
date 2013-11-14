/// @file wordBubbler.cpp
/// @author Adam Koehler
/// @date November 8, 2013
/// @brief Example utilized in class on Noverember 4, 6 and 8 of 2013.
///
///     In the example we acquire a word from the user and draw it out to the 
///     screen in different colors with each letter being encased by a bubble.
///     We utilize animation and clearing the screen to show each letter 
///     highlighted from the first letter to the last.
///
///     This example emphasizes the following concepts (it may include others):
///         1) global constants
///         2) function prototypes
///         3) do-while loops
///         4) void functions (procedures)
///         5) predicate functions (functions that return a bool value)
///         6) concatenation (combining strings utilizing the + operator) 

#include <iostream>
#include <cstdlib>

using namespace std;

// Escape sequence color codes 
const string CLEAR_COLORS = "\e[0m";
const string CYAN_BOLD = "\e[1;36m";
const string YELLOW_BOLD = "\e[1;33m";

// Function prototypes
void animationPause();
void clearScreen();
bool validWord(string);
void drawBubbleWord(const string, const int, const string, const string);


// Constants 
const bool CLEARING_SCREEN = true;
const bool ANIMATE = true;
const int TIME = 600000;  // time step for animation pausing


// a function stub is a definition of the function that implements the skeleton
// but does not implement any of the logic. it allows the program to compile 
// and execute, although the execution may produce improper or incomplete values
string createT()
{
    return "";
}


int main()
{
    srand(time(0));
    
    // word to output in the bubbles 
    string word;
    
    do
    {
        clearScreen();
        
        // do-while loops are are great choice for loop when attempting to
        // validate a certain input and not moving on until a valid input is 
        // acquired from the user
        // HOWEVER, the prompts to request input must all be the same
        do
        {
            // Acquire the word from the user and validate it
            cout << "Type a word (lower case letters only): ";
            cin >> word;
            cout << endl;
        }while(!validWord(word));

        // We could highlight a random letter in our word. Here we mod by our
        // range of indeces for a string which is 0 to word.size() and
        // does not include word.size() in the range so we don't add 1
        //int oddBall = rand()%word.size();
        
        // To highlight each letter we need to step through our word one letter
        // at a time.
        for(int oddBall=0; oddBall < word.size(); oddBall++)
        {
            // We want every print out to consume the same spot in the terminal
            // visually replacing what was there before. So, we can clear the 
            // screen before the output so our output begins in the same spot
            // with every loop iteration.
            clearScreen();
            
            // Now we invoke (call) our function so that our word is drawn
            // out to the screen in bubbles.
            drawBubbleWord(word, oddBall, CYAN_BOLD, YELLOW_BOLD);
            
            // Lastly we want to add a slight pause.  If we don't pause then the
            // computer will do all the actions so quickly we will only see the 
            // final step which is the last letter highlighted.
            animationPause();
        }
    }while(word != "exit");  // Stop the loop when we bubbled the word exit
    
    return 0;
}

/// @brief draw a word within bubble letters, coloring the letters appropriately
/// @param word the word to place in the bubbles
/// @param oddBall the index of the character to be highlighted
/// @param normal the color code string of the normal letters (non-highlighted)
/// @param highlight the color code string for the highlighted character
void drawBubbleWord(const string word, const int oddBall, const string normal, 
    const string highlight)
{
    // We have to build the output before we can output to the screen because
    // we cannot easily go up, down, left and right so it must all be built
    // before getting sent to the screen. Once its output it cannot be changed.
    string line1, line2, line3, line4;
    
    // Create a space string that has enough space to center the bubbled letter
    // within a terminal that has a width of 80 characters
    const string space((80 - (word.size()*4+2))/2, ' ');
    
    // We need to build each of the lines and each of the letters in the word
    // is surrounded by a bubble. This means we can break down each line to 
    // be a series of string concatenations where the number of concatenations
    // is based on the size of the word
    for(int i=0; i < word.size(); i++)
    {
        line1 += "  _ ";
        line2 += " / \\";
        line4 += " \\_/";
        
        // line3 isn't that difficult to implement so it is probably best to
        // build it here, but it involves a special case since we want to 
        // highlight a single character.
        if (i == oddBall)
        {
            // Character 0 is different, it doesn't have a space before the
            // parethesis that starts the bubble
            if (i == 0)
                line3 = line3 + "( " + highlight + word.at(i) + CLEAR_COLORS;
            else
                line3 = line3 + " ( " + highlight + word.at(i) + CLEAR_COLORS;
        }
        else
        {
            // Character 0 is different, it doesn't have a space before the
            // parethesis that starts the bubble
            if (i == 0)
                line3 = line3 + "( " + normal + word.at(i) + CLEAR_COLORS;
            else
                line3 = line3 + " ( " + normal + word.at(i) + CLEAR_COLORS;
        }
    }
    
    // line3 needs the ending parenthesis
    line3 += " )";
    
    // output all the lines
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line4 << endl;
}


/// @brief check if a word is valid by verifying it is all lower case letters
/// @param word the word to validate
/// @return return true if the word is all lower case letters, otherwise false
bool validWord(const string word)
{
    for(int i=0; i<word.size(); i++)
    {
        if(!islower(word.at(i)))
            return false;
    }
    
    return true;
}


/// @brief sleeps for a bit, to animate program
void animationPause()
{
    // When animating, sleep for a defined amount of time
    if (ANIMATE)
        usleep(TIME);
}

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen()
{    
    cout << endl << endl;
    if (CLEARING_SCREEN)
        cout << "\033c";
    cout << endl;
}
