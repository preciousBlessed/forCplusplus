#include <iostream>
using namespace std;

int main()
{
    // system                   digits                  example
    // Decimal(base 10)         0-9                     255
    // Binary (base 2)          0,1                     11111111
    //Hexadecimal (base 16)     0-F: 0-9:A-F            FF

    // Since hexadecimal numbers are short representations of binary numbers, we use them a lot in programming
    // especially to represent colors. RGB
    
    int number = 255; // integer version
    int b_number = 0b11111111; // binary version
    int hex_number = 0xff;

    cout<<"number: " <<number<<endl<< "b_number: "<<b_number<<endl<< "hex_number: "<<hex_number<<endl;

    // Positive and Negative numbers:
    // irrespective of which system, we can have positive or negative
    // introduce the special key word, unsigned
    // unsigned key word will mean that the range does not  accept negative numbers.
    // be careful when using unsigned to avoid errors that are pretty hard to detect..
    // try running unsigned int num = -255; cout << num;
    unsigned int num = -255; cout << num; //see the result--a large positive integer with fixed value!!! 4294967041
    unsigned int num2 = 0; num2--; cout <<endl<< num2; // 4294967295
    // in summary, you might wanna, according to mosh, "stay from the unsigned keyword"...
    // but I say, it depends on what you're doing...
    return 0;
}