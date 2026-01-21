#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int score = 0;
    for (int i = 1; i <= 10; i++)
    {
        int choice = rand() % 3 + 1;
        if (choice == 1)
        {
            //Addition question
            printf("1.Addition\n");
            int N1 = rand() % 100;
            int N2 = rand() % 100;
            int sum = N1 + N2;
            printf("N1:%d\tN2:%d\n", N1, N2);
            int answer;
            printf("Answer: ");
            scanf("%d", &answer);
            if (answer == sum){
                printf("Correct\n");
                score++;}
            else
                printf("Incorrect\n");
        }
        else if (choice == 2)
        {
            //Subtraction question
            printf("2.Subtraction\n");
            int N1 = rand()%90+10;
            int N2 = rand()%10;
            int difference = N1 - N2;
            printf("N1:%d\tN2:%d\n", N1, N2);
            int answer;
            printf("Answer: ");
            scanf("%d", &answer);
            if (answer == difference){
                printf("Correct\n");
                score++;}
            else
                printf("Incorrect\n");
        }
        else if (choice == 3)
        {
            //Multiplication question
            printf("3.Multiplication\n");
            int N1 = rand()%10;
            int N2 = rand()%10;
            int product = N1 * N2;
            printf("N1:%d\tN2:%d\n", N1, N2);
            int answer;
            printf("Answer: ");
            scanf("%d", &answer);
            if (answer == product){
                printf("Correct\n");
                score++;}
            else
                printf("Incorrect\n");
        }
    }
    printf("Score:%d out of 10\n",score);

    return 0;
}