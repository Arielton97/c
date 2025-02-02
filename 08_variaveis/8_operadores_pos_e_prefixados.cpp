#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    double numero1 = 10;

    cout << "---------- Valor inicial ----------\n";
    cout << "O número vale: " << numero1 << "\n";

    // Multiplica o valor por 2
    numero1 *= 2;
    cout << "Número multiplicado por 2: " << numero1 << "\n";
    numero1 = 10;

    // Dividido por 4
    numero1 /= 4;
    cout << "Número dividido por 4: " << numero1 << "\n\n";
    numero1 = 10;

    // Valor pós fixado
    cout << "---------- Valor Pós-fixado ----------\n";
    cout << "Número: " << numero1++ << "\n";
    cout << "Número: " << numero1 << "\n";
    numero1 = 10;

    // Valor pré fixado
    cout << "---------- Valor Pré-fixado ----------\n";
    cout << "Número: " << ++numero1 << "\n\n";
    numero1 = 10;

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}