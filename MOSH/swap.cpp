#include <iostream>

int main()
{
    // A code to swap two variables;
    int a  = 45;
    int b = 92;
    int temp;
    std::cout << "before Swap";
    std::cout << a;
    std::cout << b;

    temp = b, b = a, a = temp;
    std::cout << "After swap";
    std::cout << a;
    std::cout << b;
    return 0;
}