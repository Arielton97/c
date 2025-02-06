#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

void nomeSobrenome(string nome, string sobrenome);

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  Exercício de funções 2
     *  Crie uma função que receba o nome e o sobrenome, 
     *  depois junte ambos e imprima-os na tela.
     */

    string nome, sobrenome;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite seu sobrenome: ";
    cin >> sobrenome;

    nomeSobrenome(nome, sobrenome);

    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}

void nomeSobrenome(string nome, string sobrenome) {

    cout << nome << " " << sobrenome << endl;

}