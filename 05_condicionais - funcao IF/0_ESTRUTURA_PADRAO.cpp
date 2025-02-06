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
     * ESTRUTURA PADRÃO
    

        if (condition)
        {
            // code //
        }

     */

    int num1, num2;
    string fruta;

    num1 = 20;

    // IF   =   SE
    if (num1 > 5)
    {
        cout << "----------- Resultado IF Numero 1 ----------\n";
        cout << "O número 1 é maior que 5\n";
    }
    

    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}