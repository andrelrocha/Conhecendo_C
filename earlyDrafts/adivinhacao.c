#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("********************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("********************************\n");

    srand(time(0));
    
    int numero_secreto = rand() % 100;

    int chute_usuario;

    int i = 1;

    double pontos = 1000;

    while (i) {
        printf("Guess %d\n", i);
        printf("What's your guess? ");
        scanf("%d", &chute_usuario);
        printf("Your guess was %d.\n", chute_usuario);

        if (chute_usuario < 0) {
            printf("You can't guess negative numbers.\n");
            continue;
        }

        int acertou = (numero_secreto == chute_usuario);
        double pontos_perdidos = abs((double)(chute_usuario - numero_secreto)) / 2;

        if (acertou) {
            printf("Congratulations! You've guessed right.\n");
            printf("Total points: %.1f\n", pontos); 
            break;
        }
        else {
            i++;
            pontos -= pontos_perdidos;
            int maior = (chute_usuario > numero_secreto);

            if (maior) {
                printf("Your guess was higher than the secret number.\n");
            }
            else {
                printf("Your guess was lower than the secret number.\n");
            }
        }   
    }
}