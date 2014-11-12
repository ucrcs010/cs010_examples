/// @file string_loops.cpp
/// @author Adam Koehler
/// @date November 3, 2014
/// @brief Code snippets and comments utilized in lecture on 11/3/14 to 
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


// what are the pieces of the loop?
1. init
2. condition
3. update
4. body


0, 1, 2, 3, 4 ?? 5

for (int index = 0; index < s.size(); index++)
{
    cout << s.at(index) << endl;
}


index       < s.size()  output
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
for (int index = s.size() - 1; index >= 0; --index) // index = index - 1
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
// originally - for (int index = s.size() - 1; index >= 0; index--)
for (int index = s.size() - 1; index > s.size()/2; index--)
{
    // cout << s.at(index);  -- attempt 1
    // s.size() - 1 = 'j'  -- attempt 2
    temp = s.at(index);
    s.at(index) = s.at(s.size() - (index+1));
    s.at(s.size() - (index+1)) = temp;
}
cout << s;

// walk through with original for loop header
s       index           condition 
jello   4,3,2,1,0       true, true, true, true, true, false
oellj
ollej <---- want to stop here
oellj
jello

temp
o,l,l,e,j




