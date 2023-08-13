#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // To calculate the area of a circle when the user enters the radius
    const double pi = 3.141592653589793;
    double radius;
    double area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * pow(radius, 2);

    cout << "Given radius: " << radius << endl
         << "Area of Circle: " << area << endl;

    return 0;
}