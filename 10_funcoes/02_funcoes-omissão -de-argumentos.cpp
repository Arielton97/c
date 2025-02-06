#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

// prototipar = apresentar para o programa
void funcaoNome(string nomeUsuario = "Arielton");
void funcaoIdade(int idadeUsuario = 28);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     * ESTRUTURA PADRÃO
     */

    funcaoNome();
    funcaoIdade();

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void funcaoNome(string nomeUsuario) {
    cout << "Nome: " << nomeUsuario << endl;
}

void funcaoIdade(int idadeUsuario) {
    cout << "Idade: " << idadeUsuario << endl;
}