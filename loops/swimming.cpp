/// @file swimming.cpp
/// @author Adam Koehler
/// @date October 20, 2016
/// @brief Code to make fish swim in terminal and teach about loops.

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

const int TIME = 200000;

int main()
{
    string spacing;
    const int SENTINEL = 50;
    while (spacing.size() != SENTINEL)
    {
        // clear the terminal
        cout << "\033c";
    
        // move the fish
        cout << spacing;
        
        // output the initial fish
        cout << ">(((*>" << endl;
        
        // pause
        usleep(TIME);
        
        spacing = spacing + " ";
        // spacing.append(" ");
        // spacing.push_back(' ');
    }
    
    
    return 0;
    
    
    // // clear the terminal
    // cout << "\033c";

    // // move the fish
    // cout << spacing;
    
    // // output the initial fish
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << " ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);

    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "  ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "   ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "    ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "    ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "     ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "      ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "       ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "        ";
    // cout << ">(((*>" << endl;
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "         ";
    // cout << ">(((*>" << endl;
    
    
    // // pause
    // usleep(TIME);
    
    // // clear the terminal
    // cout << "\033c";
    
    // // output the fish slightly further along
    // cout << "          ";
    // cout << ">(((*>" << endl;

    // return 0;
}