#include <iostream>

int main(){
    // eu poderia declarar o std antes, após o include do iostream, mas é uma boa prática ir utilizando conforma você faz o código
        // exemplo de como ficaria se eu declarasse antes:
            // using namespace std;

    // o comando cout é basicamente o print do python, e o std é a biblioteca standard do c++
    std::cout << "Primeira calculadora em C++ :D " << std::endl;

    // agora eu vou declarar as variáveis que vão receber o valor para realizar o cálculo
        // eu também poderia declarar todos na mesma linha:
            // int num1, num2;
    int num1;       // int são números inteiros

    // cin é quando o usuário insere um número
        // funciona como se fosse o input() do python
            // ele pega essa inserção e armazena dentro da variável 'num1'
    std::cin >> num1;
    
    // com o cout, escrevemos um texto e adicionamos a variável para que ela seja exibida no visor
        // com  isso, encerra com um endline, que nada mais é do que um \n
    std::cout << "Voce digitou o numero: " << num1 << std::endl;

    // básico da estrutura
    return 0;
}