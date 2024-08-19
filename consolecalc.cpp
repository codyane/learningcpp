#include <iostream>
#include <algorithm> //needed for min & max
#include <cmath> //needed for maths ofc

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**** CALCULATOR **** \n" ;

        std::cout << "Enter Either (+ , - , *, /): ";
        std::cin >> op;

        std::cout << "Enter Num#1" << '\n';
        std::cin >> num1;

        std::cout << "Enter Num#2" << '\n';
        std::cin >> num2;

            switch(op){
                case '+':
                    result = num1 + num2;
                    std::cout << "Your result is : " << result << '\n';
                break;

                case '-':
                    result = num1 - num2;
                    std::cout << "Your result is : " << result << '\n';
                break;

                case '*':
                    result = num1 * num2;
                    std::cout << "Your result is : " << result << '\n';
                break;

                case '/':
                    result = num1 * num2;
                    std::cout << "Your result is : " << result << "\n";
                
                default:
                    std::cout << "That wasnt a valid response << '\n ";
                    break;              
                
            }

    std::cout << "********" ;

    return 0;
}