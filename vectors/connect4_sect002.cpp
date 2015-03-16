/// @file connect4.cpp
/// @author Adam Koehler
/// @date March 11, 2015
/// @brief Code snippets and comments utilized in lecture on 3/11/15 to 
///        create a connect 4 program skeleton.

#include <iostream>
#include <vector>
#include <locale>
#include <unistd.h>

using namespace std;

const int EMPTY = 0;
const int RED = 1;
const int BLUE = 2;

// Provided functions
void initBoard(vector <vector <int> > &);
void createDisplay(vector <vector <int> > &);
void drawBoard(const vector <vector <int> > &);
void clearScreen();

// User written functions
void dropToken(vector< vector<int> > &, int, int);
int checkWin(const vector< vector<int> > &);
bool boardFull(const vector< vector<int> > &);
int checkUp(const vector< vector<int> > &, int, int);
int checkDown(const vector< vector<int> > &, int, int);
int checkLeft(const vector< vector<int> > &, int, int);
int checkRight(const vector< vector<int> > &, int, int);

int main()
{
    vector <vector <int> > game;
    vector <vector <int> > displayBoard;
    int place; 
    
    createDisplay(displayBoard);
    initBoard(game);
    clearScreen();
    drawBoard(game);
    
    int turn = RED;
    while(checkWin(game) == 0 && !boardFull(game))
    {
        // acquire a valid column placement
        do
        {
            cout << "Enter a column [1-7], left most is 1: ";
            cin >> place;
            cout << endl;
        } while (!(place >= 1 && place <= 7));
        
        // drop the token into the game board
        dropToken(game, place - 1, turn);
        
        // switch the turn variable to the other color
        if (turn == RED)
        {
            turn = BLUE;
        }
        else
        {
            turn = RED;
        }
        
        // Clear the scren and redraw the board with the latest piece
        clearScreen();
        drawBoard(game);
    }
    
    cout << endl;
    
    // check if someone won
    if (checkWin(game) != 0)
    {
        // the turn changed prior to the end of the loop, so the current
        //  player is the loser
        if (turn == RED)
        {
            cout << "Blue player wins!" << endl;
        }
        else
        {
            cout << "Red player wins!" << endl;
        }
    }
    else
    {
        // board was filled without a winner
        cout << "No one wins :(" << endl;
    }

    return 0;
}

// drop a token of a specific color into the game board
void dropToken(vector< vector<int> > &gameBoard, int col, int color)
{
    // place a piece of the provided color at the slot farthest down the column
    for(int row = gameBoard.size() - 1; row >= 0; row--)
    {
        if (EMPTY == gameBoard.at(row).at(col))
        {
            gameBoard.at(row).at(col) = color;
            return;
        }
    }
}

// simply check if any the entire board is filled with pieces
bool boardFull(const vector< vector<int> > &gameBoard)
{
    for (int r=0; r < gameBoard.size(); r++)
    {
        for (int c=0; c < gameBoard.at(r).size(); c++)
        {
            if (gameBoard.at(r).at(c) == EMPTY)
            {
                return false;
            }
        }
    }
    return true;
}

// check for a winner in the various directions
int checkWin(const vector< vector<int> > &gameBoard)
{
    int result = 0;
    for(int r=0; r < gameBoard.size(); r++)
    {
        for(int c=0; c < gameBoard.at(r).size(); c++)
        {
            if(gameBoard.at(r).at(c) != EMPTY)
            {
                // up
                result = checkUp(gameBoard, r, c);
                if (result != 0)
                {
                    return result;
                }
        
                // down
                result = checkDown(gameBoard, r, c);
                if (result != 0)
                {
                    return result;
                }                
                
                // left
                result = checkLeft(gameBoard, r, c);
                if (result != 0)
                {
                    return result;
                }                
                
                // right            
                result = checkRight(gameBoard, r, c);
                if (result != 0)
                {
                    return result;
                }                
                
                // diagonals??
            }
        }
    }
    return 0;
}

int checkUp(const vector< vector<int> > &gameBoard, int row, int col)
{
    // check for four matches going up from designated spot
    int N = 4;

    // If we cannot possibly win, no need to check
    if (row+1 < N)
    {
        return 0;
    }    
    
    // check to see if N spots match
    for (int r = row; r >= 0 && r > (row - N); r--)
    {
        if (gameBoard.at(r).at(col) != gameBoard.at(row).at(col))
        {
            return 0;
        }
    }
    
    return gameBoard.at(row).at(col);
}

int checkDown(const vector< vector<int> > &gameBoard, int row, int col)
{
    return 0;
}

int checkLeft(const vector< vector<int> > &gameBoard, int row, int col)
{
    return 0;
}

int checkRight(const vector< vector<int> > &gameBoard, int row, int col)
{
    // check for four matches going up from designated spot
    int N = 4;
    
    // If we cannot possibly win, no need to check
    if (col+N > gameBoard.at(row).size())
    {
        return 0;
    }
    
    // check to see if N spots match
    for (int c = col; c < gameBoard.at(row).size() && c < (col + N); c++)
    {
        if (gameBoard.at(row).at(c) != gameBoard.at(row).at(col))
        {
            return 0;
        }
    }
    
    return gameBoard.at(row).at(col);
}
