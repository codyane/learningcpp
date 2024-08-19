#include <iostream>

int main ()
{
    // && = check if both conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // If the temperature is less than or equal to 0 or greater than or equal to 30
    // then it's considered "bad"
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad! \n";
    }
    else {
        std::cout << "The temperature is good! \n";
    }

    // If it is not sunny, then it is cloudy
    if (!sunny) {
        std::cout << "It is cloudy outside! \n";
    }
    else {
        std::cout << "It is sunny outside! \n";
    }

    return 0;
}
