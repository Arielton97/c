#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// VG = Variável global - Acessamos dentro de outras funções
double nota1VG, nota2VG;

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    //VL = Variáveis Locais - Acessamos apenas dentro de nossa função
    double nota3VL, nota4VL;

    nota1VG = 9;
    nota2VG = 10;
    nota3VL = 5;
    nota4VL = 10;

    double media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;

    cout << "Média: " << media << "\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}