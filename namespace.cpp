#include <iostream>

// namespace is made outside of main function.

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main (){

    // Namespace = provides a soulution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities 
    //             

    int x = 0;

    // we can also use " using namespace first " to use a specific 
    // name space without need of a prefix in function.

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    return 0;

}