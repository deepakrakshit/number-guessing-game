/* A program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int attempts = 0;
    int guessed_number;

    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    int random_number;
    srand(time(0));
    random_number = rand() % 100 + 1; // random_number = rand() % [max - min + 1] + min;       // (for range)

    do {
        printf("Guess a Number between 1 to 100: ");
        scanf("%d", &guessed_number);

        if(guessed_number>100 || guessed_number<0){
            printf("Out of range! Enter a number between 1 and 100.\n");
            continue;
        }

        if(guessed_number>random_number){
            printf("Lower Number Please!\n");
        }

        if(guessed_number<random_number){
            printf("Higher Number Please!\n");
        }

        attempts++;
    } while (guessed_number != random_number);

    printf("Correct! You guessed the number in %d times", attempts);
    
    return 0;
}
