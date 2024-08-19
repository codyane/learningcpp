#include <iostream>

int main()
{
    char grade;

    std::cout << "What is your letter grade? ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "Good job";
            break;
        case 'C':
            std::cout << "You passed";
            break;
        case 'D':
            std::cout << "You need improvement";
            break;
        case 'F':
            std::cout << "You failed";
            break;
        default:
            std::cout << "Invalid grade";
            break;
    }

    return 0;
}
