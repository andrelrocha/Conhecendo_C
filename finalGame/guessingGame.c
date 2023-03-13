#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("********************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("********************************\n");

    srand(time(0));

    int random_number = rand() % 100;

    int user_guess;

    int i = 0;

    double points = 1000;

    int numberOfGuesses;
    int level;

    printf("What is the difficulty level\n");
    printf("(1) Easy (2) Medium (3) Hard\n\n");
    printf("Choose it: ");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        numberOfGuesses = 15;
        break;
    case 2:
        numberOfGuesses = 10;
        break;
    case 3:
        numberOfGuesses = 5;
        break;
    default:
        printf("Invalid option.\n");
        return 0;
    }

    while (i < numberOfGuesses)
    {
        printf("Guess %d out of %d\n", (i + 1), numberOfGuesses);
        printf("What's your guess between 1 and 100? ");
        scanf("%d", &user_guess);
        printf("Your guess was %d.\n", user_guess);

        if (user_guess < 0)
        {
            printf("You can't guess negative numbers.\n");
            continue;
        }

        int rightAnswer = (random_number == user_guess);
        double lostPoints = abs((double)(user_guess - random_number)) / 2;

        if (rightAnswer)
        {
            printf("Congratulations! You've guessed right.\n");
            printf("Total points: %.1f\n", points);
            break;
        }
        else
        {
            i++;
            points -= lostPoints;
            int higher = (user_guess > random_number);

            if (higher)
            {
                printf("Your guess was higher than the secret number.\n");
            }
            else
            {
                printf("Your guess was lower than the secret number.\n");
            }
        }
    }
}