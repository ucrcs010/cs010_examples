#include <iostream>

using namespace std;

int main()
{
    // 1) set up loop (initialize counter, input ...)
    // 2) test conditional  -> true/false
    // 3) if we enter loop body: update the loop values
    // then repeat from 2
    cout << "prompt: ";
    int num;
    cin >> num;
    // iterate num times
    
    for (int i = 0; i < num; ++i)   // ++i; => i = i + 1;
    {
        cout << i << ":\n   ";
        for (int j = 0; j < num; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
    cout << endl;
    
    return 0;
}

// iterate over the characters in a string:
/*
    string  word;
    cin >> word;
    
    for ( int i = 0; i < word.size(); ++i )
    {
       
       
    }
    
*/
    