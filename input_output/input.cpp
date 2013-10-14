//input example to utilize input redirection
// run exe_name < input_file

#include <iostream>

using namespace std;

int main()
{
    string s;
    int x, y, z;
    double q;
    
    // Acquire three numbers
    cin >> x >> y >> z;
    
    // Output the data that was received
    cout << "inputted: " << x << " " << y << " " << z << endl;
    
    return 0;
}
