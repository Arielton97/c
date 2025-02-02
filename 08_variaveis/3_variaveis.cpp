// Crie um algoritmo que converta metros para centímetros
// 1 metro = 100 centímetros

#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    int metros, centimetro;

    cout << "Entre com o valor em metros: ";
    cin >> metros;

    centimetro  = metros * 100;

    cout << metros << " metros correspondem a " << centimetro << " centímetros.\n";

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}