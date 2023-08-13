#include <iostream>

using namespace std;

int main(){
    // learn how to init variables
    double price = 99.99;
    float interestRate = 3.67f; //if you don't put the F/f above, the compiler will treat it as a double...
    //this can lead to data loss.
    long fileSize = 900000L; //if you don't add the L/l, the compiler treats it as an integer...
    char letter = 'a'; //notice the use of single quotes...
    bool isValid = true; // or false;
    auto is_valid = false; //use of auto enables the compiler to automatically detect the type.
    // Hover the mouse above is_valid to see its type as bool...confirmed.
    //auto key word can work on almost all datatypes so long as we  follow the rules. It is useful and efficient
    // for complicated tasks.

    // Brace initialization: Another helpful type
    int number {}; //now initializes number to 0. Without this, number will be a random big int value...
    return 0;
}