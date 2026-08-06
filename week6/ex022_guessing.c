#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int target = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    printf("Welcome to the Guessing Game!\n");

    do
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > target)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}