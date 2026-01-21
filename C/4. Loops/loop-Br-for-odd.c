#include<stdio.h>

int main(){
    int number;

    //The program will not end until you enter an odd number
    
    printf("Enter a number : ");
    scanf("%d",&number);

    for (int i = 1; 3 < 4; i++)
    {
        if (number % 2 == 0)
        {
            printf("Enter a number : ");
            scanf("%d",&number);  
        }
        if (number % 2 != 0)
        {
            printf("The program is terminated because you have entered an odd number.\n");
            break;
        }
    }
    
    return 0;
}