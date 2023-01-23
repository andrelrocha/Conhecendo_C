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
    printf("Your guess was %d", chuteUsuario);

}