#include <iostream>

// typedef starts outside vefore the function

// #include <vector> //used to typedef 

typedef std::string text_t;

//typedef std::vector<std::pair<std::string,int>> pairlist_t; 
// _t is mostly used to show that its a type def

int main(){

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           new identifier for an existing type
    //           helps with readablity and reduces typos

    text_t firstname = "Parth";

    std::cout << firstname << '\n';

    return 0;

}
