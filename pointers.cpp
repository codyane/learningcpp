#include <iostream>

int main()
{
    //pointers = variable that stores a memory address of another variable
    //             sometimes its easier to work with and address

    // & address-of operator
    // * deference operator

    std::string name = "cody";
    int age = 15;
    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    // std::string *pFreePizzas = &freePizzas;    
    // array is already and address
    std::string *pFreePizzas = freePizzas; 

    std::cout << pName << '\n' ;
    std::cout << *pAge << '\n' ;
    std::cout << freePizzas << '\n';

    return 0;
}