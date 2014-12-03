/// @file function_basic_references.cpp
/// @author Adam Koehler
/// @date November 24, 2014
/// @brief Example functions used on 11/24/2014 in lecture to 
///         discuss an introduction to pass by reference variables.

// Three possible proper ways to state pass by reference
void q(int& x);
void q(int & x);
void q(int &x);

// pass by reference uses the & to denote reference parameter
// variable x points back to the provide variable


int main()
{
    int y = 5;
    
    // the variable y is passed by referece so q's pass by reference parameter
    //      x points back to the variable y in main
    q(y);
    
    // BAD because q's parameter is pass by reference and thus need a space
    //      in memory to point back to and a literal does not have such a space
    q(5);
    
    
}