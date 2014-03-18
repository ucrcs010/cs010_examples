#include <iostream>
#include <cstdlib>

using namespace std;

/// @brief: what does function do?
/// @param1 - what information does the function need to do its job?
/// @param2 etc
/// @return: what data type does function return? 
/// @par: algorithm (if not obvious)
char randChar( char, char );  // function prototype or declaration

/// @brief: this function returns a roll of a die
/// @param int sides - number of sides of the die
/// @return int, representing the random value rolled {1, sides}
int randRoll( int );

int main()
{
    srand( time(0) );
    
    // invoke randRoll:
    int r;
    int sides = 12;
    r = randRoll( sides );
    cout << randRoll( sides );
    
    
    char letter;
    letter = randChar( 'g', 'k' ); // invocation
    cout << letter;
    
    for (int i = 0; i < 10; ++i)
    {
        cout << i;
    }
    
    cout << i;
    
    return 0;
}

//function definition
char randChar( char first, char last )
{
    int range = last - first + 1;
    char randC = static_cast<char>(first + rand() % range);
    
    return randC;
}

int randRoll(int sides)
{
    return 1 + rand() % sides;
}
