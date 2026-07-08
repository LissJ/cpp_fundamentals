#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    int secret_number;
    int guess;
    int attempts;
    bool win;

    srand(time(nullptr));

    secret_number = (rand() % 100) + 1;

    std::cout << "Numero secreto: " << secret_number << std::endl;

    attempts = 0;
    win = false;

    std::cout << "===============================\n";
    std::cout << "===== JOGO DA ADIVINHACAO =====\n";
    std::cout << "===============================";

    std::cout << "\nO computador escolheu um numero entre 1 e 100." << std::endl;
    std::cout << "Tente adivinhar qual e esse numero." << std::endl;

    while(win == false){
        std::cout << "\nDigite um numero: ";
        std::cin >> guess;

        attempts = attempts + 1;

        if (guess == secret_number){
            win = true;

            std::cout << "\n============================\n";
            std::cout << "Parabens! Voce acertou." << std::endl;
            std::cout << "Tentativas: " << attempts << std::endl;
            std::cout << "============================\n";
        }

        if (guess < secret_number){
            std::cout << "\nO numero secreto e maior." << std::endl;
        }

        if (guess > secret_number){
            std::cout << "\nO numero secreto e menor." << std::endl;
        }
    }

    return 0;
}