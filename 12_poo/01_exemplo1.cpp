#include <iostream> // Entrada e saída de dados
#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

class Aluno
{
public:

    // Objetos
    string nome = "Arielton Ribeiro";
    int idade = 28;
    string sexo = "Masculino";
    string estado;

    // Protótipos
    void verificaEstado(string estadoDoAluno);
};

// Construímos o nosso método
void Aluno::verificaEstado(string estadoDoAluno)
{

    if (estadoDoAluno == "SP")
    {
        this -> estado = "São Paulo";
    } else if (estadoDoAluno == "SC")
    {
        this -> estado = "Santa Catarina";
    } else
    {
        this -> estado = "Distrito Federal";
    }
}


int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "Pt-br");

    /**
     *  ESTRUTURA PADRÃO
     */

    Aluno *dadosAlunos = new Aluno();

    cout << "Nome: " << dadosAlunos->nome << endl;
    cout << "Idade: " << dadosAlunos->idade << endl;
    cout << "Sexo: " << dadosAlunos->sexo << endl;

    dadosAlunos->verificaEstado("DF");
    cout << "Estado: " << dadosAlunos->estado << endl;

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}