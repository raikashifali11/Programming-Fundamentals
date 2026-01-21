// Write a program that generates a random number between 1 and 20 and asks 
// the user to guess it. Provide feedback if the guess is too high or too low. 
// Continue until the correct number is guessed.
// Sample run:
// Guess the number (between 1 and 100): 50
// Too low! Try again.
// Guess the number (between 1 and 100): 75
// Too high! Try again.
// Guess the number (between 1 and 100): 65
// Too high! Try again.
// Guess the number (between 1 and 100): 60
// Congratulations! You guessed the number in 4 tries.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, Nguesses=1;

    srand(time(NULL));
    number = rand()%100+1;
    // printf("Random number generated is %d\n",number);

    printf("Guess the number (between 1 and 100): ");
    do
    { 
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("Too low! Try again.\n");
            printf("Guess the number (between 1 and 100): ");
        }
        else if(guess>number)
        {
            printf("Too high! Try again.\n");
            printf("Guess the number (between 1 and 100): ");
        }
        else{
            printf("Congratulations! You guessed the number in %d tries.\n",Nguesses);
        }
        Nguesses++;

    } while (guess!=number);
    
    
    return 0;
}