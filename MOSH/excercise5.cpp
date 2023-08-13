#include <iostream>

using namespace std;

int main()
{
    // The formula for converting is f = 1.8theta + 32
    double f, theta;
    cout << "Enter the value of fahrenheit to convert: ";
    cin >> f;
    theta = (f - 32)/1.8;
    cout <<"Fahrenheit given: " << f << "℉" << endl;
    cout << "Equivalent Celsius degree = " << theta << "℃"<< endl;
    return 0;
}