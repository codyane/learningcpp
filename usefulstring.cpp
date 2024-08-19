#include <iostream>

int main ()
{
    std::string name;

    std::cout << "Enter Your name: ";
    std::getline(std::cin, name); // used when spaces are there

/*
     if(name.length() > 12) {
        std::cout << "Your name cant be over 12 charc";
     }
     else {
        std::cout << "Welcome " << name;
     }
*/

/*
// how see when input is empty

    if(name.empty()){
        std::cout << "You didn't enter your name";
    }
    else {
        std:: cout << "Hello " << name;
    }

*/

/*
// add something to the end of string

    name.append ("@gmail.com");

    std::cout << "Your username is now " << name ;
*/

/*
// add something to the string

    name.insert (0,"@");

    std::cout << "Your username is now " << name ;
*/

// how find space or character
//std:: count << name.find(' ');

//erase charc of string

name.erase (0,3);

}