/// @file time.cpp
/// @author Adam Koehler
/// @date October 11, 2013
/// @brief Code snippets and comments utilized in lecture on 10/11/13 to 
///        discuss how to split a number of seconds into discrete time periods.

#include <iostream>
#include <ctime>

using namespace std;

// Declare relative constants to make code readable
const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE; // 3600
const int SECONDS_PER_DAY = SECONDS_PER_HOUR * 24;

int main()
{
    // grab current time since Jan 1970
    int seconds = time(0);
    
    
    // calculate the days then remove days from total
    int days = seconds / SECONDS_PER_DAY;
    seconds = seconds % SECONDS_PER_DAY;
    
    // calculate the hours then remove hours from total
    int hours = seconds / SECONDS_PER_HOUR; 
    seconds = seconds % SECONDS_PER_HOUR; 
    
    // calculate the minutes
    int minutes = seconds / SECONDS_PER_MINUTE;
    
    // remove minutes from total, whatever remains is the seconds count
    seconds = seconds % SECONDS_PER_MINUTE;
    
 
    // Output the values that were calculated   
    cout << "days: " << days << endl;
    cout << "hours: " << hours << endl;
    cout << "minutes: " << minutes << endl;
    cout << "seconds: " << seconds << endl;
    return 0;   
}