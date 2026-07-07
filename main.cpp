#include <iostream>

int main(){
    //apagando comentários apenas para deixar mais limpo e exercitar a memória

    int num1;
    int num2;
    int resultado;

    std::cout << "===== CALCULADORA =====" << std::endl;

    std::cout << "Insira o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    resultado = num1 + num2;

    std::cout << "O resultado da soma: " << resultado << std::endl;

    return 0;
}