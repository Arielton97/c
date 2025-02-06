#include <iostream> // Entrada e saída de dados

#include <locale.h> // Para trabalhar com acentos

// Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main()
{
    // Biblioteca responsável pelos acentos nas letras e palavras
    setlocale(LC_ALL, "Portuguese");

    /**
     *  Crie uma matriz 3x3 e solicite que o usuário digite os números.
     *  Em seguida, exiba a soma dos valores da matriz na diagonal.
     */

    int matriz[3][3];
    int somaDiagonal;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
        }
        
    }

    cout << "\n\n--------- Imprimindo ----------\n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            int num = matriz[i][j];
            cout << num << " ";
            
        }
        cout << endl;
    }


    // Fazendo a multiplicação
    cout << "\nOs números a serem somados da diagonal são:\n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            int num = matriz[i][j];
            //cout << num << " ";

            if (num == matriz[0][0] ||
            num == matriz[1][1] ||
            num == matriz[2][2])
            {
                cout << num << " ";
            }
            
            
        }
    }
    
    cout << "\n\n";

    somaDiagonal = (matriz[0][0] + matriz[1][1] + matriz[2][2]);
    cout << "A soma de " << matriz[0][0] << " + " << matriz[1][1] << " + " << matriz[2][2] << " é " << somaDiagonal << ".\n";
    

    

    // Imprime o fechamento da tela após a execução do código para dar tempo de testarmos e ver o resultado
    //system("pause");

    // Tipo de retorno da função main que é um tipo inteiro
    return 0;
}