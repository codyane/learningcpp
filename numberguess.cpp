#include <iostream>
#include <ctime>

int main ()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******CHEAP ROULLETTE********\n";

    do{
        std::cout << "Enter a guesss between (1-100): ";
        std::cin >> guess;
        tries++;   

        if (guess > num) {
            std::cout << "Too high \n";
        }
        else if (guess < num) {
            std::cout << "Too low \n";
        }
        else if (guess == num){
        std::cout << "ITS CORRECT!!" << '\n';
        }
    
    }while (guess != num);

}