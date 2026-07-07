#include <iostream>

int main(){

    int secret_number;
    int guess;
    int attempts;

    secret_number = 50;
    attempts = 0;

    std::cout << "===== JOGO DA ADIVINHACAO =====";

    std::cout << "\nTente adivinhar o numero secreto!\n";

    std::cout << "Digite um numero: ";
    std::cin >> guess;

    attempts = attempts + 1;

    if (guess == secret_number){
        std::cout << "\nParabens! Voce acertou." << std::endl;
    }

    if (guess < secret_number){
        std::cout << "\nO numero secreto e maior." << std::endl;
    }

    if (guess > secret_number){
        std::cout << "\nO numero secreto é menor." << std::endl;
    }

    std::cout << "\nSeu palpite foi: " << guess << std::endl;
    std::cout << "Tentativas: " << attempts << std::endl;

    return 0;
}