#include <iostream>

int main ()
{
    double temp;
    char unit;

    std::cout << "TEMPERATURE CONVERSION \n";

    std::cout << "F = Farenheit\n";
    std::cout << "C = celcius\n";
    std::cout << "What unit would you like to conver to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f' ) {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is : " << temp << "F\n";
    }

    std::cout << "********************\n";
    
        return 0;
}