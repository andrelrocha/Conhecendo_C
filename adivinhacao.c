#include <stdio.h>

// cria uma const
#define NUMERO_DE_TENTATIVAS 5

int main()
{
    printf("********************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("********************************\n");

    int numero_secreto = 13;

    int chute_usuario;

    int i = 0;

    // for (int i = 0; i<3; i++)
    while (i < NUMERO_DE_TENTATIVAS) {
        printf("Guess %d out of %d\n", (i + 1), NUMERO_DE_TENTATIVAS);
        printf("What's your guess? ");
        scanf("%d", &chute_usuario);
        printf("Your guess was %d.\n", chute_usuario);

        if (chute_usuario < 0) 
        {
            printf("You can't guess negative numbers.\n");
            continue;
        }

        int acertou = (numero_secreto == chute_usuario);
        int acabou_tentativas = (i == (NUMERO_DE_TENTATIVAS-1));
        if (acertou) {
            printf("Congratulations! You've guessed right.\n");
            break;
        }
        else {
            i++;
            int maior = (chute_usuario > numero_secreto);
            
            if (acabou_tentativas) {
            printf("You didn't find the secret number.\n");
            break;
            }

            if (maior) {
                printf("Your guess was higher than the secret number.\n");
            }
            else {
                printf("Your guess was lower than the secret number.\n");
            }
        }
    }
}