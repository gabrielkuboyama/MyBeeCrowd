#include <iostream>

// mal mal mal
// int main()
// {

//     int N = 0;
//     std::cin >> N;
//     int temp = N;

//     int cem, cinquenta, vinte, dez, cinco, dois, um;
//     cem = cinquenta = vinte = dez = cinco = dois = um = 0;

//     while (temp >= 100)
//     {
//         cem += 1;
//         temp -= 100;
//     }
//     while (temp >= 50)
//     {
//         cinquenta += 1;
//         temp -= 50;
//     }
//     while (temp >= 20)
//     {
//         vinte += 1;
//         temp -= 20;
//     }
//     while (temp >= 10)
//     {
//         dez += 1;
//         temp -= 10;
//     }
//     while (temp >= 5)
//     {
//         cinco += 1;
//         temp -= 5;
//     }
//     while (temp >= 2)
//     {
//         dois += 1;
//         temp -= 2;
//     }
//     while (temp >= 1)
//     {
//         um += 1;
//         temp -= 1;
//     }

//     std::cout << N << std::endl;
//     std::cout << cem << " nota(s) de R$ 100,00" << std::endl;
//     std::cout << cinquenta << " nota(s) de R$ 50,00" << std::endl;
//     std::cout << vinte << " nota(s) de R$ 20,00" << std::endl;
//     std::cout << dez << " nota(s) de R$ 10,00" << std::endl;
//     std::cout << cinco << " nota(s) de R$ 5,00" << std::endl;
//     std::cout << dois << " nota(s) de R$ 2,00" << std::endl;
//     std::cout << um << " nota(s) de R$ 1,00" << std::endl;

//     return 0;
// }

// Sugestão do Gemini

#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N)) return 0;

    std::cout << N << std::endl;

    // Armazenamos as notas em um array para iterar sobre elas
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int temp = N;

    for (int nota : notas) {
        // Quantidade de notas: divisão inteira
        int quantidade = temp / nota;
        
        // Atualiza o que restou: operador de resto
        temp %= nota;

        std::cout << quantidade << " nota(s) de R$ " << nota << ",00" << std::endl;
    }

    return 0;
}