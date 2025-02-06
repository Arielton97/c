#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;
void somarNumeros(int num);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  Exercício de recursividade
     *  Crie um algoritmo usando RECURSIVIDADE que solicite ao usuário 
     *  que digite um número e em seguida, calcule a somatória do 1 ao número que voce 
     *  digitou.
     * 
     *  Ex: Se digitar 5: 1 + 2 + 3 + 4 + 5 = 15
     */

    int numero;

    cout << "Digite um número:";
    cin >> numero;

    somarNumeros(numero);

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void somarNumeros(int num) {


    cout << "executando função...\n";
    cout << "Número: " << num << endl;

    int valorNum;

    if (valorNum > num)
    {
        valorNum = num + (num -1);
    }
    
    cout << "Número: " << valorNum << endl;
    

}