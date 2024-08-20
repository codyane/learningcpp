#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int  randNum = rand() % 5 + + 1 ;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumper Sticker!\n";
        break;
    case 2:
        std::cout << "You win a free tshirt!\n";
    case 3:
        std::cout << "You win a free lunch!\n";
    case 4:
        std::cout << "You win a free giftcard\n";
    case 5:
        std::cout << "You win a concert ticket\n";
    }

    return 0;
}