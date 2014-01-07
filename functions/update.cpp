/// @file update.cpp
/// @author Adam Koehler
/// @date December, 2013
/// @brief Example utilized in class in December 2013.
///         
///         Implement functions to count vowels in a string and to store
///         the larger of two counts as well as the corresponding string.
///         Demonstrating proper use of const reference and reference passing.

#include <iostream>
using namespace std;

//define two strings and corresponding values save 
//the largest value and corresponding string into reference param

void updateLarger(int &l, string &ls, int c, const string &cs)
{
    cout << c << " " << l << endl;
    if (c > l)
    {
        l = c;
        ls = cs;
    }

}

int countVowels(const string &s)
{
    int current = 0;
    char c;
    for (int i=0; i < s.size(); i++)
    {
        c = s.at(i);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'y')
        {
            current++;
        }
    }
    return current;
}

int main()
{
    int v1, v2;
    string s1 = "hello", s2 = "ell";
    string larger = s2; 
    int largerNum;
    v1 = countVowels(s1);
    v2 = countVowels(s2);
    largerNum = v2;
    
    cout << "num: " << largerNum << endl;
    cout << "string: " << larger << endl;
    updateLarger(largerNum, larger, v1, s1);
    
    cout << "num: " << largerNum << endl;
    cout << "string: " << larger << endl;
    return 0;
}