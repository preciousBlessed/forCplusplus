#include <iostream>

int main()
{
    int x = 10;
    //the stream insertion operator in cpp << used to insert some stream(sequence of characters) to the standard output, 
    //which is the console...
    std::cout << "x = ";
    std::cout << x;

    // or you can get the same output(x = 10) by chaining multiple  stream insertion operators...
    int y = 15;
    std::cout << "\ny = " << y << "\n"; // this line can also be achieved by using std::endl
    std::cout << "This is why I love C++" << std::endl;
    // Why not we just type endl?
    // if we put in line2, "using namespace std", it might just work...try it...

    // So check this out... this method of aligning, instead of using multiple stds...
    std::cout << "x = " << x << std::endl
              << "y = " << y << std::endl;
    return 0;
}