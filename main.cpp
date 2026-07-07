#include <iostream>

int main(){
    // apagando comentários apenas para deixar mais limpo e exercitar a memória

    int num1;
    int num2;
    int resultado;
    int operacao;

    std::cout << "===== CALCULADORA =====" << std::endl;

    std::cout << "Escolha uma operacao: \n"
              << "1 - Soma\n"
              << "2 - Subtracao\n"
              << "3 - Multiplicacao\n"
              << "4 - Divisao\n\n";

    std::cout << "Digite aqui sua escolha: ";
    std::cin >> operacao;

    std::cout << std::endl;

    std::cout << "Insira o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Insira o segundo numero: ";
    std::cin >> num2;

    std::cout << std::endl;

    if (operacao == 1){
        resultado = num1 + num2;

        std::cout << "O resultado da soma: " << resultado << std::endl;
    }

    if (operacao == 2){
        resultado = num1 - num2;

        std::cout << "O resultado da subtracao: " << resultado << std::endl;
    }

    if (operacao == 3){
        resultado = num1 * num2;

        std::cout << "O resultado da multiplicacao: " << resultado << std::endl;
    }

    if (operacao == 4){
        resultado = num1 / num2;

        std::cout << "O resultado da divisao: " << resultado << std::endl;
    }

    return 0;
}