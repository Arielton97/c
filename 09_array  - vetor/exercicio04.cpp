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
    int maior = 0;
    int menor = 0;
    int igual = 0;

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Entre com o array na posição " << i << ": ";
        cin >> numVetor[i];
    }

    int posicaoPrimeiroArray = numVetor[0];
    cout << "\nO array na posição 0 é " << posicaoPrimeiroArray << ".\n\n";

    for (size_t i = 0; i < 5; i++)
    {
        //cout << numVetor[i] << endl;
        int value = numVetor[i];

        if (value > posicaoPrimeiroArray)
        {
            cout << "o valor " << value << " é maior que " << posicaoPrimeiroArray << endl;
            maior++;
        } else if (value < posicaoPrimeiroArray)
        {
            cout << "o valor " << value << " é menor que " << posicaoPrimeiroArray << endl;
            menor++;
        } else
        {
            cout << "o valor " << value << " é igual a " << posicaoPrimeiroArray << endl;
            igual++;
        }
    }

    cout << "\nO total de valores maiores que " << posicaoPrimeiroArray << " são: " << maior << endl;
    cout << "O total de valores menores que " << posicaoPrimeiroArray << " são: " << menor << endl;
    cout << "O total de valores iguais a " << posicaoPrimeiroArray << " são: " << igual << endl;
    
    
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}