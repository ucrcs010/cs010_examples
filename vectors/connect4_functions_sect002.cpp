/// @file connect4_functions.cpp
/// @author Adam Koehler
/// @date March 11, 2015
/// @brief Code snippets and comments utilized in lecture on 3/11/15 to 
///        create a connect 4 program skeleton.

// Split off several connect 4 functions into their own file.

#include <iostream>
#include <vector>

using namespace std;

const int EMPTY = 0;
const int WALL = -1;
const int RED = 1;
const int BLUE = 2;


void drawBoard(const vector< vector<int> > &game)
{
    int gameRow;
    int gameCol; 
    
    for (int row=0; row < game.size(); row++)
    {
        // output a slotted row with either pieces or empty slots
        for (int col=0; 
            col < (game.at(row).size() + (game.at(row).size() + 1)); col++)
        {
            // the even columns are walls
            if(col % 2 == 0)
            {
                // output a space with background color of gray
                cout << "\033[37;47m" << ' ';
            
                // reset coloring
                cout << "\033[0m";
            }
            else
            {
                // the odd columns are slotted
                gameRow = row;
                gameCol = col / 2;
                if(game.at(gameRow).at(gameCol) == RED)
                {
                    // output a space with background color of red
                    cout << "\033[31;41m" << ' ';
            
                    // reset coloring
                    cout << "\033[0m";
                } 
                else if(game.at(gameRow).at(gameCol) == BLUE)
                {
                    // output a space with background color of blue
                    cout << "\033[34;44m" << ' ';
            
                    // reset coloring
                    cout << "\033[0m";
                }
                else
                {
                    // output a space with background color of black
                    cout << "\033[30;40m" << ' ';
            
                    // reset coloring
                    cout << "\033[0m";                             
                }
            }            
        }
        cout << endl;
        
        // output a row of walls
        for (int col=0; 
            col < (game.at(row).size() + (game.at(row).size() + 1)); col++)
        {
            cout << "\033[37;47m" << ' ';

            // reset coloring
            cout << "\033[0m";            
        }
        cout << endl;
    }
}

void initBoard(vector <vector <int> > &board)
{
    vector <int> rowVector(7);
    
    for (int i = 1; i <= 6; i++)
    {
        board.push_back(rowVector);
    }
}

void createDisplay(vector <vector <int> > &grid)
{
    string line;
    vector <int> walled(15, WALL);       
    vector <int> slotted(15, WALL);

    // Read in grid and interpret the characters
    for (int i=1; i < slotted.size(); i+=2)
    {        
        slotted.at(i) = EMPTY;
    }
    
    for (int i = 1; i <= 6; i++)
    {
        grid.push_back(slotted);
        grid.push_back(walled);
    }
}

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen()
{    
    cout << endl << endl;
    cout << "\033c";
    cout << endl;
}



