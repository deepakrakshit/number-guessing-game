#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int attempts = 0;
    int guessed_number;

    // Just a simple intro for the game
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    int random_number;
    srand(time(0));                   // changing the seed so we don't get the same number every time
    random_number = rand() % 100 + 1; // generating a number from 1 to 100   // random_number = rand() % [max - min + 1] + min; (for range)

    do
    {
        printf("Guess a Number between 1 to 100: ");
        scanf("%d", &guessed_number);

        // making sure the user doesn't put something outside 1–100
        if (guessed_number > 100 || guessed_number < 1)
        {
            printf("Out of range! Enter a number between 1 and 100.\n");
            continue; // skip the rest and ask again
        }

        // giving hints
        if (guessed_number > random_number)
        {
            printf("Lower Number Please!\n");
        }
        if (guessed_number < random_number)
        {
            printf("Higher Number Please!\n");
        }

        attempts++; // counting how many tries user took

    } while (guessed_number != random_number); // loop runs until the user gets it right

    // final message
    printf("Correct! You guessed the number in %d attempts.\n", attempts);

    return 0;
}
