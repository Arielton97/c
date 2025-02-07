#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

#include "Aluno.h"

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     *  ESTRUTURA PADRÃO
     */

    Aluno *dadosAluno1 = new Aluno(1);
    Aluno *dadosAluno2 = new Aluno(2);
    Aluno *dadosAluno3 = new Aluno(3);
    Aluno *dadosAluno4 = new Aluno(4);

    dadosAluno1->exibirDadosNaTela();
    dadosAluno2->exibirDadosNaTela();
    dadosAluno3->exibirDadosNaTela();
    dadosAluno4->exibirDadosNaTela();

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}