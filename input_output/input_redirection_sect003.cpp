/// @file input_redirection.cpp
/// @author Adam Koehler
/// @date October 13, 2014
/// @brief Code snippets and comments utilized in lecture on 10/13/14 to 
///        discuss variables.

// input redirection
// way to acquire inputs through a file versus a keyboard input
// when executing the program, we utilize run a.out < input.txt
int main()
{
    int x, y, z;
    
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << endl;
    
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}