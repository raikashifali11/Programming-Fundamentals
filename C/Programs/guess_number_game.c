#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, Nguesses=1;

    srand(time(NULL));
    number = rand()%100+1;
    // printf("Random number generated is %d\n",number);

    printf("\nGuess the number between 1 and 100\n");
    printf("YOu will win if you guess it in 5 attempts\n");
    do
    { 
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",Nguesses);
        }
        Nguesses++;

    } while (guess!=number);
    
    
    return 0;
}