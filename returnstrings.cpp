#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main (){

    std::string firstName = "Codyane"; //string 1
    std::string lastName = "Monster"; // string 2
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hellow " << fullName ;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + string2;
}
