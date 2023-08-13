#include <iostream>


int main()
{
    //This lesson is all about receiving inputs from the user...
    // By reading from the console...
    std::cout << "Enter values for x and y: ";

    // we will declare a variable and use the stream extraction operator alongside cin to read that value
    // and store it in the variable we create...
    int x, y;

    std::cin >> x >> y; //on the console, separate x and y with either newline or space..

    std::cout << "The sum of " << x << " and " << y << " that you entered is = " << x + y << std::endl;
    return 0;
}
