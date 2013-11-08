/// @file wordBubbler.cpp
/// @author Adam Koehler
/// @date November 8, 2013
/// @brief Example utilized in class on Noverember 8, 2013.
///
///     In the example we demonstrate a generation of a random character from
///     a provided possible range of characters. Then we take that and write
///     a simple function utilizing the same logic.
///
///     This example emphasizes the following concepts (it may include others):
///         1) function stubs
///         2) functions that return a character
///         3) functions which contain an expression in the return statement

#include <iostream>
#include <cstdlib>


using namespace std;

// function stubs implement the function header and returns value of a 
// valid type such that the program will compile and other code can invoke the 
// function properly but the logic of the entire program will not work out until
// the function has been properly implemented.
// char randomLetter(char min, char max)
// {
//     return 'q';
// }

/// @brief Generates a random char between and including two designated chars
/// @param min the first char in the range of random characters to choose from
/// @param max the last char in the range of random characters to choose from
/// @return a random character from the range of possible characters
char randomLetter(char min, char max)
{
    // char c='0';
    // c = min + rand()%(max - min + 1);
    // return c;
 
    return min + rand()%(max - min + 1);
}


int main()
{
    srand(time(0));
    // char max = 'a' - 1;
    // char min = 'Z' + 1;
    // int range = max - min + 1;
    // int r = min + rand() % (range);
    
    // char r = 'Z' + 1 + rand() % ('a' - 'Z' - 1);

    
    cout << 'Z' + 1 + rand() % ('a' - 'Z' - 1) << endl;
    cout << static_cast<char>('Z' + 1 + rand() % ('a' - 'Z' - 1)) << endl;
    
    // When calling a function we can either store it for later or use it
    // We should test with lots of different values to verify our function
    // works, including values at the low end and high end of our range
    char c = randomLetter('a', 'z');
    cout << c << endl;
    cout << randomLetter('Z', 'a') << endl;
    cout << randomLetter('A', 'z') << endl;

    
    return 0;
}