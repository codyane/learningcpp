#include <iostream>
#include <algorithm> //needed for min & max
#include <cmath> //needed for maths ofc

int main()
{
    double x = 3;
    double y = 4;
    double z;
    double m;
    double p;
    double r;

//used to show greater variable 
        z = std::max(x, y);

//used to show lesser variable
        m = std::min(x,y);

//used to show the power
        p = std::pow(2,4);

//used to show squareroots 
        r = std::sqrt(9);

//output commands
        std::cout << "The lesser value is " << m << std::endl;
        std::cout << "The greater value is " << z << std::endl;
        std::cout << "This is 2 raised to 4 = "  << p << std::endl;
        std::cout << "This is the sqrt of 9 = " << r << std::endl;

    return 0;
}