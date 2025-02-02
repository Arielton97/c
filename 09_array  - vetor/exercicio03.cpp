#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * Crie um algoritmo que leia uma matriz de 2 x 2
     * usando o comando for e multiplique os elementos por 2 e imprima o resultado.
     */

    int num[2][2];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Digite o número da linha " << i << " e coluna " << j << ": ";
            cin >> num[i][j];
        }
    }


    cout << "Números Digitados:\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            int num1 = num[i][j];
            cout << num1 << "  ";
        }
        cout << "\n";
    }

    cout << "Números multiplicados por 2:\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            int num1 = num[i][j];
            int numResult = num1 * 2;
            cout << numResult << "  ";
        }
        cout << "\n";
    }
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}