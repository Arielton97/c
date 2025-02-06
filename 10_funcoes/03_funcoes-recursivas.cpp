#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

void contarDeUmAteDez(int num, int i = 1);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     * ESTRUTURA PADRÃO
     */

    int i = 1;

    cout << "---------- Resultado com WHILE - EM QUANTO ----------";
    while (i < 11)
    {
        cout << "Número while:" << i++ << endl;
    }
    
    cout << "\n\n";
    contarDeUmAteDez(10);

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void contarDeUmAteDez(int num, int i) {

    cout << "Número função: " << i << endl;

    // if -se
    if (num > i)
    {
        contarDeUmAteDez(num, ++i);
    }
    

}