#include <iostream>


int main()
{
    //This lesson is all about receiving inputs from the user...
    // By reading from the console...
    std::cout << "Enter a value: ";

    // we will declare a variable and use the stream extraction operator alongside cin to read that value
    // and store it in the variable we create...
    int value;

    std::cin >> value;

    std::cout << "The Value you entered is ... " << value << std::endl;
    return 0;
}
