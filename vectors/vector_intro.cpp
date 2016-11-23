/// @file vector_intro.cpp
/// @author Adam Koehler
/// @date November 22, 2016
/// @brief Code to discuss using vectors


// what is a vector
// variable that is a colletion a similar variables

// how many types can a vector hold?
// one

// remember the library
#include <vector>

// declare vector
// vector<double> v(4);
// vector<int> v1;

// vector are always initialized, usually 0
// string -- is also initialed ""

// add/insert items

// increase size by 1
// then put 2 in last spot
// mostly used when starting with empty vect
// v1.push_back(2); 

// used when we have slots already
// v.at(0) = 4;
// v.at(3) = 5.4;
// v.push_back(5); // 4, 0, 0, 5.4, 5
// loop over all the elements and set

// (size, start value)
// vector<double> v3(4, 5);

// defining functions with vectors
// vector<int> hasTrue
//     (const vector<bool> &myBools);
bool hasTrue(const vector<bool> &myBools)
// constant or not for reference parameters
// this is for strings too, const or not but always reference
{
    int sz = myBools.size()
    for (int i=0; i < sz; ++i)
    {
        if(myBools.at(i))
        {
            return true;
        }
    }
    
    // need to check everything before
    // we know there are 0 true items
    return false;
}

int countEvent(const vector<int> &v)
{
    int count = 0;
    for (int i=0; i < v.size(); ++i)
    {
        if (v.at(i) % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
    

// calling functions with vectors
int main()
{
    vector<bool> v(4, false);
    bool myVal = hasTrue(v);
    // hasTrue(vector<bool> v); BAD
    // hasTrue(vector v); BAD
    
    return; 
}
