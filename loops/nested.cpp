#include <iostream>

using namespace std;

int main()
{
    int height = 4;
    int width = 15;
    // for rectangle, use both h & w
    // for triangle, use only height
    
    // for loops - "counter" controlled loop
    // while loops - "Sentinel" controlled loops
    
    // this exercise - for loops
    
    // there are n numbers in the range {0, n-1}
    for ( int i = 0; i < height; ++i )
    {
        // o/p row of asterisks
        for (int j = width; j > i ; --j)  // int j = 1; j < i; ++j
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    
    /*
    
    * * * *
    * * *
    * *
    * 
    
    * * * *
      * * *
        * *
          *
    
    
    
    */
    
    
    
    
    return 0;
}