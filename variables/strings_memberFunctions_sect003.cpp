/// @file string_memberFunctions.cpp
/// @author Adam Koehler
/// @date October 24, 2014
/// @brief Code snippets and comments utilized in lecture on 10/24/14 to 
///        discuss string member functions.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string member functions
    // To invoke a string member function we use: 
    //      stringName.functionName(arguments);
    
    string s = "hello";
    
    // One function, size(), allows us to determine the number of characters in 
    //      the string.
    //      length(), size() -  # of characters within the string
    
    // given a previously initialized string s, get its size
    int x = s.size();   // x will get 5, the size of string s     
    
    //      "hello", 5 characters
    //      "hello world", 11 characters
    //      "hello my\n", 9 characters
    
    
    
    // Another function at() allows us to access or modify 
    //      specific characters of the string
    // s.at(int) -- access or modify a specific index in string

    // Strings have index values associated with each 
    //      character starting at 0
    char current = s.at(0); // current gets the character at index 0, 'h'
    current = s.at(3);      // current gets the character at index 3, 'l'


    // Another function, find(), allows us to find a character or
    //      string within the string
    // s.find(char) -- find the specific character 
    // s.find(string) -- find the specific string
    // find will return the index of the character or the index
    //      of the first character in the string that it is searching for
    // find will return string::npos when nothing is found
    int location = s.find('o'); // location is assiged 4, the index of 'o'
    location = s.find("llo");   // location is assiged 2, the index of 'l'
    location = s.find('l');     // location is assiged 4, the index of the first 'l'
    location = s.find('b');     // location is assigned string::npos because nothing is found

    if (s.find('b') != string::npos)
    {
        // means that it found a 'b'
    }

    
    if (s.find('b') == string::npos)
    {
        // no 'b' found
    }

    return 0;
}