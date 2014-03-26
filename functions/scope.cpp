#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cout << "x is " << x;
    while ( x < 10 )
    {
        int x = 20;
        cout << "\nx is " << x;
    }
    
    cout << "\nx is " << x << endl;
    
    return 0;
}

// The SCOPE of a local variable is just the function in which it is declared
// More precisely:
// The SCOPE of any variable is the region of code starting from 
// the variable's declaration, and going to the end of the code block ( '}' )
// in which it is declared.