#include <iostream> //enable input and output
#include <cstdlib> //enable random generator
#include <ctime> //time function

int main()
{
    /**
     * @brief Construct a program that generates  2 random dice numbers
     * useful formula for limiting range
     * (rand()%(maxValue - minValue + 1)) + minValue
     */
    srand(time(nullptr));
    int rand_dice_number1 = 1 + (rand()%6),
        rand_dice_number2 = 1 + (rand()%6);
    std::cout << "Rolling the Dices gives: " << std::endl
         << "Dice 1: " << rand_dice_number1 << std::endl
         << "Dice 2: " << rand_dice_number2 << std::endl;
    return 0;
}