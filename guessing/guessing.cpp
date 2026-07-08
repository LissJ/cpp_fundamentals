#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    int secret_number;
    int guess;
    int attempts;
    bool win;
    char play_again;

    srand(time(nullptr));

    play_again = 's';

    while(play_again == 's'){
        std::cout << "===============================\n";
        std::cout << "===== JOGO DA ADIVINHACAO =====\n";
        std::cout << "===============================";

        std::cout << "\nO computador escolheu um numero entre 1 e 100." << std::endl;
        std::cout << "Tente adivinhar qual e esse numero." << std::endl;

        secret_number = (rand() % 100) + 1;
        attempts = 0;
        win = false;

        while(win == false){
            std::cout << "\nDigite um numero: ";
            std::cin >> guess;

            if(guess < 1 || guess > 100){
                std::cout << "\nDigite um numero valido entre 1 e 100.";
                continue;
            }

            attempts = attempts + 1;

            if (guess == secret_number){
                win = true;

                std::cout << "\n============================\n";
                std::cout << "Parabens! Voce acertou." << std::endl;
                std::cout << "Tentativas: " << attempts << std::endl;
                std::cout << "============================\n";

                std::cout << "\nDeseja jogar novamente? [s/n]: ";
                std::cin >> play_again;
            }

            if (guess < secret_number){
                std::cout << "\nO numero secreto e maior." << std::endl;
            }

            if (guess > secret_number){
                std::cout << "\nO numero secreto e menor." << std::endl;
            }
        }
    }

    return 0;
}