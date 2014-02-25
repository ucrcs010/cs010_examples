/// @file intro.cpp
/// @author Adam Koehler
/// @date November 14, 2013
/// @brief Code snippets and comments utilized in lecture to 
///        discuss pseudo random numbers.
///

#include <iostream>
#include <cstdlib>  // this is required for srand() and rand()
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    double cost = 45.12345678901234567890;
    
    cout << '$' << cost << endl;
   
    cout << fixed << setprecision(20);
    
    cout << cost << endl;
     
    /*
    int num = 5;
    // numbers 1 through 5
    
    
    for ( int i = 1; i <= num; i = i + 2)
    {
        if ( i >= num - 1 )
        {
            cout << i << endl;
        }
        else
        {
            cout << i << ", " ;
        }
    }
    
    */
    
    // rand() returns a PSEUDO-RANDOM INT
    srand( time(0) );
    /*
    for (int i = 0; i < 10; ++i)
    {
        cout << rand() << endl;
    }
    
    */
    
    /*
    // We only call srand a single time
    // We can use time(0) to get the current system time so that runs that 
    //  are at least a second apart will generate different random values.
    srand( time(0) );
    
    // General random number equation for random number in a range (inclusive)
    //              ( RANGE Eq.   )
    // min + rand()%(max - min + 1)
    
    // output three random numbers
    cout << rand() % 100 << "\t"
        << 1 + rand() % 6 << "\t"
        << rand() % 2 << "\t" << endl;
        
    */
    
    return 0;
}