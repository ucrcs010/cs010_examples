#include <iostream>
#include <string>
#include <vector>

using namespace std;

/// @brief Fills vector with characters starting at lower case a.
///
///     The amount of the alphabet placed into the vector depends on its size.
///     When the vector is size 1 then it will have only character a.
///     When the vector is size 2 then it will have only characters a and b.
///     When the vector is size 3 then it will have only characters a, b, and c.
///     When the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &);

/// @brief outputs vector with elements separated by spaces
/// @param v reference to vector<char>
void displayVector(const vector <char> &);

int main()
{
    int numChars = 0;
    cout << "\nHow many characters? ";
    cin >> numChars;
    
    vector<char> alpha(numChars);
    
    initVector(alpha);
    displayVector(alpha);
    
    return 0;
}

void initVector(vector <char> & v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        v.at(i) = 'a' + i;
    }
}

void displayVector(const vector <char> & v)
{
    cout << "\nContents of vector:" << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << ' ';
    }
    cout << endl;
}