/*
switch (expression) {
    case value1:
        // code to be executed if expression == value1
        break;
    case value2:
        // code to be executed if expression == value2
        break;
    ...
    default:
        // code to be executed if expression does not match any case
}
*/
#include <stdio.h>

int main() 
{
    int numerodetentativas;
    int nivel;

    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas = 6;
    }

    printf(numerodetentativas);
}

/*
    if(nivel == 1) {
        numerodetentativas = 20;
    }
    else if (nivel == 2) {
        numerodetentativas = 15;
    }
    else {
        numerodetentativas = 6;
    }
*/