/// @file branches_debug.cpp
/// @author Adam Koehler
/// @date October 18, 2013
/// @brief Code snippets and comments utilized in lecture on 10/18/13 to 
///        discuss branches.

// Branches can make our programs significantly longer and occassionally they
// do similar things but only slightly different. When our code compiles but
// is not performing correctly this is a logic bug. To track down which branch
// is executing when our program runs, we use simple output statements to
// identify which pieces of code are running. For example, given the following
// if-else statement we can insert a "cout << 'a' << endl;" and a 
// "cout << 'b' << endl;" and so on for each if-else if-else block.
//
// Then when the program executes we will see that character in our output and 
// we can track which block the program is going into and from there we can walk 
// through our code by hand and identify our logic error. This helps identify
// a specific area for our potential problem versus walking through the entire
// program by hand.

#include <iostream>
using namespace std;

int main()
{
    int s;
    int q = 0;
    
    cout << "Enter a number: ";
    cin >> s;
    cout << endl;
    
    // We can hard code an assignment into our program to test a specific branch
    s = 3;
    
    if (0 == s)
    {
        cout << 'a' << endl;
        q = q + 1;
    }
    else if (1 == s)
    {
        cout << 'b' << endl;
        q = q + 2;
    }
    else if (2 == s)
    {
        cout << 'c' << endl;
        q = q + 2;
    }
    else if (3 == s)
    {
        cout << 'd' << endl;
        q = q + 4;
    }
    else
    {
        cout << 'e' << endl;
        q = q + 5;
    }
    
    return 0;
}
