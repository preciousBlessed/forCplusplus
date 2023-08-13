#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // use a random number generator rand that is defined in the library called cstdlib
    // rand() gives a random integer
    int number = rand();
    //  cout << number;
    //see we get the same number.
    // We need to seed the function...
    srand(5); //for any number you put, you will always get the same pattern of first number...

    number = rand(); //at this point we still get the same pattern
    //  cout << number;
    // How can we get truly random numbers?
    // We have a function for getting the current time in terms of the number of seconds 
    // elapsed from January 1970 till date. If we use that function every time we run our program,
    // we're going to have a random number.
    // see

    //we will include the ctime library, and use the time() function to get the number of seconds 
    // elapsed from January 1 1970 till date.
    // This function should be called with a special argument called 'nullptr' or 0
    long elapsedSeconds = time(nullptr);
    // then we use this constantly changing value to seed the random number generator.
    srand(elapsedSeconds); // or you can use srand(time(nullptr)); directly to discard the variable elapsedSeconds;

    number = rand(); //this is where we get random numbers truly...
    int number2 = rand() % 10; //a strategy to return numbers from 0 to 9;

    cout << "number: "<< number << endl << "number2: " << number2 <<endl;
    return 0;
}