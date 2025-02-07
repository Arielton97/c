#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  ESTRUTURA PADRÃO
     */
    
    enum Roupas {meia, 
        camisa, 
        jaqueta, 
        pijama
    };

    Roupas roupaSelecionada;

    roupaSelecionada = camisa;

    cout << "---------- Exemplo 1 ----------\n";
    cout << roupaSelecionada << endl;


    // -------------------------------------

    enum MaterialEscolar {
        caderno = 10, 
        caneta, 
        lapis, 
        borracha
    };

    MaterialEscolar material;

    material = lapis;

    cout << "\n---------- Exemplo 2 ----------\n";
    cout << material << endl;

    
    // ------------------------------------

    enum Calcados {
        tennis = 10,
        sapato,
        chinelo,
        sandália
    };

    Calcados calcadoSelecionado;

    calcadoSelecionado = chinelo;

    cout << "\n---------- Exemplo 3 ----------\n";
    cout << calcadoSelecionado << endl;

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}