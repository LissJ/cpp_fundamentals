#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

int main(){

    int secret_number;
    int guess;
    int attempts;

    bool win;
    char play_again;

    int guesses[100];
    int total_guesses;

    srand(time(nullptr));

    play_again = 's';

    while(play_again == 's'){
        std::cout << "\n\n===============================\n";
        std::cout << "===== JOGO DA ADIVINHACAO =====\n";
        std::cout << "===============================";

        std::cout << "\nO computador escolheu um numero entre 1 e 100." << std::endl;
        std::cout << "Tente adivinhar qual e esse numero." << std::endl;

        secret_number = (rand() % 100) + 1;
        attempts = 0;
        win = false;

        total_guesses = 0;

        while(win == false){
            std::cout << "\nDigite um numero: ";
            std::cin >> guess;

            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(1000, '\n');

                std::cout << "\nEntrada invalida. Digite apenas numeros.\n";

                continue;
            }

            if(guess < 1 || guess > 100){
                std::cout << "\nDigite um numero valido entre 1 e 100.";
                continue;
            }

            guesses[total_guesses] = guess;
            total_guesses++;

            attempts = attempts + 1;

            if (guess == secret_number){
                win = true;

                std::cout << "\n===============================\n";
                std::cout << "Parabens! Voce acertou." << std::endl;
                std::cout << "Tentativas: " << attempts << std::endl;
                std::cout << "\nHistorico de palpites:\n";
                for (int i = 0; i < total_guesses; i++)
                {  std::cout << guesses[i] << std::endl;  }
                std::cout << "===============================\n";

                do{
                    std::cout << "\nDeseja jogar novamente? [s/n]: ";
                    std::cin >> play_again;
                    play_again = std::tolower(play_again);

                    if (play_again != 's' && play_again != 'n'){
                        std::cout << "\nOpcao invalida. Digite apenas 's' ou 'n'.\n";
                    }

                } while (play_again != 's' && play_again != 'n');
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