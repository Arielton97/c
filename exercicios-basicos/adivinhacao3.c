#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;//printf("chute %d\n", chute);
    int tentativas = 1;
    double pontos = 1000;

// ENQUANTO O JOGADOR NÃO GANHOU, FAÇA (ENQUANTO, FAÇA -> WHILE)
    while (1)
    {

        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);        

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos\n");
            printf("--------------------------------------\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // SE O CHUTE FOR IGUAL AO NÚMERO SECRETO
        if (acertou)
        {
            printf("Parabéns! Voce acertou!\n\n");
            printf("Jogue de novo, voce é um bom jogador!\n");
            break;
        }

        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto\n");//printf("%d\n", maior);
            printf("--------------------------------------\n");
        } 
        else 
        {
            printf("Seu chute foi menor que o número secreto\n");
            printf("--------------------------------------\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2.0;//printf("%d\n", pontosperdidos);
        pontos = pontos - pontosperdidos;//printf("%d\n", pontos);
        
    }
    
    printf("Você acertou em %d tentativas!\n\n", tentativas);
    printf("Fim de jogo\n");
    printf("Total de pontos: %.2f\n", pontos);
}