#include <iostream>

int main(){

    int secret_number;
    int guess;
    int attempts;
    bool win;

    secret_number = 50;
    attempts = 0;
    win = false;

    std::cout << "===============================\n";
    std::cout << "===== JOGO DA ADIVINHACAO =====\n";
    std::cout << "===============================";

    std::cout << "\nTente adivinhar o numero secreto!\n";

    while(win == false){
        std::cout << "\nDigite um numero: ";
        std::cin >> guess;

        attempts = attempts + 1;

        if (guess == secret_number){
            std::cout << "\nParabens! Voce acertou." << std::endl;
        }

        if (guess < secret_number){
            std::cout << "\nO numero secreto e maior." << std::endl;
        }

        if (guess > secret_number){
            std::cout << "\nO numero secreto e menor." << std::endl;
        }
    }

    std::cout << "\nSeu palpite foi: " << guess << std::endl;
    std::cout << "Tentativas: " << attempts << std::endl;

    return 0;
}