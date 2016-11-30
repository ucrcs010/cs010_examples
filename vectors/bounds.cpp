/// @file bounds.cpp
/// @author Adam Koehler
/// @date November 29, 2016
/// @brief Code to discuss using vector bounds and making
///         sure we stay in bounds when we change our at() calls

// our lower and upper bounds for vectors
// the upper bound is not included, but the 
// lower bound is included
// Lower, Upper
// 0, size()

// given vector containing {'h', 'e', 'l' 'p'}
for (int i = 0 ; i < v.size() ; ++i)
{
    cout << v.at(i);
    
    // check to make sure we stay in bounds
    // we are comparing what we use in the at()
    // to the bound it may pass
    if (i + 1 < v.size())
    {
        cout << v.at(i+1);
    }
}

//
// i
// 0,1,2,3,4

// output:
// heellpp


