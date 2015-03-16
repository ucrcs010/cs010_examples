/// @file bounds.cpp
/// @author Adam Koehler
/// @date March 9, 2015
/// @brief Code snippets to discuss bounds and checking bounds

// 4 potential bounds in a rectangle
0
0
v.size()
v.at(0).size()

// the lower bound is included
>= 0

// the upper bound is excluded
< v.size()

// often we would keep i in bounds by stating
i < v.size()

// what happens when i is manipulated?
i*2
i-2
i+1

// we must alter what we are comparing to our bound
// in this case our bound prevents out at call
//      from going out of range when trying to 
//      determine if the cell is empty
if(i*2 < v.size() && v.at(i*2) == EMPTY)
{
    v.at(i*2) = 3;
}