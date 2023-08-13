#include <iostream>

int main()
{
    int x = 9;
    int y = 8;
    int z1 = x + y; //addition
    int z2 = x - y; //subtraction
    int z3 = x * y; //multiplication
    int z4 = x / y; //integer division
    int z = x % y; // modulus

    // incrementing
    x = x + 5;
    //x++ postfix, prefix is ++x
    y = x++; // makes y the current value of x before incrementing x
    y = ++x; //makes the incremented value of x and updates x too
    std::cout << z4;
    return 0;
}