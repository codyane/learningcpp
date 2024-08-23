#include <iostream>


int main ()
{
        // array = a data structure that can hold multiple values
        // values are accessed by an index number
        // kind of like a variable that holds multiple values

    std::string car[] = {"Covette","Mustang","Camry"};

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

        std::string friends[3];

        friends[0] = "abc";
        friends[1] = "xyz";
        friends[2] = "pqr";

        std::cout << friends[0] << '\n';
        std::cout << friends[1] << '\n';
        std::cout << friends[2] << '\n';

            double prices[] = {21,7,69,18};

            std::cout << prices[1] << '\n';
            std::cout << prices[2] << '\n';
            std::cout << prices[3] << '\n';

    return 0;
}