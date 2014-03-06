#include <iostream>
#include <string>
#include <vector>

/// @brief function to display contents of vector (displayVector)
/// @param v - vector<double> by const reference
/// @return void
 

/// @brief function to read in data to populate vector (fillVector)
///     if the input comes from a file by input redirection,
///     the file format will be a number of doubles, separated by spaces;
///     if the input comes from keyboard, end of data will be signalled
///     by ctrl-D (EoF symbol).
///     
/// @param v - vector<double> by reference
/// @return void
/// precondition: (i.e. the user has to abide by this!):
///     the vector argument will be empty
/// postcondition: (i.e. the function promises that this will happen!):
///     the vector will be populated with the values input
 

/// @brief function to find max value in a vector of doubles (maxValue)
/// @param v - vector<double> by const reference
/// @return double - max value


int main()
{
    double maxRainfall;
    
    vector<double> rainfall; // vector is initially empty!
    
    // invoke fillVector:
    
    
    cout << "\nRainfall by month:" << endl;
    // invoke displayVector:
    
    
    // invoke maxValue:
    
    
    cout << "Max monthly rainfall was: " << maxRainfall << endl;
    
    return 0;
}


// define displayVector:

// define fillVector:

// define maxValue: