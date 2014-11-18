/// @file rps_manyGames.cpp
/// @author Adam Koehler
/// @date November 17, 2014
/// @brief An implementation of rock, paper, scissors to help explore the
///         concepts of branches, booleans, loops, randomness, and functions.
///         This extension, incorporates function prototypes, void functions,
///         and looping to play multiple games. Functions are all pass-by-value.

#include <iostream>
#include <cstdlib>

using namespace std;

// Define global constants to represent the three possible choices.
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

// A function header has three parts:
//  1) return type, 2) function name, and 3) paramters list

// Function prototypes provide all the information from a function header
//      that is required when invoking a function. The return type, function
//      name, and the types of all the parameters.
// Function prototypes declare a function and the function definition with 
//      full function body can come at some point later.
void displayMenu();
int getChoice(int);


// Implement the core algorithm of Rock, Papers, Scissors
int main()
{
    // Not all constants are defined globally. Constants used only in a single
    //  function should be defined with the other local function variables.
    const int numGames = 5;
    
    // seed randnom number generator with the current time in seconds
    srand(time(0));
    
    // Variables for player choices
    int p1Choice, p2Choice;
    
    // Variables to say who has won, initially false because no one has won
    bool p1Wins;
    bool p2Wins;
    
    // Q: What algorithm do we wish to use?
    // A:   Step 1: get choices, rock paper scissors
    //      Step 2: decide winner
    // Generally we will want to flesh out our algorithm with a few more steps

    // We want to play a certain number of games.
    for (int p = 0; p < numGames; p++)
    {
        // When playing a game more than once, we must start each game with 
        //      the same values.
        p1Wins = false;
        p2Wins = false;
        
        // Play a single game of rock, paper scissors
        do 
        {
            // 1 get choices, rock paper scissors
            p1Choice = getChoice(1);
            
            // We can either have a second player that is human or a computer
            // When the player is human, get another choice using the same function
            //p2Choice = getChoice(2);
            
            // When the player is a computer assign the choice randomly
            p2Choice = 1 + rand() % 3;
            
            // Our general formula for creating a random number in a certain range
            //  is:
            //      min_num + rand() % range
            //  the formula to compute the inclusive range is: max - min + 1 which 
            //  leads to:
            //      min + rand() % (max-min+1)
            
            
            // Step 2: decide winner
            if(p1Choice==ROCK)
            {
                if (p2Choice==SCISSORS)
                {
                    p1Wins = true;
                }
                else if (p2Choice == PAPER)
                {
                    p2Wins = true;    
                }
            }
            else if(p1Choice==PAPER)
            {
                if (p2Choice==SCISSORS)
                {
                    p2Wins = true;
                }
                else if (p2Choice == ROCK)
                {
                    p1Wins = true;    
                }
            }  
            else // p1Choice is SCISSORS
            {
                if (p2Choice==PAPER)
                {
                    p1Wins = true;
                }
                else if (p2Choice == ROCK)
                {
                    p2Wins = true;    
                }
            }     
            
        } while(!p1Wins && !p2Wins); // when there is a tie, go again!
        
        // Output result of rock, paper scissors
        if (p1Wins)
        {
            cout << "Player 1 wins." << endl;
        }
        else if (p2Wins)
        {
            cout << "Player 2 wins." << endl;
        }
    }
    // Q: Can we utilize an else versus an else if?
    // A:   Yes, we can since our loop will only stop when a winner is 
    //      determined.  But before we created the loop to always determine
    //      a winner, the else if is necessary because a tie may have been 
    //      the result and therefore both p1Wins and p2Wins would have 
    //      been false.
    
    
    return 0;
}


/// @brief get a choice of rock, paper, or scissors from the user
///
///     The choice will be a number based on the global constant values for
///     rock, paper, and scissors.
/// @param player the integer number corresponding to the player
/// @return the user provided integer respresenting rock, paper, or scissors
int getChoice(int player)
{
    int playerChoice;
    
    // Display the menu of choices
    displayMenu();
    
    // Output the prompt and acquire the player's choice
    cout << "Player " << player << ", please enter the number associated "
        << "with your choice: ";
    cin >> playerChoice;    
    cout << endl;
    
    // Send the player's choice back
    return playerChoice;
}

/// @brief display the menu for rock, paper, and scissors using the constant
///     values that have been defined
void displayMenu()
{
    cout << ROCK << ": Rock" << endl;
    cout << PAPER << ": Paper" << endl;
    cout << SCISSORS << ": Scissors" << endl;    
}
