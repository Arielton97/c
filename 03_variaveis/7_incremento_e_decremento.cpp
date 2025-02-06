#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    // Inicializando com 0
    int numero1 = 0;

    // Imprimindo o resultado
    cout << "---------- Exemplo 1 ----------\n";
    cout << numero1 << "\n\n";

    // Somando 1 na variável
    numero1 = numero1 + 1; // Exemplo 1 Incremento

    // Imprimindo o resultado
    cout << numero1 << "\n\n";

    // Somando 1 na variável
    numero1++; // Exemplo 2 Incremento

    // Imprimindo o resultado
    cout << "---------- Exemplo 2 ----------\n";
    cout << numero1 << "\n\n";

    // Decremento 1 na variável
    numero1--; // Exemplo 2 Decremento

    // Imprimindo o resultado
    cout << numero1 << "\n\n";

    // Somando 1 na variável
    numero1 += 1; // Exemplo 3 de Incremento

    // Imprimindo o resultado
    cout << "---------- Exemplo 3 ----------\n";
    cout << numero1 << "\n\n";

    // Decremento 1 na variável
    numero1 -= 1; // Exemplo 3 de Decremento
    cout << numero1 << "\n\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}