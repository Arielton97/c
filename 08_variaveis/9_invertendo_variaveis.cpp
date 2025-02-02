#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    int numero1 = 10;

    //-------------------- Exemplo 1 --------------------
    cout << "Número 1 = " << numero1 << endl << endl;

    numero1 = numero1 * -1;

    cout << "----- Invertendo Valores Exemplo 1 -----\n";
    cout << "Número 1 = " << numero1 << "\n\n";

    //-------------------- Exemplo 2 -------------------
    numero1 = 20;
    cout << "----- Invertendo Valores Exemplo 2 -----\n";
    cout << "Número 1 = " << numero1 << endl;
    cout << "Número 1 = " << -numero1 << endl;
    cout << "Número 1 = " << numero1 << endl;

    //-------------------- Exemplo 3 --------------------
    numero1 = 30;
    cout << "----- Invertendo Valores Exemplo 3 -----\n";
    cout << "Número 1 = " << numero1 << endl;
    
    numero1 =- numero1;

    cout << "Número 1 = " << numero1 << endl;

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}