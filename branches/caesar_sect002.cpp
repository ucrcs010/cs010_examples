/// @file caesar.cpp
/// @author Adam Koehler
/// @date February 2, 2015
/// @brief Code snippets and comments used to discuss strings and
///        string member functions within encryption/decryption


// In cryptography, a Caesar cipher is also known as 
//  the shift cipher. This cipher is one of the simplest and most 
//  widely known encryption techniques. 
// Caesar cipher is a type of substitution cipher in which 
//  each letter in the plaintext is replaced by a letter 
//  some fixed number of positions down the alphabet. 
// For example, with a left shift of -3, 
//  D would be replaced by A, 
//  E would become B, and so on. 
// To decrypt, you simply shift backwards the same shift amount.

#include <iostream>
using namespace std;

int main()
{
    // Assume lowercase letters and word size of 3.
    // Implement caesar cipher printing out the encrypted word 
    // and then do decryption case printing out decrypted word 
    // at end. If your algorithm is correct, the user's word 
    // should be output at the end
    int shift = 0;
    string option; 
    string word;
    
    // encryption or decryption?
    cout << "Would you like to encrypt or decrypt?";
    cin >> option;
    cout << endl;
    
    // acquire shift value
    cout << "What is the caesar shift value? ";
    cin >> shift;
    cout << endl;
    
    // acquire the word to encrypt
    cout << "What word would you like to encrypt? ";
    cin >> word;
    cout << endl;    
    
    // the shift value should be no greater than shifting 
    // across the entire alphabet from first to last letter
    int maxShift = 'z' - 'a';
    
    // update the shift value to be within max range, [0, maxShift]
    shift = shift % maxShift;
    
    // Q: How do we know maxShift and modifying shift works?
    // Q: How can we show it? (not necessarily prove conclusively)
    
    
    // Q: How can we convert the following loop to a for loop?
    // Q: Why should we be using a for loop?
    
    
    if ("encrypt" == option)
    {
        // go over the entire word and convert the letters
        int i = 0;
        while (i < 3)
        {
            word.at(i) = word.at(i) + shift;
            
            // when converting to a loop we do not need the individual updates
            //      as a single index is handled per iteration of the loop
            // word.at(1) = word.at(1) + shift;
            // word.at(2) = word.at(2) + shift;
            
            if (word.at(i) > 'z')
            {
                word.at(i) = word.at(i) - 26;
            }
            i++;
        }
    }
    
    // Q: How can we add decryption?
    
    
    // Output the phrase for option chosen by the user
    if ("encrypt" == option)
    {
        cout << "Encrypted word: ";
    }
    else
    {
        cout << "Decrypted word: ";
    }
    
    // Output the converted word
    cout << word << endl;

    return 0;
}
