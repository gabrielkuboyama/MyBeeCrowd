#include <iostream>
#include <iomanip>

int main() {

    int hours, speed;
    hours = speed = 0;

    std::cin >> hours >> speed;

    double km = speed * hours;

    double res = km/12;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << res << std::endl;

    return 0;
}