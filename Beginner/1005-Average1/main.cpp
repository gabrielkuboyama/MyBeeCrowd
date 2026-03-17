#include <iostream>
#include <iomanip>

int main() {

    const double w1 = 3.5, w2 = 7.5;
    double A, B;

    std::cin >> A >> B;

    double result = (A * w1 + B * w2) / (w1 + w2);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << result << std::endl;

    return 0;
}