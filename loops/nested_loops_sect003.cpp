/// @file nested_loops.cpp
/// @author Adam Koehler
/// @date November 12, 2014
/// @brief Code snippets and comments utilized in lecture on 11/12/14 to 
///        discuss nested loops.

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int sideSize;
    
    // take in size of side
    cin >> sideSize;
    
    // draw a square to output using nested loops
    // use for loops because we know the iteration count
    // nested means one loop inside another
    for (int row=1; row <= sideSize; row++)
    {
        for (int col=1; col <= sideSize; col++)
        {
            cout << "* ";
          
        }
        cout << endl;
    }
    cout << endl << endl;
    
    // draw a right isosceles triangle
    for (int row=1; row <= sideSize; row++)
    {
        for (int col=1; col <= row; col++)
        {
            cout << "* ";
          
        }
        cout << endl;
    }    
    cout << endl << endl;
    
    // draw a right isosceles triangle upside down
    for (int row=1; row <= sideSize; row++)
    {
        for (int col=sideSize; col >= row; col--)
        {
            cout << "* ";
          
        }
        cout << endl;
    }  
 
    cout << endl << endl; 
    // draw a right isosceles triangle upside down using '-'
    for (int row=1; row <= sideSize; row++)
    {
        for (int col=sideSize; col >= row; col--)
        {
            cout << "- ";
          
        }
        cout << endl;
    }     
    
    return 0;
}