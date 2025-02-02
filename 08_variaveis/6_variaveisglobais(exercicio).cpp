#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;
    
string nome;
double nota1, nota2, nota3, nota4;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /* Exercício Variáveis Globais e Locais Média Aluno
    Crie um algoritmo que leia o nome e as 4 notas de um aluno e depois 
    imprima o nome e a média do aluno usando as Variáveis Globais e Locais. 
    */

    cout << "----------------------------\n";
    cout << "Calcula média\n";
    cout << "----------------------------\n";
    cout << "Olá, qual o seu nome: ";
    getline(cin, nome);

    cout << "Seja bem vindo " << nome << "\n\n";

    cout << "Entre com a primeira nota: ";
    cin >> nota1;

    cout << "Entre com a segunda nota: ";
    cin >> nota2;

    cout << "Entre com a terceira nota: ";
    cin >> nota3;

    cout << "Entre com a quarta nota: ";
    cin >> nota4;

    double nfinal = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "\n\n";
    cout << "--------------------------------------------------------\n";
    cout << "Média final\n";
    cout << "\n" << nome << " sua média final foi " << nfinal << ".\n";
    cout << "--------------------------------------------------------\n"; 

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}