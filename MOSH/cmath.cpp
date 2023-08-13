// in this file we will see several parts of the 
// standard library that gives us access to some mathematical functions

#include <iostream>
#include <cmath> //this file declares a bunch of useful mathematical functions...
// search cmath reference on google to quench your curiosity about this function...

using namespace std;

int main()
{
    // functions with single inputs
    double result = floor(1.2);
    cout << result << endl;

    // functions with double inputs
    double res = pow(2, 16);
    cout << res << endl;
    return 0;
}