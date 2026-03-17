#include <iostream>
#include <iomanip>

int main() {

    int code1, code2 , unit1, unit2;
    float price1, price2;

    std::cin >> code1 >> unit1 >> price1;
    std::cin >> code2 >> unit2 >> price2;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << ((price1 * unit1 ) + (price2 * unit2)) << std::endl;

    return 0;
}