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
     *  % pega o resto da divisão
     */

    int numero1, resto1;

    // pega o resto da divisão
    numero1 = 10;
    resto1 = numero1 % 2; // % resto
    cout << "O resto da divisão de " << numero1 << " é " << resto1 << ".\n\n";
    
    // -----------------------

    int numero2, resto2;
    numero2 = 10;
    resto2 = numero2 % 3;
    cout << "O resto da divisão de " << numero2 << " é " << resto2 << ".\n\n";
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}