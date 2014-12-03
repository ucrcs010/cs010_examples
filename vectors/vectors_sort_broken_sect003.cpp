/// @file vectors_intro.cpp
/// @author Adam Koehler
/// @date December 1, 2014
/// @brief Code snippets and comments utilized in lecture on 12/1/14 to 
///        discuss vetors and sorting.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// @brief find index of first max value of vetor before and including endPoint
// @param v the vector to search through
// @param endPoint the last index in the vector to search
// @return the index within the vector of the first max value discovered
int findMax(const vector <int> &v, int endPoint)
{
    int locMax = v.at(0);
    for(int i=1; i <= endPoint; i++)
    {
        if (v.at(locMax) < v.at(i))
        {
            locMax = i;
        }
    }
    
    return locMax;
}


int main()
{
    // declare the vector and variables for the program
    vector <int> myV(5);
    int curEnd, location;
    
    // set 5 initial values
    myV.at(0) = 3;
    myV.at(1) = 7;
    myV.at(2) = 5;
    myV.at(3) = 1;
    myV.at(4) = 2;
    
    
    // print out the vector
    cout << "Before: ";
    for(int i=0; i < myV.size(); i++)
    {
        cout << myV.at(i) << ' ';
    }
    cout << endl;

    
    // sort the vector
    for(int i=1; i <= myV.size(); i++)
    {
        // trim the search area down 1 item with each iteration
        curEnd = myV.size() - i;
        
        // only search a subset of the vector for the max value, 0 to curEnd
        location = findMax(myV, curEnd);
        
        // swap the max value to the end of the vector
        swap(myV.at(location), myV.at(curEnd));
    }
    
    // print out the vector
    cout << "After:  ";
    for(int i=0; i < myV.size(); i++)
    {
        cout << myV.at(i) << ' ';
    }
    cout << endl;
}



















