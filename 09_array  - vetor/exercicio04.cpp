#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * Crie um algoritmo que contenha um vetor de 5 números inteiros, 
     * depois solicite ao usuário a entrada desses números e no final 
     * mostre quantos números possuem um valor maior, menor ou igual ao primeiro número do vetor.
     */

    int numVetor[5];

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Entre com o array na posição " << i << ": ";
        cin >> numVetor[i];
    }

    int posicaoArray = numVetor[0];
    cout << "O array na posição 0 é " << posicaoArray << ".\n\n";

    for (size_t i = 0; i < 5; i++)
    {
        if (i > posicaoArray)
        {
            cout << numVetor[i];
        }
        
    }
    
    
    
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}