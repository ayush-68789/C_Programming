#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() 
{
    int number, guess, guesses = 0;
    srand(time(0));  // Seed the random number generator
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        guesses++;

        if (guess < number) 
        {
            printf("Higher number please.\n");
        } 
        else if (guess > number) 
        {
            printf("Lower number please.\n");
        } 
        else 
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, guesses);
        }
    } 
    while (guess != number);
}

int main() {
    number_guessing_game();
    return 0;
}
