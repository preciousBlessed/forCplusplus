// This is  when we initialize a variable of a smaller type using a larger type

#include <iostream>
using namespace std;

int main()
{
    int number = 1'000'000; //the single quotes are for readability...
    // short another = number; //this will down convert the number
    // short another {number} // this will prevent the code from runnning, it's a safe method, brace initializer
    //run the code to see the error message...

    // cout<< another; //16960 is the output. It's been narrowed down because we move from bigger to samller
    // data type version of the same variable...

    // The opposite
    short number2 = 1'000'000;
    int another2 = number2;
    cout << another2;
    // You will get this error
    // : warning: overflow in conversion from 'int' to 'short int' changes value from '1000000' to '16960'
    // [-Woverflow]
    //IT IS basically because 1M is too large to fit into short...so
    // if you change the number2 {100}, the conversion from short to int will complete, and the extra space
    // in the 4byte will  be filled with zeros. (Remember short is 2bytes).
    return 0;
}