#include <iostream>

int main(){

    //integer (whole number)
    int age =15;
    int year = 28;
    int days = 24;

    //double (a number including decimal)
    double price = 10.99;
    double percentage = 42.58;

    //char (single character,needs to be in single quotes)
    char grade = 'A';
    char inital = 'P';

    //boolean (True or False)
    bool student = true;
    bool power = false;

    //string (objects)
    std::string random = "does";
    std::string wait = "yoyo";

    //outputs 
    std::cout << age << '\n';
    std::cout << price << '\n' ;
    std::cout << grade << '\n' ;
    std::cout << random << '\n';
    //or this can also be done for string
    std::cout << "will it count" << '\n' << wait << '\n';



    return 0;

}
