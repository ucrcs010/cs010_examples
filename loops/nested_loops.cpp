/// @file nested_loops.cpp
/// @author Adam Koehler
/// @date October 25, 2016
/// @brief Code snippets and comments utilized in lecture on 10/25/16 to 
///        discuss nested loops.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sideSize = 4;
    
    // take in size of side
    cin >> sideSize;
    
    // draw a square to output using nested loops
    // use for loops because we know the iteration count
    // nested means one loop inside another
    //
    //  * * * * 
    //  * * * *
    //  * * * *
    //  * * * *
    for(int r=0; r < sideSize; r++)
    {
        for(int c=0; c < sideSize; c++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    cout << endl << endl;
    
    // draw a right isosceles triangle
    //
    //  * * * * 4 - 0
    //  * * *   4 - 1
    //  * *     4 - 2
    //  *       4 - 3
    for(int r=0; r < sideSize; r++)
    {
        for(int c=0; c < sideSize - r; c++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    cout << endl << endl; 
    
    // draw a right isosceles triangle
    // other half of square
    //
    //        * 
    //      * * 
    //    * * *   
    //  * * * * 
    for (int r=1; r <= sideSize; r++)
    {
        for (int c=1; c <= sideSize - r ; c++)
        {
            cout << '*' << ' ';
        }
        
        for(int c=1; c <= r ; c++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
        
    
    return 0;
}