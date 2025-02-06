#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

/**Precisamos prototipar as funções para que elas funcionem, ou seja, 
precisamos apresentar a função para o programa o programa 
VOID = Tipo de retorno + nome da função e o argumentos.
*/
void funcaoMensagem();
void somarNumeros(int num1, int num2);
int somarTresNumeros(int n1, int n2, int n3);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * ESTRUTURA PADRÃO
     */

    funcaoMensagem();

    somarNumeros(12, 20);

    int n1, n2, n3, soma;

    cout << "Digite o primeiro número: ";
    cin >> n1;

    cout << "Digite o segundo número: ";
    cin >> n2;

    cout << "Digite o terceiro número: ";
    cin >> n3;

    soma = somarTresNumeros(n1, n2, n3);

    cout << "\n\nTotal soma três número: " << soma << endl;
    

    // Impede o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void funcaoMensagem()
{

    cout << "Curso de Lógica de programação!!\n\n";

}

void somarNumeros(int num1, int num2)
{

    cout << "Total: " << num1 + num2 << endl;

}

int somarTresNumeros(int n1, int n2, int n3)
{

    return n1 + n2 + n3;

}