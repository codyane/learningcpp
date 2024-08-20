#include <iostream>

int main ()
{
    // for loop is a type of loop in which a block of code will execute
    // particular number of times

// i = index sometimes
// this is to write happy new year 5 times.
  /*  for (int i = 1; i <=5; i++){
        std::cout << "Happy New Year \n";
    } */

/*
//count till 10 then write happy new year
    for (int i = 1; i <=10; i++){
        std::cout << i << '\n' ;
    }
    
    std::cout << "Happy New Year \n";
*/

/*
//count till 10 then write happy new year
// this time add 2 numbers till 10
    for (int i = 1; i <=10; i+=2){
        std::cout << i << '\n' ;
    }
    
    std::cout << "Happy New Year \n";
*/

//count down till 0 from 10
// even for(int i =10; i >=0; i--) works
    for (int i = 10; i >=0; i-=1){
        std::cout << i << '\n';
    }

    return 0;
}