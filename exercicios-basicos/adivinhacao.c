#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    // Imprime o cabeçalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("Tentativa %d de %d\n\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);        

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos\n");
            printf("--------------------------------------\n");
            i--;

            continue;
        }

        // SE O CHUTE FOR IGUAL AO NÚMERO SECRETO
        else if (acertou)
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
    }
    if (chute != numerosecreto)
    printf("\nSuas tentativas acabaram.\n");
}