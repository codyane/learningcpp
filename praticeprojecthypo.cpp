#include <iostream>
#include <algorithm> //needed for min & max
#include <cmath> //needed for maths ofc

int main ()
{
    double a;
    double b;
    double c;
    double d;

    std::cout << "Please insert the value of side one ? " << '\n' ;
    std::cin >> a ;

    std::cout << "Please insert the values of side two ? " << '\n';
    std::cin >> b ; 

    c = std::pow(a,2)+pow(b,2);
    d = std::sqrt (c);

    std::cout << "The value of hypotenuse is = " << d <<  '\n';

    return 0 ;
}