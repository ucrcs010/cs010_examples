/// @file timeSmalltoBig.cpp
/// @author Adam Koehler
/// @date January 23, 2015
/// @brief Code snippets and comments utilized in lecture on 01/23/15 to 
///        discuss how to split a number of seconds into discrete time periods.


#include <iostream>
#include <cmath>

// used for time()
#include <ctime>

// What is the current time?
// jan 1, 1970 - time in seconds

using namespace std;

int main()
{
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;
    
    // acquire curernt time in second from 1970
    int x  = time(0);
    int seconds, minutes, hours;

    // acquire seconds
    seconds = x % SECONDS_PER_MINUTE; 
    x = x / SECONDS_PER_MINUTE; // convert from seconds to minutes
    
    // acquire minutes
    minutes = x % MINUTES_PER_HOUR;
    x = x / MINUTES_PER_HOUR; // convert from minutes to hours

    // acquire hours
    hours = x % HOURS_PER_DAY;
    
    cout << (hours-7)%12 << ":" << minutes << ":" << seconds << endl;
    
    
    return 0;
}