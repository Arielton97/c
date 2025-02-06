#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

#define nome cout << "Introdução a linguagem C++\n"
#define pi 3.1415

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /*
    string nome = "Arielton Ribeiro Peres\n";
    cout << nome;
    */

    nome;

    cout << "O valor de pi é " << pi << "\n\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}