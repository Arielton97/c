#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  Crie um algoritmo usando enum que armazene as letras do alfabeto de A a K 
     *  e após isso use for para imprimir os números de 0 a 10 usando enum.
     */

    enum AlfabetoLimitado {
        A, B, C, D, E, F, G, H, I, J, K
    };

    for (size_t i = A; i <= K; i++)
    {
        cout << i << endl;
    }
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}