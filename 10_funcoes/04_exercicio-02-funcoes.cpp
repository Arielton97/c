#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

void numeroMenor(int num1, int num2);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  Crie uma função que receba dois números inteiros
     *  e retorne o menor número entre eles.
     */

    int numero1, numero2;

    cout << "VERIFICAR O NÚMERO MAIOR\n";
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    numeroMenor(numero1, numero2);
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void numeroMenor(int num1, int num2) {
    if (num1 < num2)
    {
        cout << "O número menor é " << num1 << " e o número menor é " << num2 << endl;
    } else cout << "O número menor é " << num2 << " e o número menor é " << num1 << endl;
    
}