#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * Crie um algoritmo que contenha um vetor de 5 valores inteiros
     * depois solicite ao usuário que digite os 5 números para preencher esse valor
     * em seguida, exiba na tela os valores ímpares
     */

    int numInteiros[5];
    
    for (size_t i = 1; i <= 5; i++)
    {
        cout << "Digite o " << i << "º número inteiro: ";
        cin >> numInteiros[i];
    }

    cout << "Imprimindo apenas os números impares...\n";
    for (size_t i = 1; i <= 5; i++)
    {
        //cout << numInteiros[i] << " \n";
        int numImpar = numInteiros[i];
        if (numImpar % 2 != 0)
        {
            cout << numImpar << " \n";
        }
    }



    
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}