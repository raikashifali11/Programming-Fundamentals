#include<stdio.h>

int main(){
    int number;

    //The program will not end until you enter multiple of 7
    
    printf("Enter a number : ");
    scanf("%d",&number);
    
    if (number == 0){
        for (int i = 0; 3 < 4; i++)
        { 
            printf("Enter a number : ");
            scanf("%d",&number);
            if (number > 0)
            {
                break;
            }
            
     
        }
    }
    if (number != 0)
    {

    for (int i = 1; 3 < 4; i++)
    {
        if (number % 7 != 0)
        {
            printf("Enter a number : ");
            scanf("%d",&number);  
        }
        if (number % 7 == 0)
        {
            printf("The program is terminated because you have entered multiple of 7.\n");
            break;
        }
    }
    }
    
    return 0;
}