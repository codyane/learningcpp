#include <iostream>

int main()
{
    //sizeof () = determines the size of bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "Codi";
    double gpa = 2.5;
    char grade = 'C';
    bool student = true;
    char grades[] = {'A','B','C','D','F'};
    double prices[] = {123.25,124.5,124.3};

    std::cout << sizeof(gpa) << "bytes\n";
    std::cout << sizeof(grade) << "bytes\n";
    std::cout << sizeof(student) << "bytes\n";
    std::cout << sizeof(grades) << "bytes\n";

    // find the elements in a array;
    std::cout << sizeof(prices)/sizeof(double) << "elements\n";

    return 0;
}