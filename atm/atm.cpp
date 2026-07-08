#include <iostream>
#include <iomanip>

int main(){
    double balance;
    int option;

    // o termo 'fixed' é um manipulador de saída, que altera a forma de como os números float/double são exibidos
        // o termo 'setprecision' também é outro manipulador de saída, que define quantas casas decimais serão exibidas
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "==========================\n";
    std::cout << "     CAIXA ELETRÔNICO\n";
    std::cout << "==========================\n";

    std::cout << "\nInforme o saldo inicial da conta: R$";
    std::cin >> balance;

    std::cout << "\nSaldo inicial: R$" << balance << std::endl;

    return 0;
}