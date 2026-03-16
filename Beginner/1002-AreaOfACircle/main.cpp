#include <iostream>
#include <iomanip>

int main() {
    const double n = 3.14159;
    double R = 0;
    std::cin >> R;
    double A = n * (R * R);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << A << std::endl;
    return 0;
}