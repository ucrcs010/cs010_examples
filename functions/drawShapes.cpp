/// @file drawShapes.cpp
/// @author Adam Koehler
/// @date November 15, 2013
/// @brief Function examples built from the drawNChar example that allows
///        shapes to be drawn to the screen.

#include <iostream>
using namespace std;

void drawNChars(int, char='*');
void drawSquare(int);
void drawIsoscelesTriangle(int);


int main()
{
    drawSquare(5);
    cout << endl << endl;
    
    drawIsoscelesTriangle(5);
    cout << endl << endl;
    
    drawSquare(3);
    cout << endl << endl;
    
    drawIsoscelesTriangle(3);
    cout << endl;

    return 0;
}

/// @brief draw out a square based on the provided size
/// @param sideSize the size of a side of the square
void drawSquare(int sideSize)
{
    for(int i=1; i <= sideSize; i++)
    {
        drawNChars(sideSize);
        if (i != sideSize)
            cout << endl;
    }
}

/// @brief draw out an isosceles triangle
/// @brief sideSize the size of the triangle sides with equal length
void drawIsoscelesTriangle(int sideSize)
{
    for(int i=1; i <= sideSize; i++)
    {
        drawNChars(i);
        if (i != sideSize)
            cout << endl;
    }
}


/// @brief draw out n characters to standard output (cout)
/// @param n the number of charcters to draw
/// @param c the charcter to draw, if no argument is sent the value '*' is used
void drawNChars(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c << ' ';
    }
}