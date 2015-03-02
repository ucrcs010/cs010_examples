/// @file function_tracing.cpp
/// @author Adam Koehler
/// @date February 27, 2015
/// @brief Example functions used on 2/27/2015 in lecture to 
///         cover walking through code with functions and scope.

#include <iostream>
using namespace std;

int f(int a, int b) {
    if (a < b) {
        return a * b;
    }
    return a - b;
}

int g(int &a) {
    if (a >= 0) {
        a = a * 2;
    }
    else {
        a = -a;
    }
    return a % 3 + 3;
}

int main() {
    int a = 4;
    int b = -2;

    b = g(b);
    a = f(g(b), a);
    // a = g(f(5, 5));   <-- bad invocation
    // a = g(5);  <-- bad invocation
    // a = g(a);  <-- good invocation
    // a = g(b);  <-- good invocation
    
    cout << a << ' ' << b << endl;
    
    // Will be an infinite loop due to scope issues.
    // while (b > a) {
    //     int b = 5;
    //     b = b - a;
    // }
    
    return 0;
}