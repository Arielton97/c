#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    // Acentos - Trata acentos
    setlocale(LC_ALL, "");

    int numero1, numero2, numero3, soma;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "Digite o terceiro número: ";
    cin >> numero3;

    soma = numero1 + numero2 + numero3;

    cout << "\n\nA soma dos três números é: " << soma << "\n";

    system("PAUSE");
    return 0;
}