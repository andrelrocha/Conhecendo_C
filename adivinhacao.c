#include <stdio.h>

int main()
{
    printf("********************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("********************************\n");

    int numeroSecreto = 13;

    int chuteUsuario;

    int i = 0;

    //for (i=0; i<3; i++)
    while (i<3) {
        printf("What's your guess? ");
        scanf("%d", &chuteUsuario);
        printf("Your guess was %d.\n", chuteUsuario);

        int acertou = (numeroSecreto == chuteUsuario);
        if (acertou) {
            printf("Congratulations! You've guessed right.\n");
            break;
        } else {
            i++;
            int maior = (chuteUsuario > numeroSecreto);
            if (maior) {
                printf("Your guess was higher than the secret number.\n");
            } else {
                printf("Your guess was lower than the secret number.\n");
            } 
            printf("You didn't find the secret number.\n");
        }
    }
}