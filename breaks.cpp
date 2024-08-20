#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

     for (int i = 1; i <= 20; i++){
            //skip 4 from the couting
        if (i == 4){
            continue;
        }
        // break loop when i = 13
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }

    return 0;
}
