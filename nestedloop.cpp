#include <iostream>

int main ()
{
    // nested loop is a loop inside a loop

    for (int i = 1; i <=3; i++) {
        for (int j = 1; j <=10; j++){
            std::cout << j << ' ';
        }
    std::cout << '\n';
    }

    return 0;
}