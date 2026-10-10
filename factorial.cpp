#include <iostream>

// Função simples para calcular o fatorial de um número
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    std::cout << "Calculando o fatorial de " << number << ":\n";
    std::cout << number << "! = " << factorial(number) << std::endl;
    return 0;
}
