#include <iostream>
#include <iomanip> // biblioteca responsável pelo setprecision e fixed
#include <limits> // biblioteca responsável pelo ignore()

// criando uma FUNÇÃO com VOID
    // void foi escolhido pois ele não retorna nada, como no main() por exemplo, que possui um 'return 0;'
void waitForEnter(){
    std::cout << "\nPressione ENTER para voltar ao menu...";

    // comandos responsáveis por não haver repetições do cabeçalho do 'MENU PRINCIPAL' durante as escolhas
        // utilizando a biblioteca <limits>
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // descarta qualquer coisa que o usuário digite até ele inserir o ENTER
    while (std::cin.get() != '\n');
}

int main(){
    double balance;
    double deposit_amout;
    int option;

    // o termo 'fixed' é um manipulador de saída, que altera a forma de como os números float/double são exibidos
        // o termo 'setprecision' também é outro manipulador de saída, que define quantas casas decimais serão exibidas
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "==========================\n";
    std::cout << "     CAIXA ELETRÔNICO\n";
    std::cout << "==========================\n";

    std::cout << "\nInforme o saldo inicial da conta: R$";
    std::cin >> balance;

    do{
        std::cout << "\n==========================" << std::endl;
        std::cout << "      MENU PRINCIPAL" << std::endl;
        std::cout << "==========================" << std::endl;

        std::cout << "\n[1] - Consultar saldo\n"
                  << "[2] - Depositar\n"
                  << "[3] - Sacar\n"
                  << "[4] - Sair\n";
        std::cout << "\nSaldo atual: R$" << balance << std::endl;

        std::cout << "\nEscolha uma das opcoes acima: ";
        std::cin >> option;

        switch(option){
            case 1:
                std::cout << "\n==========================" << std::endl;
                std::cout << "     CONSULTAR SALDO" << std::endl;
                std::cout << "==========================" << std::endl;

                std::cout << "\nSaldo disponível: R$" << balance << std::endl;

                // executando a função que definimos lá no topo do código
                waitForEnter();

                break;
            ;
            case 2:
                std::cout << "\n==========================" << std::endl;
                std::cout << "        DEPOSITO" << std::endl;
                std::cout << "==========================" << std::endl;

                std::cout << "Informe o valor do deposito: R$";
                std::cin >> deposit_amout;

                balance = balance + deposit_amout;

                std::cout << "\nDeposito realizado com SUCESSO!" << std::endl;
                std::cout << "Novo saldo: R$" << balance << std::endl;

                waitForEnter();

                break;
            ;
            case 3:
                std::cout << "\n[Sacar]\n";
                break;
            ;
            case 4:
                std::cout << "\n[Encerrando programa...]\n";
                break;
            ;
            default:
                std::cout << "\nOpcao invalida.\n";
                break;
        }
    } while(option != 4);

    return 0;
}