
#include <iostream>

using namespace std;

int main()
{
    string word = "This is a string";
    
    string otherWord = word;
    
    string sentence;  // default construction
    
    string filler(12, '!');
    
    cout << word << '\n' << otherWord << '\n' << filler << endl;
    
    
    
    return 0;
}