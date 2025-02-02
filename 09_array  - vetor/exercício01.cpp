#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * Crie um algoritmo que contenha um vetor de 5 números inteiros
     * depois solicite ao usuário que digite os 5 números
     * em seguida imprima os números na ordem inversa em que forma digitados;
     */

    int numInteiros[5];    
    
    for (size_t i = 1; i <= 5; i++)
    {
        cout << "Digite o " << i << "º número inteiros: ";
        cin >> numInteiros[i];
    }

    cout << "Imprimindo os números na ordem inversa\n";
    for (size_t i = 5, j = 1; i > 0, j <= 5; i--, j++)
    {
        cout << "O " << j << "º número inteiro é " << numInteiros[i] << ".\n";

    }
        

    
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}