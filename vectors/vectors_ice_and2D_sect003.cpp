/// @file vectors_ice_and2D.cpp
/// @author Adam Koehler
/// @date December 10, 2014
/// @brief Code snippets and comments utilized in lecture on 12/10/14 to 
///        discuss creating 2D vectors.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 2D vector of doubles
    vector <vector<double> > x;
    
    // x.size(); <--- the number of rows
    // x.at(0).size(); <--- the number of columns in row 0
    
    vector <double> rowVector(3);
    
    // build a 2D vector, one row at a time by pushing the row on
    x.push_back(rowVector);
    x.push_back(rowVector);
    rowVector.clear();      // clears the contents of rowVector, reducing size to 0
    
    
    // ICE code snippet
    vector<int> v;
    v.at(0) = 1;
    for (int i = 1; i < v.size(); ++i)
    {
       v.push_back(v.at(i-1) * 2);
    }
    int sum = 0;
    
    for (int i = 0; 1 < v.size(); ++i)
    {
       for (int j = 0; j < v.size(); ++j)
       {
          sum += v.at(j);
       }
       v.pop_back();
    }
    
    cout << "sum: " << sum << endl;
    cout << "v size: " << v.size() << endl;
    for (int i=0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    
    return 0;
}