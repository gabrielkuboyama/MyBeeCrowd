#include <iostream>
#include <iomanip>

int main() {

    std::string name = "";
    double salary, sale;
    
    std::cin >> name >> salary >> sale;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << salary + (sale * 0.15) << std::endl;

    return 0;
}