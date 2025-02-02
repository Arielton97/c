#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /*
        Exercício - Total a receber no mês
        Crie um algoritmo que solicite ao usuário o valor que ele ganha por hora e
        o número de horas que ele trabalhou o mês. Depois calcule e mostre na tela
        o total que ele tem a receber por mês.
    */

    double valorHora, horaTrabalhada, salarioMes;

    cout << "---------- Calculadora de hora trabalhada ----------\n";
    cout << "Valor da sua hora: \n";
    cin >> valorHora;
    
    cout << "Horas trabalhadas esse mês: \n";
    cin >> horaTrabalhada;

    salarioMes = valorHora * horaTrabalhada;

    cout << "Seu total a receber esse mês é R$ " << salarioMes << ".\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}