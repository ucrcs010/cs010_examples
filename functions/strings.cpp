#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "prompt";
    
    // user types "hello world" <enter>
    while( cin >> word )
    {
        cout << word << endl;
    }
    
    // EoF is ctrl-D
    
    // substr member function
    // word.at(i) -> returns the char at location i in word.
    // word.find("..") -> returns int, location of the string requested
    // word.size() -> returns int, size (# of characters in word)
    
    // if word contains "hello"
    // then word.substr(1, 3) -> "ell"
    // word.substr(1) -> "ello"
    
    // overlap:
    // overlap lapdog => overLAPdog
    // overlap turnover => turnOVERlap
    
    
    
    return 0;
}

// create a text file mytext.txt with a "plain text editor"
// NOT a Word processor like MS Word (they use a "markup language")

// run your program using "input redirection"
// run myprogram.out < mytext.txt
