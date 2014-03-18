#include <iostream>
#include <string>
#include <vector>

using namespace std;

/// @brief function to display contents of vector (displayVector)
/// @param v - vector<double> by const reference
/// @return void
void displayVector( const vector<double> & v );

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
void fillVector( vector<double> & v );
 

/// @brief function to find max value in a vector of doubles (maxValue)
/// @param v - vector<double> by const reference
/// @return double - max value
double maxValue( const vector<double> & v );

/// @brief function to decide if value is present in vector of doubles (isFound)
/// @param v - vector<double> by const reference
/// @param val - value to look for
/// @return bool - true if val is present in v
/// this is a PREDICATE FUNCTION
bool isFound( const vector<double> & v, double val);

int main()
{
    double maxRainfall;
    
    vector<double> rainfall; // vector is initially empty!
    vector< vector<double> > rainfallTable;

    // invoke fillVector:
    fillVector(rainfall);
    
    cout << "\nRainfall by month:";
    // invoke displayVector:
    displayVector(rainfall);
    
    // invoke maxValue:
    maxRainfall = maxValue(rainfall);
    
    cout << "Max monthly rainfall was: " << maxRainfall << endl;
    
    double searchVal = 2.8;
    
    bool isInVector = isFound(rainfall, searchVal);
    if ( isInVector )
    {
        cout << searchVal << " was found!" << endl;
    }
    else
    {
        cout << "sorry - " << searchVal << " is not in your data!" << endl;
    }
    
    // we have one vector<double> - rainfall
    // and one vector of vector<double> - rainfallTable
    // fill the 2-d vector with vector<double>'s 
    // vector< vector<double> > rainfallTable
    rainfallTable.push_back( rainfall );
    
    return 0;
}


// define displayVector:
void displayVector( const vector<double> & v )
{
    cout << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << ' ';
    }
    cout << endl;
}

// define fillVector:
void fillVector( vector<double> & v )
{
    double value;
    while ( cin >> value )
    {
        v.push_back(value);
    }
}

// define maxValue:
double maxValue( const vector<double> & v )
{
    double max = v.at(0);
    for (int i = 1; i < v.size(); ++i)
    {
        if (v.at(i) > max)
        {
            max = v.at(i);
        }
    }
    
    return max;
}

// define isFound - STUB
bool isFound( const vector<double> & v, double val)
{
    return false;
}

/*
1.0 2.0 3.1 
0.5 1.3 4.1
0.8 0.9 1.1
*/