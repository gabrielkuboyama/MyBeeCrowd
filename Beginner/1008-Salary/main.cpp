#include <iostream>
#include <iomanip>

int main() {

    int number, hours;
    float salary;

    std::cin >> number >> hours >> salary;

    std::cout << "NUMBER = " << number << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "SALARY = U$ " << (hours * salary) << std::endl;

    return 0;
}