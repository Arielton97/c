#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /*
        Crie um algoritmo que solicite ao usuário 3 número inteiros e depois calcule e apresente na tela:
        1) O dobro do primeiro número mais a metade do segundo número.
        2) O triplo do número primeiro mais o terceiro número.
        3) O terceiro número multiplicado por 2.
    */

    double numero1, numero2, numero3;

    cout << "------------------------------------------------------\n";
    cout << "Algoritmo que faz um calculo de três números\n\n";

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    // 1) O dobro do primeiro número mais a metade do segundo número.
    double resultado1 = (numero1 + numero1) + (numero2 / 2); 

    // 2) O triplo do número primeiro mais o terceiro número.
    double resultado2 = (numero1 * 3) + numero3;

    // 3) O terceiro número multiplicado por 2.
    double resultado3 = numero3 * 2;

    cout << "\n1) O dobro do primeiro número mais a metade do segundo número é >> " << resultado1 << ".\n";
    cout << "2) O triplo do número primeiro mais o terceiro número é >> " << resultado2 << ".\n";
    cout << "2) O terceiro número multiplicado por 2 é >> " << resultado3 << ".\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}