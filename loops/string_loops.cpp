/// @file string_loops.cpp
/// @author Adam Koehler
/// @date October 20, 2016
/// @brief Code snippets and comments utilized in lecture on 10/20/16 to 
///        discuss string member functions and for loops.

// Step 1:
// Write a loop that iterates over a string and prints out each character, 
//  one character per line.  For example, given a string s containing "hello", 
//  the loop would output: 
//  h
//  e
//  l
//  l
//  o
// what type of loop?
for

// what member functions of string do we use
size()
at()


// what are the 4 pieces of a loop?
1. initialization
2. condition
3. update
4. body





int sz = s.size();
for (int index = 0; index < sz; index++)
{
    cout << s.at(index) << endl;
}


index       < sz        output
0           true        h
1           true        e
2           true        l
3           true        l
4           true        o
5           false








// Step 2:
// Now alter your loop header such that the the word is printed in reverse.
// For example:
// o
// l
// l
// e
// h
sz = s.size();
// for (int index = 0; index < sz; index++)
for (int i = sz - 1; i >= 0; --i)
{
    cout << s.at(index) << endl;
}









// Step 3:
// Replace the first character with a 'j', so the if we run the 
// Step 1 loop again, it will output:
// j 
// e
// l
// l
// o
// what string member function do we use?
member function at()

s.at(0) = 'j';



// Step 4:
// Write a loop that uses similar logic to Step 3 to reverse 
//  the characters of the string, s, such that the resultant s is:
// ollej
char temp;
string s = "jello";

sz = s.size();
for (int i = 0; i < sz / 2; ++i)
{
    temp = s.at(i);
    s.at(i) = s.at(sz - i - 1);
    s.at(sz - i - 1) = temp;
}
cout << s;

// walk through code
s       index           condition 
