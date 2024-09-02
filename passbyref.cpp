#include <iostream>

void swap(std::string &x, std::string &y)
{

    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    std::string x = "kool-aid";
    std::string y = "water";
    std::string temp;

    swap(x, y);
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
}
