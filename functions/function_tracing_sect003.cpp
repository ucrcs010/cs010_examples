/// @file function_tracing.cpp
/// @author Adam Koehler
/// @date November 19, 2014
/// @brief Example functions used on 11/19/2014 in lecture to 
///         cover walking through code with functions and scope.

#include <iostream>
using namespace std;

int f(int a, int b)
{
    if (a < b)
    {
        return a * b;
    }
    return a - b;
}

int g(int a)
{
    if (a >= 0)
    {
        a = a * 2;
    }
    else
    {
        a = -a;
    }
    return a % 3 + 3;
}

int main()
{
    int a = 4;
    int b = -2;
    // int a = 5;
    // int b = 3;
    
    b = g(b);
    a = f(g(b), a);
    cout << a << ' ' << b << endl;
    
    return 0;
}
