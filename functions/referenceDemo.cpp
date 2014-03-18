#include <iostream>
using namespace std;

// With VALUE parameters:
// each argument is evaluated, and the resulting value is used to INITIALIZE
// the corresponding parameter (local) variable.
// with value parameters, the only way to get info OUT of the function
// is via the return.
char function1( int a, double x, string s );

// With REFERENCE parameters:
// the local parameter variable is now just a "temporary alias" for the
// ARGUMENT VARIABLE.
bool function2 ( double x, const string & s ); 

// declare someFunction
void someFunction( string & str )

int main()
{
    double value;
    string s;
    
    if ( function2(value, s) )
    {
        someFunction( s );
    }
    
    return 0;
}

























void someFunction( const string& word )
{
    
    // ... process word
    
    // return;
}
