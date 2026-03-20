#include <iostream>
#include <iomanip>

int main() {

    int A, B, C;
    
    std::cin >> A >> B >> C;
    
    int ab = (A+B+abs(A-B))/2;
    int maior = (ab+C+abs(ab-C))/2;

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}