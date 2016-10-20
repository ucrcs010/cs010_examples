/// @file loops_intro.cpp
/// @author Adam Koehler
/// @date October 18, 2016
/// @brief Code snippets and comments utilized in lecture on 10/18/16 to 
///        loops.


while
for 
do-while

while -- when we don't know or can't figure out how many iterations

for -- when we know or can figure out how many iterations

do-while -- when we know at least one iteration occurs in a while loop

// syntax
int i = 1;
while (i != 10) // i < 11, i <= 10
{
    // output
    cout << i << endl;
    
    // output
    // cout << i << endl;
    
    // update step
    ++i; // i = i + 1;
}

//
//for(initialize; condition; update)
for(int i = 1; i <= 10; i=i+1)
{
    cout << i << endl;
}


// in a do-while loop the condition is tested after 1 iteration
do
{
    
} while (condition);

