#include <iostream>

// cout << (insertion operator) (output)
// cin >> (extraction operator) (input)

int main ()
{
    std::string name;
    int age;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name); // to allow spaces while input

    std::cout << "What's your age? ";
    std::cin >> age ;

    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is " << age ;
   
    return 0;
}