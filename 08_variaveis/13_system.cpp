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
     * ESTRUTURA PADRÃO
     */

    //  system("systemctl status ssh");
    // criando uma pasta
    //  system("mkdir PastaSystem34");
    //  system("mkdir Pasta System 34");
    // removendo pastas
    //  system("rmdir PastaSystem34 Pasta System 34");
    //  system("ip a");

    //  system("ping www.google.com");
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("PAUSE");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}