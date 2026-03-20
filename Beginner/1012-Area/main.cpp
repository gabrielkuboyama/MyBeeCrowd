#include <iostream>
#include <iomanip>

int main() {

    double A, B, C;
    A = B = C = 0;

    std::cin >> A >> B >> C;

    double triangule = (A * C)/2;
    double circle = 3.14159 * C * C;
    double trapezium = ((A+B)*C)/2;
    double square = B * B;
    double rectangule = A * B;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "TRIANGULO: " << triangule << std::endl;
    std::cout << "CIRCULO: " << circle << std::endl;
    std::cout << "TRAPEZIO: " << trapezium << std::endl;
    std::cout << "QUADRADO: " << square << std::endl;
    std::cout << "RETANGULO: " << rectangule << std::endl;

    return 0;
}