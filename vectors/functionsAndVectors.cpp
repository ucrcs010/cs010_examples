/// @file functionsAndVectors.cpp
/// @author Adam Koehler
/// @date November 29, 2016
/// @brief Code from the functions we wrote on paper during class

// Write a find function for a vector of integers
// find the first instance of lookForMe and return its index
// When not found, -1 is returned

// Parts needed for a function header:
// return type, stellar name, parameters list
int findInt(const vector<int> &v, int lookForMe)
{
    for(int i=0; i < v.size(); i++)
    {
        if (lookForMe == v.at(i)) // (v.at(i) == lookForMe)
        {
            return i;
        }
    }
    return -1;
}

// reverse find, find the last instance of lookForMe and return its index
int rfindInt(const vector<int> &v, int lookForMe)
{
    for(int i=v.size()-1; i >= 0; i--)
    {
        if (lookForMe == v.at(i)) // (v.at(i) == lookForMe)
        {
            return i;
        }
    }
    return -1;
}


// isAscending --- return true if the vector is in 
//      ascending order such as 1, 2, 2, 3, 4, 5
//      not ascending 1, 2, 5, 3
bool isAscending(const vector <int> &v)
{
    for(int i=0; i < v.size(); ++i)
    {
        if (i+1 < v.size())
        {
            if (i+1 < v.size() && v.at(i) > v.at(i+1))
            {
                return false;
            }
        }
    }
    
    // Alternate implementation that uses i-1
    /*
    // start at 1 with i to avoid i-1 being less than 0
    for(int i=1; i < v.size(); ++i)
    {
        if (v.at(i) < v.at(i-1))
        {
            return false;
        }
    }
    */
    
    return true;
}

// determines if the vector is in descending order.
bool isDescending(const vector <int> &v)
{
    for(int i=0; i < v.size(); ++i)
    {
        // We only need to change one thing from isAscending!
        if (i+1 < v.size() && v.at(i) < v.at(i+1))
        {
            return false;
        }
    }
    
    // we cannot return true earlier than this because we need to 
    // check the entire vector before knowing it is in order
    return true;
}

// use: 
// bool isDescending(const vector <int> &v)
// bool isAscending(const vector <int> &v)
// determine if vector v is sorted
bool isSorted(const vector<int> &v)
{
    return isAscending(v) || isDescending(v);
    /*
    if (isAscending(v) == true || isDescending(v))
    {
        return true;
    }
    return false;
    */
}