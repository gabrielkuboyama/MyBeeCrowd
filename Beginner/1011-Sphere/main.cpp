#include <iostream>
#include <iomanip>

int main() {

    const double pi = 3.14159;
    const double a = 4.0/3;
    int radius = 0;

    std::cin >> radius;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "VOLUME = " << (a * pi * radius * radius * radius) << std::endl;
    
    return 0;
}