/// @file time_big2small.cpp
/// @author Adam Koehler
/// @date October 17, 2014
/// @brief Code snippets and comments utilized in lecture on 10/17/14 to 
///        discuss how to split a number of seconds into discrete time periods.

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// Declare relative constants to make code readable
const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE; // 3600
const int SECONDS_PER_DAY = SECONDS_PER_HOUR * 24;
const int TIME_ZONE = 7;

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
    // cout << "days: " << days << endl;
    // cout << "hours: " << (hours - TIME_ZONE) << endl;
    // cout << "minutes: " << minutes << endl;
    // cout << "seconds: " << seconds << endl;
    // seconds = 1;
    
    // Output the current time, filling a 0 before single digits
    cout << setfill('0');  
    cout << (hours - TIME_ZONE) << ":" << setw(2) << minutes << ":" 
        << setw(2) << seconds << endl;
    return 0;   
}