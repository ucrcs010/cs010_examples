#include <iostream>
#include <cmath>

using namespace std;

// quadratic equation

void quadratic( double, double, double, double&, double& );
// declaration or PROTOTYPE
// function DECLARATION requires 3 components:
// return data type; name; parameter list

int main()
{
    double x1, x2, x3;
    double root1 = 0.0;
    double root2 = 0.0;
    
    cout << "Enter 3 coefficients: ";
    cin >> x1 >> x2 >> x3;
    cout << "\ninvoke function." << endl;
    
    quadratic( 91.3, x2, x3, root1, root2 );
    // function invocation:
    // we "call" or "invoke" a function
    // with arguments that match the parameter list
    // arguments can be:
    // literals; variables; expressions; other function calls
    // SO LONG AS correct data type
    
    cout << "result is: " << root1 << "..." << root2 << endl;
    
    // BUT ... how do we get second root of quadratic equation?

    return 0;
}

// function DEFINITION: function HEADER plus function BODY
// Header: start with function declaration, add parameter variable names:
/// @param sign: +1 for positive root,-1 for negative root
void quadratic(double a, double b, double c,  // value paramters
    double& solution1, double& solution2)   // REFERENCE parameters
{
    // function body
    // solves equation a*x^2 + b*x + c = 0
    // (for one root only)
    
    double solution1 = 0.0;
    double solution2 = 0.0;
    double discriminant = b*b - 4.0 * a * c;
    
    if (discriminant < 0 || a == 0)
    {
        solution1 = 0.0 / 0.0; 
        solution2 = 0.0 / 0.0; 
        // "NaN" = "Not a  Number" is a valid value of type double
    }
    else
    {
        solution1 = ( -b + sqrt(discriminant) ) / ( 2.0 * a );
        solution2 = ( -b - sqrt(discriminant) ) / ( 2.0 * a );
    }
}
