#include <iostream>
#include <iomanip>

int main() {

    const double wA = 2, wB = 3, wC = 5;

    double A, B, C;
    A = B = C = 0;

    std::cin >> A >> B >> C;

    double result = ((A * wA) + (B * wB) + (C * wC)) / (wA + wB + wC);

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << result << std::endl;

    return 0;

}