/// @file vectors_intro.cpp
/// @author Adam Koehler
/// @date March 2, 2015
/// @brief Code snippets and comments utilized in lecture on 3/2/15 to 
///        discuss vectors.


// 1: What is a vector?
//      a collection of data --- vector of characters similar to string



// 2: How many types can be stored in a single vector?
//      one type per vector


// 3: What member functions, which overlap with strings,
//      exist for vectors?
//      
//      at(), size() --- both cross from string to vector
//      find() --> dependence on type, must write our own



// 4: What other member functions exist for vectors?
//      push_back(element) -> increase size, push element on end of vector
//      pop_back() ---> reduce size of vector by 1



// 5: Define a vetor
// pre-allocated
//      vector <collection_type> name(size);
//      fill with a value, 0 for integers, 0 for characters, "" for strings
// empty
//      vector <collection_type> name;


// Possible definitions:
vector <int> myV(9);
vector <int> myX;

// Using a member function
myV.at(0) = 1;


#include <iostream>
#include <vector>

using namespace std;


int main()
{
    string s;
    vector <string> v;
    
    // keep acquiring input until no more input exists
    while (cin >> s)
    {
        v.push_back(s);
    }
    
    // get the 5th string from v
    cout << v.at(4) << endl;
    
    // output the 1st character of every string in v
    for(int i=0; i < v.size(); i++)
    {
        // s = v.at(i);
        // cout << s.at(0) << endl;
        // for every dimension we need 1 at
        cout << v.at(i).at(0) << endl;
    }
    
    return 0;
}
