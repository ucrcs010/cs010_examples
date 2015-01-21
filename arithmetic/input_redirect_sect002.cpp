/// @file input_redirect.cpp
/// @author Adam Koehler
/// @date January 16, 2015
/// @brief Code snippets and comments utilized in lecture on 1/16/15 to 
///        discuss input redirection.

#include <iostream>

using namespace std;

int main()
{
    // input redirection 
    int y, z; 
    double x;
    
    cin >> x >> y >> z;
    
    cout << x << y << z<< endl;
    
    
    return 0;   
}