#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     *  Fazer a média de notas de uma turma de 8 alunos
     */

    // var
    int i;
    float media, soma;
    float md[8];

    // inicio
    for (i = 1; i < md[8]; i++)
    {// leia 
        cin >> md[i];
        soma += md[i];
    }
    
    media = soma /8;

    // escreva
    cout << media << endl;

    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}