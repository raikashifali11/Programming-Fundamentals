#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int operand1 = rand()%9+1;
    int operand2 = rand()%9+1;
    int choice = rand()%3+1;
    printf("%d\t%d\n",operand1,operand2);
    if (choice == 1)
    {
        int sum;
        printf("Enter sum of two operands: ");
        scanf("%d",&sum);
        if (sum == (operand1+operand2))
        {
            printf("Correct");
        }
        else{
            printf("Incorrect");
        }
    }
    else if (choice == 2)
    {
        int difference;
        printf("Enter difference of two operands: ");
        scanf("%d",&difference);
        if (difference == (operand1-operand2))
        {
            printf("Correct");
        }
        else{
            printf("Incorrect");
        }
    }
    else if (choice == 3)
    {
        int product;
        printf("Enter product of two operands: ");
        scanf("%d",&product);
        if (product == (operand1*operand2))
        {
            printf("Correct");
        }
        else{
            printf("Incorrect");
        }
    }    
    return 0;
}