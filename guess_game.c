#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    secret = rand() % 20 + 1; // random number between 1 and 20

    printf("Guess the number (1-20):\n");

    // Keep prompting until correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed correctly in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
