#include <iostream>

// Function prototypes
double rectangle(double length, double breadth);
double cuboid(double length, double breadth, double height);

int main() {
    double length = 6.0;
    double breadth = 8.0;
    double height = 9.0;

    double volume = cuboid(length, breadth, height); 
    double area = rectangle(length, breadth);

    // Output results
    std::cout << "The area of the rectangle is: " << area << " cm^2" << '\n';
    std::cout << "The volume of the cuboid is: " << volume << " cm^3" << '\n';

    return 0;
}

double rectangle(double length, double breadth) {
    return length * breadth; // Calculate the area of the rectangle
}

double cuboid(double length, double breadth, double height) {
    return length * breadth * height; // Calculate the volume of the cuboid
}
