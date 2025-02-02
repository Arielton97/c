#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     * ESTRUTURA PADRÃO
     */

    string matriz[2][3];
    //int linha, coluna;

    matriz[0][0] = "1"; matriz[0][1] = "2"; matriz[0][2] = "3";
    matriz[1][0] = "4"; matriz[1][1] = "5"; matriz[1][2] = "6";

    cout << " ------------------- VETOR de números ----------------- \n";
    for (size_t linha = 0; linha < 2; linha++)
    {
        for (size_t coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }

        cout << "\n";
        
    }

    // -------------------------------------------------------------------
    matriz[0][0] = "A"; matriz[0][1] = "B"; matriz[0][2] = "C";
    matriz[1][0] = "D"; matriz[1][1] = "E"; matriz[1][2] = "F";

    cout << " ------------------- VETOR de letras ----------------- \n";
    for (size_t linha = 0; linha < 2; linha++)
    {
        for (size_t coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }

        cout << "\n";
        
    }

    // -------------------------------------------------------------------

    int matrizPreenchimentoAutomatico[10][8];
    //int linhaPreenchimentoAutomatico, colunaPreenchimentoAutomatico;
    
    cout << " ------------------- MATRIZ de inteiros ----------------- \n";
    for (size_t linhaPreenchimentoAutomatico = 0; linhaPreenchimentoAutomatico < 10; linhaPreenchimentoAutomatico++)
    {
        for (size_t colunaPreenchimentoAutomatico = 0; colunaPreenchimentoAutomatico < 8; colunaPreenchimentoAutomatico++)
        {
            matrizPreenchimentoAutomatico[linhaPreenchimentoAutomatico][colunaPreenchimentoAutomatico] = colunaPreenchimentoAutomatico;
        }
        cout << "\n";
    }

    cout << "\n\n\nImprimindo Matriz Automática\n";
    for (size_t linhaPreenchimentoAutomatico = 0; linhaPreenchimentoAutomatico < 10; linhaPreenchimentoAutomatico++)
    {
        for (size_t colunaPreenchimentoAutomatico = 0; colunaPreenchimentoAutomatico < 8; colunaPreenchimentoAutomatico++)
        {
            cout << matrizPreenchimentoAutomatico[linhaPreenchimentoAutomatico][colunaPreenchimentoAutomatico] << " ";
        }

        cout << "\n";
        
    }
    
    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}