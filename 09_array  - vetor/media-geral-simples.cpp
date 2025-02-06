#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     *  Fazer a média de notas de uma turma de 8 alunos
     */

    // var
    float md1, md2, md3, md4, md5, md6, md7, md8, media;

    // inicio
    // leia 
    cin >> md1 >> md2 >> md3 >> md4 >> md5 >> md6 >> md7 >> md8;
    media = (md1 + md2 + md3 + md4 + md5 + md6 + md7 + md8) / 8;
    // escreva
    cout << media << endl;

    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}