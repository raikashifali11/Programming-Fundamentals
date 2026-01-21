#include<stdio.h>

int main(){
    int number;
    int power;
    int n;
    
    printf("Enter a number ");
    scanf("%d",&number);
    

    printf("Enter power ");
    scanf("%d",&power);


    if (power == 1){
        n = number;
    }

    else{

        n = number*number;
        
        for (int j = 3; j <= power; j++)
        {
            n = n*number;
        }
    }
    
    printf("%d^%d is equal to %d",number,power,n);

    return 0;
}