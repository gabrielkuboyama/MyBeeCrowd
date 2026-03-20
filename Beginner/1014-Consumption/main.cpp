#include <iostream>
#include <iomanip>

int main() {

    int x = 0;
    double y = 0.0;

    std::cin >> x >> y;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << (x/y) << " km/l" << std::endl;

    return 0;
}