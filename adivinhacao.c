#include <stdio.h>

int main()
{
    printf("********************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("********************************\n");

    int numeroSecreto = 13;

    int chuteUsuario;

    printf("What's your guess? ");
    scanf("%d", &chuteUsuario);
    printf("Your guess was %d.\n", chuteUsuario);

    if (numeroSecreto == chuteUsuario) {
        printf("Congratulations! You've guessed right.\n");
    } else {
        if (chuteUsuario > numeroSecreto) {
            printf("Your guess was higher than the secret number.\n");
        } else {
            printf("Your guess was lower than the secret number.\n");
        } 
        printf("You didn't find the secret number.\n");
    }
}